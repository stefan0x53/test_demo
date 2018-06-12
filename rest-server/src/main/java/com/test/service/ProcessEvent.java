package com.test.service;

import com.test.dto.EventMessageProto.EventMessage;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Service;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.Socket;


/**
 * Send protobuffer serialized objects to the logging mechanism
 *
 * Note: Process async in case of heavy processing, big messages and fast response required
 */
public class ProcessEvent {

    Socket socket;

    public void process(EventMessage build) throws IOException {
        if(!socket.isConnected() || socket.isClosed()) {
            socket.connect(socket.getRemoteSocketAddress());
        }
        DataOutputStream stream = new DataOutputStream(socket.getOutputStream());
        int size = build.getSerializedSize();
        // Simple protocol. Write size of the frame before.
        stream.writeInt(size);
        build.writeTo(socket.getOutputStream());
    }

    public void connect(String hostname, int port) throws IOException {
        socket = new Socket(hostname, port);
        socket.setSoTimeout(10);
    }
}

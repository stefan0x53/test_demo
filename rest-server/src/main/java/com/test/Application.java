package com.test;

import com.test.service.ProcessEvent;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import java.io.IOException;

/**
 * Main entry point of the application
 *
 * Note: The event-logger application needs to be running and ready to accept incoming connections
 */
@SpringBootApplication
public class Application {

    @Bean
    ProcessEvent makeService() throws IOException {
        ProcessEvent service = new ProcessEvent();
        // TODO: move connection step and proper propagate failure
        // also read address and port from config file
        service.connect("localhost", 12345);
        return service;
    }

    public static void main(String[] args) {
        SpringApplication.run(Application.class, args);
    }
}

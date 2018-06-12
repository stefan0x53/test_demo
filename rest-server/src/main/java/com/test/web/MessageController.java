package com.test.web;

import java.util.concurrent.atomic.AtomicLong;

import com.google.protobuf.util.JsonFormat;
import com.test.service.ProcessEvent;
import com.test.dto.EventMessageProto.EventMessage;
import com.test.dto.RestResponse;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.MediaType;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;

@RestController
@RequestMapping("/api")
public class MessageController {

    private final AtomicLong counter = new AtomicLong();

    @Autowired
    ProcessEvent processor;

    @RequestMapping(method = RequestMethod.POST, value = "/event",
            consumes = MediaType.APPLICATION_JSON_VALUE, produces = MediaType.APPLICATION_JSON_VALUE)
    public RestResponse event(@Valid @RequestBody String json) {
        try {
            EventMessage.Builder messageBuilder = EventMessage.newBuilder();
            JsonFormat.parser().usingTypeRegistry(JsonFormat.TypeRegistry.getEmptyTypeRegistry()).merge(json, messageBuilder);
            processor.process(messageBuilder.build());
            return new RestResponse(counter.incrementAndGet(), "{\"status\":\"OK\"}");
        } catch (Exception e) {
            return new RestResponse(counter.incrementAndGet(), "{\"status\":\"FAIL\", \"message\":"+ e.getMessage() +"}");
        }
    }
}

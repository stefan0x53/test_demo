package konux;

import org.springframework.http.MediaType;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import java.util.concurrent.atomic.AtomicLong;

@RestController
@RequestMapping("/api")
public class MessageController {

    private final AtomicLong counter = new AtomicLong();

    @RequestMapping(method = RequestMethod.POST, value = "/event",
            consumes = MediaType.APPLICATION_JSON_VALUE, produces = MediaType.APPLICATION_JSON_VALUE)
    public RestResponse event() {
        return new RestResponse(counter.incrementAndGet(), "{\"status\":\"OK\"}");
    }
}

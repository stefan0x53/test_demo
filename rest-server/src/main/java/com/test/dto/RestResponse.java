package com.test.dto;

public class RestResponse {

    private final long id;
    private final String status;

    public RestResponse(long id, String status) {
        this.id = id;
        this.status = status;
    }

    public long getId() {
        return id;
    }

    public String getStatus() {
        return status;
    }
}

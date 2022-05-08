package com.website.trial1.basic;

import lombok.Data;

@Data
public class Result {
    private int code;
    private double data;
    private String message;

    public static Result ok(double data) {
        Result result = new Result();
        result.code = 0;
        result.data = data;
        return result;
    }

    public static Result fail(String message) {
        Result result = new Result();
        result.code = -1;
        result.message = message;
        return result;
    }


}

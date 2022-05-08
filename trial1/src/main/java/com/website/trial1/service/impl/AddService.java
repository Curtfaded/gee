package com.website.trial1.service.impl;


import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.context.annotation.PropertySource;
import org.springframework.stereotype.Service;

@Service
public class AddService implements Calculator {
    @Override
    public Result compute(double param1, double param2) {
        return Result.ok(param1 + param2);
    }
}

package com.website.trial1.service.impl;

import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.stereotype.Service;

@Service
public class DivideService implements Calculator {
    @Override
    public Result compute(double param1, double param2) {
        if (param2 == 0)
            return Result.fail("除数不能为0");
        return Result.ok(param1 / param2);
    }
}

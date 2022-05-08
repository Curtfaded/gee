package com.website.trial1.service.impl;

import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.stereotype.Service;

@Service
public class CommonDivisorService implements Calculator {
    /**
     * 计算两个数的最大公约数
     * @param param1
     * @param param2
     * @return
     */
    @Override
    public Result compute(double param1, double param2) {
        double rem;
        while (param2 > 0) {
            rem = param1 % param2;
            param1 = param2;
            param2 = rem;

        }
        return Result.ok(param1);
    }
}

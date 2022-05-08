package com.website.trial1.service.impl;

import com.website.trial1.basic.Result;
import com.website.trial1.service.Calculator;
import org.springframework.stereotype.Service;

@Service
public class MultipleService implements Calculator {
    /**
     * 计算两个数的最小公倍数
     *
     * @param param1
     * @param param2
     * @return
     */
    @Override
    public Result compute(double param1, double param2) {
        double result = Math.max(param1, param2);
        while (!(result % param1 == 0 && result % param2 == 0)) {
            result += Math.min(param1, param2);
        }
        return Result.ok(result);
    }
}

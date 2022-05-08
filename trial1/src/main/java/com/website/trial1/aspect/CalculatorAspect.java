package com.website.trial1.aspect;

import org.aspectj.lang.JoinPoint;
import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Component;

@Component
@Aspect
public class CalculatorAspect {

    @Pointcut("execution(* com.website.trial1.service.Calculator.*(..))")
    public void pointCut() {
    }

    @Before("pointCut()")
    public void before(JoinPoint joinPoint) {
        System.out.println("请求参数: ");
        for (Object o : joinPoint.getArgs()) {
            System.out.print(o + " ");
        }
        System.out.println();
    }

    @After("pointCut()")
    public void after() {
        System.out.println("处理完毕");
    }

    @AfterReturning(returning = "returnObject", pointcut = "pointCut()")
    public void afterReturning(Object returnObject) {
        System.out.println("返回：" + returnObject);
    }

    @Around("pointCut()")
    public Object around(ProceedingJoinPoint jp) throws Throwable {
        System.out.println("环绕前");
        Object proceed = jp.proceed();
        System.out.println("环绕后");
        System.out.println("==========================");
        //返回连接点的返回值
        return proceed;
    }
}

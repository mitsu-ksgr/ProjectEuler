/******************************************************************************
 *  Project Euler: Problem 12
 *      - Highly divisible triangular number -
 *
 *  URL: https://projecteuler.net/problem=12
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2012
 *
 *****************************************************************************/
#include <stdint.h>
#include <stdio.h>

int main()
{
    const int32_t kTargetLine = 500;

    int32_t triangle = 1;
    for(int32_t i = 1;; triangle += ++i) {
        int32_t div_count = 0;
        for(int32_t k = 1; k <= triangle; ++k) {
            if(triangle % k == 0)
                div_count++;
        }
        if(div_count >= kTargetLine)
            break;
    }

    printf("The first triangle with more than 500 divisors: %u\n", triangle);
    return 0;
}


/******************************************************************************
 *  Project Euler: Problem 2
 *      - Even Fibonacci numbers -
 *
 *  URL: https://projecteuler.net/problem=2
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%202
 *
 *****************************************************************************/
#include <stdint.h>
#include <stdio.h>

int main()
{
    const uint64_t kLimit = 4000000;
    uint64_t x = 1, y = 2, sum = 0;
    while(1) {
        if(x > kLimit) break;
        if(x % 2 == 0) sum += x;

        if(y > kLimit) break;
        if(y % 2 == 0) sum += y;

        y += x += y;
    }
    printf("sum = %lld\n", sum);
    return 0;
}


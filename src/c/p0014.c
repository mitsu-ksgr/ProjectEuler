/******************************************************************************
 *  Project Euler: Problem 14
 *      - Longest Collatz sequence -
 *
 *  URL: https://projecteuler.net/problem=14
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2014
 *
 *****************************************************************************/
#include <stdint.h>
#include <stdio.h>

static const uint32_t kLimit = 1000000;

int main()
{
    uint32_t max_value = 0;
    uint32_t max_count = 0;
    for(uint32_t i = 1; i <= kLimit; ++i) {
        uint32_t n = i, count = 1;

        while(n != 1) {
            n = (n%2 == 0) ? n / 2 : 3 * n + 1;
            count++;
        }

        if(count > max_count) {
            max_value = i;
            max_count = count;
        }
    }

    printf("%d\n", max_value);
    return 0;
}


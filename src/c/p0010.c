/******************************************************************************
 *  Project Euler: Problem 10
 *      - Summation of primese -
 *
 *  URL: https://projecteuler.net/problem=10
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2010
 *
 *****************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

typedef unsigned long long ULL;

bool isPrime(ULL n)
{
    bool result = false;
    if(n <= 2) {
        result = n == 2;
    } else {
        for(ULL i = 2; i < n && (result = n % i++);)
            ;
    }
    return result;
}

int main()
{
    const ULL kLimit = 2000000UL;

    // 素直にやると計算量が多過ぎるので、工夫が必要
    ULL sum = 0UL;
    for(ULL i = 0; i < kLimit; ++i) {
        if(isPrime(i)) {
            sum += i;
            printf("add %10lld: SUM=%lld\n", i, sum);
        }
    }

    printf("Summation primes = %lld\n", sum);
    return 0;
}


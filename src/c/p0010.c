/******************************************************************************
 *  Project Euler: Problem 10
 *      - Summation of primese -
 *
 *  URL: https://projecteuler.net/problem=10
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%2010
 *
 *****************************************************************************/
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool isPrime(uint64_t n)
{
    bool result = false;
    if(n <= 2) {
        result = n == 2;
    } else {
        for(uint64_t i = 2; i < n && (result = n % i++);)
            ;
    }
    return result;
}

int main()
{
    const uint64_t kLimit = 2000000;

    uint64_t sum = 2;
    for(uint64_t i = 3; i < kLimit; i+=2) {
        if(isPrime(i))
            sum += i;
    }

    printf("Summation primes = %lld\n", sum);
    return 0;
}


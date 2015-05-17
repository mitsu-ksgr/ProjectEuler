/******************************************************************************
 *  Project Euler: Problem 7
 *      - 10001st prime -
 *
 *  URL: https://projecteuler.net/problem=7
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%207
 *
 *****************************************************************************/
#include <stdbool.h>
#include <stdio.h>

bool isPrime(unsigned long long n)
{
    bool result = false;
    if(n <= 2) {
        result = n == 2;
    } else {
        for(unsigned long long i = 2; i < n && (result = n % i++);)
            ;
    }
    return result;
}

int main()
{
    const int kTarget = 10001;
    int cnt = 0;
    unsigned long long prime = 2;
    for(prime = 0; cnt < kTarget;) {
        if(!isPrime(++prime))
            continue;
        cnt++;
    }
    printf("%dst prime is %lld\n", kTarget, prime);
    return 0;
}


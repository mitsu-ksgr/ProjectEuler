/******************************************************************************
 *  Project Euler: Problem 3
 *      - Largest prime factor -
 *
 *  URL: https://projecteuler.net/problem=3
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%203
 *
 *****************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

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
    unsigned long long n = 600851475143;
    unsigned long long prime, temp, max = 0;
    temp = n;

    for(prime = 2; temp > 1; ++prime) {
        if(!isPrime(prime))
            continue;
        while(!(temp % prime)) {
            temp /= prime;
        }
        if(max < prime)
            max = prime;
    }
    printf("Largest prime factor of %lld is %lld\n", n, max);
    return 0;
}


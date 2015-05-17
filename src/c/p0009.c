/******************************************************************************
 *  Project Euler: Problem 9
 *      - Special Pythagorean triplet -
 *
 *  URL: https://projecteuler.net/problem=9
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%209
 *
 *****************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    const long long kABC = 1000;
    const long long kMin = 1;
    const long long kMax = kABC;

    long long a, b, c;
    for(a = kMin; a < kMax; ++a) {
        for(b = a; b < kMax; ++b) {
            long long c2 = a * a + b * b;
            c = (long long)sqrt(c2);

            if(c*c == c2 && (a+b+c) == kABC) {
                goto FINISH;
            }
        }
    }

FINISH:
    printf("a=%lld, b=%lld, c=%lld: Product = %lld\n",
            a, b, c, (a * b * c));

    return 0;
}


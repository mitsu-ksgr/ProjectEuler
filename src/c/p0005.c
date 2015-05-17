/******************************************************************************
 *  Project Euler: Problem 5
 *      - Smallest multiple -
 *
 *  URL: https://projecteuler.net/problem=5
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%205
 *
 *****************************************************************************/
#include <stdio.h>

int main()
{
    const unsigned long long kBegin = 1;
    const unsigned long long kEnd   = 20;

    unsigned long long i, k;
    for(i = kBegin;; ++i) {
        for(k = kEnd; k >= kBegin; --k) {
            if(i % k == 0) continue;
            break;
        }
        if(k == kBegin - 1)
            break;
    }
    printf("Smallest multiple is %lld\n", i);

    return 0;
}


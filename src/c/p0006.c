/******************************************************************************
 *  Project Euler: Problem 6
 *      - Sum square difference -
 *
 *  URL: https://projecteuler.net/problem=6
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%206
 *
 *****************************************************************************/
#include <stdio.h>

int main()
{
    const int kLimit = 100;
    long x = (kLimit * (kLimit + 1) * (2 * kLimit + 1)) / 6;
    long y = (kLimit + 1) * (kLimit / 2); y *= y;
    long diff = y - x;

    //printf("%ld - %ld = %ld\n", y, x, (y - x));
    printf("diff = %ld\n", diff);
    return 0;
}


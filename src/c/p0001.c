/******************************************************************************
 *  Project Euler: Problem 1
 *      - Multiples of 3 and 5 -
 *
 *  URL: https://projecteuler.net/problem=1
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201
 *
 *****************************************************************************/
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i < 1000; ++i) {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("sum = %d\n", sum);
    return 0;
}


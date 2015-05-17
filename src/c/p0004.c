/******************************************************************************
 *  Project Euler: Problem 4
 *      - Largest palindrome product -
 *
 *  URL: https://projecteuler.net/problem=4
 *       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%204
 *
 *****************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int getDigits(int n)
{
    int digits = 0;
    for(int temp = n; temp > 0; ++digits) {
        temp /= 10;
    }
    return digits;
}

bool isPalindrome(int n)
{
    int digits = getDigits(n);
    if(digits == 1)
        return false;

    // create string.
    int buf_size = digits + 1;
    char *snum = (char*)malloc(sizeof(char) * buf_size);
    if(snum == NULL)
        return false;
    snprintf(snum, buf_size, "%d", n);
    snum[buf_size - 1] = '\0';

    // check.
    bool result = true;
    int half = digits / 2;
    for(int i = 0; i < half; ++i) {
        if(snum[i] != snum[digits - i - 1])
            result = false;
    }

    free(snum);
    snum = NULL;
    return result;
}


int main()
{
    const int kMin = 100;
    const int kMax = 999;

    int a, b, max;
    a = b = kMin;
    max = 0;

    for(int a = kMin; a <= kMax; ++a) {
        for(int b = a; b <= kMax; ++b) {
            int n = a * b;
            if(!isPalindrome(n))
                continue;

            //printf("%2d x %2d = %4d\n", a, b, n);
            max = max < n ? n : max;
        }
    }

    printf("Largest palindrome is %d\n", max);
    return 0;
}


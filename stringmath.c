//  clang string.c -lm (-lm links the math header file with this file)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[6] = "Hello";
    char b[6] = "World";
    char c[12];
    printf("%lf\n", ceil(3.6));
    printf("%lf\n", floor(3.2));
    printf("%lf\n", sqrt(7));
    printf("%lf\n", pow(2, 4));
    printf("%d\n", abs(-12));
    strcpy(c, b);
    strcat(c, b);
    printf("String c: %s\n", c);
    printf("String length of c: %lu\n", strlen(c));
    printf("StrA - StrB: %d\n", strcmp(a, b));
    return 0;
}
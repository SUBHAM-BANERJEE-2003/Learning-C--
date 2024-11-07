#include <stdio.h>

int main()
{

    // C prog showing problem with arrays
    int arr[5] = {100,200,300,400,500,600};
    arr[500] = 800;
    printf("%d\n", arr[500]);
    printf("%d\n", arr[5]);
    int a[] = {10,20,30,40,50,60};
    int *p[] = {a, a+1,a+2,a+3,a+4,a+5};
    int **pp = p;
    pp++;
    printf("%d %d %d\n", pp-p, *pp-a, **pp);
    *pp++;
    printf("%d %d %d\n", pp-p, *pp-a, **pp);
    ++*pp;
    printf("%d %d %d\n", pp-p, *pp-a, **pp);
    ++**pp;
    printf("%d %d %d\n", pp-p, *pp-a, **pp);
    return 0;
}
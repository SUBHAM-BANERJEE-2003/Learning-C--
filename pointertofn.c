#include <stdio.h>

int fun(int a, int b){
    return a + b;
}

double func(int a, int b){
    return a*b/3.14;
}

void func1(void(*)());
void func2();

int main(){
    int(*ptr)(int, int) = fun;
    double(*pt)(int, int) = func;
    printf("%p\n", pt);
    printf("%p\n", func);
    printf("%lf\n", (*pt)(10,20));
    printf("%lf\n", pt(10,20));
    printf("%lf\n", func(10,20));
    int res = ptr(10, 20);
    printf("%d\n", res);
    func1(func2);
}

void func1(void (*ptr)()){
    printf("Function1 is called\n");
    (*ptr)();
}

void func2(){
    printf("Function2 is called\n");
}
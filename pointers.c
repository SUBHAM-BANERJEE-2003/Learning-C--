#include <stdio.h>

int main(){
//     int a = 259;
//     int b = 12;
//     const int * cp = &a; // pointer to a constant integer. we cannot change a's value using this pointer though.
//     // *cp = 23; // error
//     int* const cp1 = &a; // constant pointer to an integer.  we have to initialize a constant pointer before setting the address or else later we connot later.
//     int * const cp3;
//     // cp3 = &b; // error
//     // cp1 = &b; // we cannot point to another location using a constant pointer
//     cp = &a; // this is allowed as its a pointer to constant integer and integer remains constant only after pointing
//     int *p = &a;
//     int *q = p;
//     void *v = &a;
//     printf("%d\n", *p);
//     printf("%d\n", *q);
//     // printf("%d\n", *v); // compiler error, it doesnt know how many bytes to read, we cannot dereference a void pointer
//     printf("%d\n", *(int*)v); // i type casted the void pointer to integer. now compiler doesnt have any issues
//     printf("%d\n", *(char*)v); // it will read only the MSB, ie, only one byte for a character as it doesnt know anything. if a = 259, first convert to binary and then read the MSB    
//     printf("%p\n", p);
//     printf("%p\n", q);
//     printf("%p\n", v);

//     // c can be very dangerous, we can even change the value of constant variable using pointers
    const float pi = 3.141;
    float* ptr = &pi;
    *ptr = 3;
    printf("%f\n", *ptr);  // i changed the value of a constant :P
    printf("%f\n", pi); // its changed also... in gcc.. though clang has fixed this

    // const int aa = 3, bb = 5;
    // const int* const ptr = &aa;
    // ptr = &bb; // cannot modify the address of a constant pointer
    // *ptr = 9; // cannot modify a constant value
    // double pointer 
    // int mv = 1;
    // int *ptr1 = &mv;
    // double *ptrd = &mv;
    // int **ptr2 = &ptr1;
    // printf("%d\n", **ptr2);
    // printf("%ld\n", sizeof(ptr2));
    // printf("%lu\n", ptr1); // base address
    // printf("%lu\n", ++ptr1); // after increment, it moves 4B ahead
    // printf("%lu\n", ptrd); // after increment, it moves 8B ahead
    // printf("%lu\n", ++ptrd); // after increment, it moves 8B ahead
    // printf("%lu\n", ptr2); // after increment, it moves 8B ahead
    // printf("%lu\n", ++ptr2); // after increment, it moves 8B ahead
}
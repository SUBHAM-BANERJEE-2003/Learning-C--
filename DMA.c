#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10/3;
    printf("%d\n", x);
    int *mp = (int*)malloc(x*sizeof(int)); // garbage value. returns null if mem not available. contigous memory location
    int *cp = (int*)calloc(x, sizeof(int)); // initialize the mem with 0. returns null if mem not available
    mp[0] = 1, mp[1] = 2, mp[2] = 3;
    cp[0] = 4, cp[1] = 5, cp[2] = 6;
    printf("%d %d %d, Address: %p \n", mp[0], mp[1], mp[2], mp);
    printf("%d %d %d, Address: %p \n", cp[0], cp[1], cp[2], cp);
    mp = realloc(mp, sizeof(int)); // reduce the size again to 4B
    free(mp);
    printf("%d %d %d, Address: %p \n", mp[0], mp[1], mp[2], mp);
}
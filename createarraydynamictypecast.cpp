#include <bits/stdc++.h>
using namespace std;

int main(){
    int *a, sum = 0;
    a = new int[6];
    for(int i = 0; i < 6; i++){
        a[i] = i + 1; // array is 1,2,3,4,5,6
    }
    for(int i = 0; i < 6; i++){
        sum += a[i]; // sum of array= 21
    }
    for(int i = 0; i < 6; i++){
        sum += a[i]; // sum of array= 42
    }
    delete [] a;
    // good practice to set a to NULL after deleting which will prevent dangling pointer and give us segfault if we try to access a.
    // a = NULL;
    for(int i = 0; i < 6; i++){
        sum += a[i]; // sum of array = garbage value because array is deleted. a becomes a dangling pointer.
    }
    cout << sum << endl;

    // TYPECASTING:
    cout << (char)66 << endl; // B
    cout << (int)'B' << endl; // 66
    int myvar = 257;
    char ch = (char)myvar + 'a';
    cout << ch << endl; // b because 257%256 = 1 which is the ASCII value of 'a'. and the system is little endian. so it will print the last byte of the integer.
}
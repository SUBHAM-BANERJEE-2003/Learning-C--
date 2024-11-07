#include <bits/stdc++.h>
using namespace std;

int main(){
    // Lambda functions are anonymous functions. They are used to write inline functions. They are used to write small functions which are not used anywhere else. They are used to write functions which are used only once. They are used to write functions which are passed as arguments to other functions. They are used to write functions which are used as return values from other functions. They are used to write functions which are used as variables. They are used to write functions which are used as data members of classes. They are used to write functions which are used as template arguments. They are used to write functions which are used as arguments to other functions. They are used to write functions which are used as return values from other functions. They are used to write functions which are used as variables. 
    // syntax: [capture list](parameters) -> return_type {body} 

    auto add = [](int a, int b) -> int {return a+b;}; // lambda function. it is used to write inline functions. it is used to write small functions which are not used anywhere else. it is used to write functions which are used only once. it is used to write functions which are passed as arguments to other functions. it is used to write functions which are used as return values from other functions. 
    cout << add(10, 20) << endl;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f = accumulate(arr, arr+10, 1, [](int i, int j){
        return i * j; // it accumulates the result of the lambda function
    }); 
    cout << f << endl; // factorial of 10
    vector<int> v1 = {1, 2, 3, 4, 5};
    auto pushinto = [&] (int m){ // & means pass by reference. it passes the reference of v1 into the lambda function
        v1.push_back(m); // it pushes the element into the vector. it gets reference of v1 vector from outside
    };
    pushinto(6);
    auto printarr = [v1](){ // it passes the reference of v1 into the lambda function
        for(auto i: v1){
            cout << i << " "; // it prints the elements of the vector
        }
        cout << endl;
    };
    printarr();
    int a = 10, b = 20;
    auto printvalues = [=](){ // = means capture by value. it captures the values of a and b from outside. it is used to pass the values of a and b into the lambda function
        cout << "a: " << a << " b: " << b << endl; // it prints the values of a and b
    };
    printvalues();
}

// #include <iostream>
// #include <stdexcept>
// #include <functional>

// int y = 10;

// // Function that can throw an exception
// int divide(int x) {
//     if (y == 0) {
//         throw std::runtime_error("Divide by zero error");
//     }
//     return x / y;
// }

// int main() {
//     // Lambda that captures y by value and can throw
//     auto myLambda = [=]() mutable {
//         int x = 20; // Example value for x
//         try {
//             int result = divide(x);
//             return result;
//         } catch (const std::runtime_error& e) {
//             std::cerr << "Error: " << e.what() << std::endl;
//             return 0; // Return a default value in case of an error
//         }
//     };

//     int result = myLambda();
//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }

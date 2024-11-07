#include <bits/stdc++.h>
using namespace std;

int divide(int x, int y){
    if(y == 0){
        throw runtime_error("Divide by zero exception");
    }
    return x / y;
}

int main(){
    int y = 10;
    auto myLambda = [=]() mutable -> int{
        int x = 20;
        int y = 0;
        try{
            int result = divide(x, y);
            return result;
        } catch(const runtime_error& e){
            cerr << "Error: " << e.what() << endl;
            return 0;
        }
    };
    int result = myLambda();
    cout << "Result: " << result << endl;
    return 0;
}
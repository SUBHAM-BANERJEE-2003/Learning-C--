#include <bits/stdc++.h>
using namespace std;

/*
function definitions of 2 functions:
1. count- template<class InputIterator, class T> typename iterator_traits<InputIterator>::difference_type count(InputIterator first, InputIterator last, const T& val);
2. count_if- template<class InputIterator, class UnaryPredicate> typename iterator_traits<InputIterator>::difference_type count_if(InputIterator first, InputIterator last, UnaryPredicate pred);
*/

bool isEven(int i){ return i%2 == 0; }

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int x = 5;
    int cnt = count(v.begin(), v.end(), x); // count will return the number of times x is present in the vector.
    cout << "Count of " << x << " is " << cnt << endl;
    int cntif = count_if(v.begin(), v.end(), isEven); // count_if will return the number of elements that satisfy the condition.
    cout << "Count of even numbers is " << cntif << endl;
    // count using upper and lower bound
    auto it1 = lower_bound(v.begin(), v.end(), x);
    auto it2 = upper_bound(v.begin(), v.end(), x);
    cout << "Count of " << x << " is " << it2 - it1 << endl;
    return 0;
}
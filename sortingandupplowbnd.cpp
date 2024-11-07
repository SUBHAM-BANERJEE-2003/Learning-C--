#include <bits/stdc++.h>
using namespace std;

/*
function definitions of 3 functions:
1. binary_search- template<class ForwardIterator, class T> bool binary_search(ForwardIterator first, ForwardIterator last, const T& val);
2. lower_bound- template<class ForwardIterator, class T> ForwardIterator lower_bound(ForwardIterator first, ForwardIterator last, const T& val);
3. upper_bound - template<class ForwardIterator, class T> ForwardIterator upper_bound(ForwardIterator first, ForwardIterator last, const T& val);
*/


int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int x = 5;
    auto it0 = binary_search(v.begin(), v.end(), x);
    cout << "Binary Search for " << x << " is " << it0 << endl; // it will only tell if the element is present or not. not the index.
    auto it1 = lower_bound(v.begin(), v.end(), x); // lower bound will give the index of the first element that is greater than or equal to x.
    cout << "Lower Bound of " << x << " is at index " << it1 - v.begin() << endl;
    cout << "Value at lower bound is " << *it1 << endl;
    auto it2 = upper_bound(v.begin(), v.end(), x); // upper bound will give the index of the first element that is greater than x. 
    cout << "Upper Bound of " << x << " is at index " << it2 - v.begin() << endl;
    cout << "Value at upper bound is " << *it2 << endl;
    return 0;
}
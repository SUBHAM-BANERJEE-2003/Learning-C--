#include <bits/stdc++.h>
using namespace std;

/*
function definitions of 3 functions:
1. find- template<class InputIterator, class T> InputIterator find(InputIterator first, InputIterator last, const T& val);
2. find_if- template<class InputIterator, class UnaryPredicate> InputIterator find_if(InputIterator first, InputIterator last, UnaryPredicate pred);
3. find_end - template<class ForwardIterator1, class ForwardIterator2> ForwardIterator1 find_end(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2, ForwardIterator2 last2);
*/

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int x = 5;
    auto it0 = find(v.begin(), v.end(), x); // find will return the iterator to the first element that is equal to x.
    cout << "Find for " << x << " is at index " << it0 - v.begin() << endl;
    cout << "Value at find is " << *it0 << endl;
    auto it1 = find_if(v.begin(), v.end(), [](int i){ return i%2 == 0; }); // find_if will return the iterator to the first element that satisfies the condition.
    cout << "Find_if for even number is at index " << it1 - v.begin() << endl;
    cout << "Value at find_if is " << *it1 << endl;
    vector<int> v2 = {5,6,7};
    auto it2 = find_end(v.begin(), v.end(), v2.begin(), v2.end()); // find_end will return the iterator to the first element of the last occurrence of the second vector in the first vector.
    cout << "Find_end for v2 is at index " << it2 - v.begin() << endl;
    cout << "Value at find_end is " << *it2 << endl;
    return 0;
}

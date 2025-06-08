/* Difference b/w a pair & Map is that Map has a unique key, were pair is just a 
    collection of 2 int int (or any other variable).*/

#include<iostream>
#include <utility> // for Pair
using namespace std;

int main(){

    // Initialization
    //1.
    pair<int, int> p; 

    //2.
    pair<int, int> p(1, 2); // p.first is 1 and p.second is 2

    //3.
    pair<int, int> p = make_pair(1, 2); // p.first is 1 and p.second is 2



    // Accessing
    int first = p.first;   // Access the first element
    int second = p.second; // Access the second element



    // Operations
    pair<int, int> p1(1, 2);
    pair<int, int> p2(1, 2);
    pair<int, int> p3(2, 3);
    bool isEqual = (p1 == p2);    // true
    bool isNotEqual = (p1 != p3); // true


    bool lessThan = (p1 < p3);    // true if p1.first < p3.first or (p1.first == p3.first and p1.second < p3.second)
    bool greaterThan = (p3 > p2); // true if p3.first > p2.first or (p3.first == p2.first and p3.second > p2.second)



    // Swapping Pairs
    pair<int, int> p1(1, 2);
    pair<int, int> p2(3, 4);

    p1.swap(p2); // Now p1 is (3, 4) and p2 is (1, 2)



    // Assigning Pairs
    pair<int, int> p1(1, 2);
    pair<int, int> p2;

    p2 = p1; // p2 is now (1, 2)
}
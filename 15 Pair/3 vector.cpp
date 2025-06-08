#include <iostream>
#include <vector>
#include <utility> // for std::pair
#include <algorithm>

using namespace std;

int main(){
    // Declare the vector of pairs
    vector<pair<int, int>> v;

    // Add some pairs to the vector
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(3, 4));
    v.push_back(make_pair(5, 6));

    // Iterate and print the pairs
    for (const auto &p : v){
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    /*
    (1, 2)
    (3, 4)
    (5, 6)
    */

    // Accesing elements
    cout << v[0].first << endl;     // 1
    cout << v[0].second << endl;    // 2


    // Sort (based on pair.first)
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(10, 4));
    v.push_back(make_pair(3, 6));
    v.push_back(make_pair(9, 1));
    sort(v.begin(), v.end());

    /*
    (1, 2)
    (3, 6)
    (9, 1)
    (10, 4)
    */
}

/*
(1, 2)
(3, 4)
(5, 6)

1
2

(1, 2)
(3, 6)
(9, 1)
(10, 4)
*/
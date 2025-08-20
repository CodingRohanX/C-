#include <iostream>
#include <deque>
using namespace std;

/*This is double-ended queue 
Can insert and delet from both ends (front and back) ; */

int main() {
    deque<int> dq;

    // Push elements to the back
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    /*
    Elements: 1 2 3
    Front element: 1
    Back element: 3
    */



    // Push elements to the front
    dq.push_front(0);
    dq.push_front(-1);
    dq.push_back(6);

    /*
    Elements: -1 0 1 2 3 6
    Front element: -1
    Back element: 6
    */



    dq.pop_front();
    dq.pop_back();

    /*
    Elements: 0 1 2 3
    Front element: 0
    Back element: 3
    */    



    // Insert an element at position 1
    dq.insert(dq.begin() + 1, 10);
    /*
    Elements: 0 10 1 2 3
    Front element: 0
    Back element: 3
    */



    // Erase the element at position 2
    dq.erase(dq.begin() + 2);

    /*
    Elements: 0 10 2 3
    Front element: 0
    Back element: 3
    */

    
    // Print elements
    cout << "Elements:";
    for (const auto& elem : dq) {
        cout << " " << elem;
    }
    cout << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}
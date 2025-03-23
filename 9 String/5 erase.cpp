#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Rohan";
    s.erase(0, 1);  //0th index se Next 1 Element ko Delete kardo
    // ohan
    s.erase(1, 1);  //1st index se Next 1 Element ko Delete kardo
    // Rhan
    s.erase(1, 2);
    // Ran
    s.erase(1, 3);  //1st index se Next 3 Element ko Delete kardo
    // Rn
    s.erase(2, 1);  //2nd index se Next 1 Element ko Delete kardo
    // Roan

    cout << s;
}

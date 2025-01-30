#include <iostream>
using namespace std;

int main()
{
    int var = 10;    // an integer variable
    int *ptr = &var; // a pointer variable that holds the address of var

    cout << "Value of var: " << var << endl;             // prints the value of var
    cout << "Address of var: " << &var << endl;          // prints the address of var
    cout << "Value stored in ptr: " << ptr << endl;      // prints the address stored in ptr
    cout << "Value pointed to by ptr: " << *ptr << endl; // prints the value pointed to by ptr

    return 0;
}

/*
Value of var: 10
Address of var: 0x61ff08
Value stored in ptr: 0x61ff08
Value pointed to by ptr: 10
*/
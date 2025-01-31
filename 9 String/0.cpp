#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "abcdefghijk";

    // converting Lower to Upper

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // ABCDEFGHIJK

    string s1 = "abcdefghijklmnopqrstuvwxyz";
    string s2;
    s2 = s1.substr(0, 5); // Get the first 5 characters from s1 and assign them to s2
    cout << s2 << endl;

    // abcde
}
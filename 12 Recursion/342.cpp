#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(float n, bool f=0) {
    if(n==1 && f==0) return 1;
    if(n<4) return 0;
    if(n==4) return 1;
    return isPowerOfFour(n/4,1);
}

int main() {
	cout<<isPowerOfFour(256);
}

// 4 16 64 256 1024

//Here we are checking if given number is 4^x or not, like -> 4 16 64 256 1024
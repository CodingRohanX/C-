#include<iostream>
using namespace std;

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return(n&mask);
}

int main(){
    cout<<clearBit(5,2)<<endl;
}

/*      1<<i, 1 left shift twice we get -> 0100 then its 1's compliment is 1011
1       0101 & 1011 = 0001
*/
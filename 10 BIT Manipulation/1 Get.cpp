#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return((n&(1<<pos))!=0);
}

int main(){
    cout<<getBit(5,2)<<endl;
}

/*          
1           //(5)=(101)
*/          //101 & 100 = 100, Therefore bit at 2nd Index is 1.
//             5    choose 100 , 1<<i 1 is left shifted 2 times ('i' times).
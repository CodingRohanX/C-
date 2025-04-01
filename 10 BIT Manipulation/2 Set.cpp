#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return((n|(1<<pos)));
}

int main(){
    cout<<setBit(5,1)<<endl;
}

/*
7       //101 | 010 = 111   Therefore at 1st Index 1 is set.
          (5)   left shift once   (7)
*/
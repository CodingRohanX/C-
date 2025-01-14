#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d1 = 572;
    int d2 = 475;
    int d3 = 7;
    if(d1>d2){
        if(d3>d2){
            cout<<d2<<endl;
        }
        else if(d2>=d3){
            cout<<d3<<endl;
        }
    }
    else if(d2>=d1){
        if(d3>d1){
            cout<<d1<<endl;
        }
        else if(d2>=d3){
            cout<<d3<<endl;
        }
    }
}
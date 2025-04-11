#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> myVector;
    myVector.push_back('a'); // Adds the character 'a' to the end of the vector
    // a



    vector<char> myVector = {'a', 'b', 'c'};
    myVector.pop_back(); // Removes the character 'c' from the end of the vector
    /*
    a b c           //before
    a b             //after
    */



    vector<char> myVector = {'a', 'b', 'c'};
    int size = myVector.size(); 
    //3



    myVector.clear(); // Removes all elements from the vector



    vector<char> myVector;
    bool isEmpty = myVector.empty(); // isEmpty will be true



    vector<char> myVector = {'a', 'b', 'c'};
    char element = myVector[1];
    //b



    for(int i=0;i<myVector.size();i++){
        cout<<myVector[i]<<" ";
    }



    string s="Rohan";
    vector<char> v;
    for(int i=0;i<5;i++){
        v.push_back(s[i]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    //Rohan
}
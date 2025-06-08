#include<iostream>
using namespace std;

class Student{
    string name;

    public:
    int age;
    bool gender;

    Student(){
        cout<<"Default constructer"<<endl;      //Since no parameter passed
    }

    Student(string s,int a,int g){          //Constructor
        name=s;
        age=a;
        gender=g;
    }

    Student(Student &a){
        cout<<"Copy Constructer"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    void setName(string s){
        name=s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }

    bool operator==(Student &a){
        if(name==a.name && age==a.age && gender=a.gender){
            return true;
        }
        return false;

    }
};

int main(){
    Student a("Rohan",20,1);
    a.printInfo();
    Student b;
    Student c=a;

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
}

/*
Name: Rohan
Age: 20
Gender: 1
Default constructer
Copy Constructer
*/
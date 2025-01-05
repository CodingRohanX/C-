#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> building1(3, vector<int>(10));
        for (int i = 0; i < building1.size(); ++i) {
            for (int j = 0; j < building1[i].size(); ++j) {
                building1[i][j]=0;
            }
        }

    vector<vector<int>> building2(3, vector<int>(10));
        for (int i = 0; i < building2.size(); ++i) {
            for (int j = 0; j < building2[i].size(); ++j) {
                building2[i][j]=0;
            }
        }

    vector<vector<int>> building3(3, vector<int>(10));
        for (int i = 0; i < building3.size(); ++i) {
            for (int j = 0; j < building3[i].size(); ++j) {
                building3[i][j]=0;
            }
        }

    vector<vector<int>> building4(3, vector<int>(10));
        for (int i = 0; i < building4.size(); ++i) {
            for (int j = 0; j < building4[i].size(); ++j) {
                building4[i][j]=0;
            }
        }

    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==1){
            building1[b-1][c-1]=building1[b-1][c-1]+d;
        }
        else if(a==2){
            building2[b-1][c-1]=building2[b-1][c-1]+d;
        }
        else if(a==3){
            building3[b-1][c-1]=building3[b-1][c-1]+d;
        }
        else if(a==4){
            building4[b-1][c-1]=building4[b-1][c-1]+d;
        }
    }

    //For printing
    //cout<<" "; 
    for (int i = 0; i < building1.size(); ++i) {
        cout<<" ";
        for (int j = 0; j < building1[i].size(); ++j) {
            if(j!=building1[i].size()-1){
                cout << building1[i][j] << " ";
            }
            else{
                cout << building1[i][j];
            }
        }
    cout << endl;
    }
    cout<<"####################"<<endl;

    for (int i = 0; i < building2.size(); ++i) {
        cout<<" ";
        for (int j = 0; j < building2[i].size(); ++j) {
            if(j!=building2[i].size()-1){
                cout << building2[i][j] << " ";
            }
            else{
                cout << building2[i][j];
            }
        }
    cout << endl;
    }
    cout<<"####################"<<endl;

    for (int i = 0; i < building3.size(); ++i) {
        cout<<" ";
        for (int j = 0; j < building3[i].size(); ++j) {
            if(j!=building3[i].size()-1){
                cout << building3[i][j] << " ";
            }
            else{
                cout << building3[i][j];
            }
        }
    cout << endl;
    }
    cout<<"####################"<<endl;

    for (int i = 0; i < building4.size(); ++i) {
        cout<<" ";
        for (int j = 0; j < building4[i].size(); ++j) {
            if(j!=building4[i].size()-1){
                cout << building4[i][j] << " ";
            }
            else{
                cout << building4[i][j];
            }
        }
    cout << endl;
    }
    
}

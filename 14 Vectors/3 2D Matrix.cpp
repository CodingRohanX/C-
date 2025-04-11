#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> a; // 2D vector

    // initialization of a 2x3 matrix with zeroes
    vector<vector<int>> matrix(2, vector<int>(3, 0));

    // initialization of a 2x2 matrix with specific values
    vector<vector<int>> matrix = {{1, 2}, {3, 4}, {5,6}};

    matrix.push_back({5, 6, 7}); // Add a row
    // v.push_back({v1[1][1],5});   // v1 is another matrix

    matrix[0].push_back(8); // Add an element to the first row
    /*
    Before:
    1 2 
    3 4 
    5 6 

    After:
    1 2 8 
    3 4 
    5 6 
    */

    //push_back random elements
    vector<vector<int>> v;
    int a,b;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    /*
    1 2
    3 4
    5 6
    */



    // Delete a Row
    int rowToDelete=1;
    matrix.erase(matrix.begin() + rowToDelete);
    /*
    Before:
    1 2 3 
    4 5 6 
    7 8 9 

    After:
    1 2 3 
    7 8 9 
    */



    // No of rows
    int rows = matrix.size();
    cout<<rows;

    int column = matrix[0].size();
    cout<<column;


    matrix.erase(matrix.begin() + rowIndex); // Remove a specific row

    matrix[row].erase(matrix[row].begin() + columnIndex); // Remove an element from a specific row


    // Print Matrix
    for (int i = 0; i < matrix.size(); ++i){
        for (int j = 0; j < matrix[i].size(); ++j){
            cout << matrix[i][j] << " ";
        }cout << endl;
    }

    // Print 2
    for(auto i : matrix){
        for(auto j : i){
            cout<<j<<" ";
        }cout<<endl;
    }

    int n = 4, m = 5;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    /*
    0 1 1 0 1
    1 1 1 1 1
    1 1 0 1 1
    1 1 1 1 1
    */


    sort(v.begin(),v.end());
    /*
    58 81 
    43 90 
    32 65 

    sorted:         //sorted on the basis of 1st number
    32 65 
    43 90 
    58 81 
    */


    1 2 3
    4 5 6
    m[1][0]=4


    vector<string> v={"abc","def","ijk"};
    cout<<v[0][0]<<endl;        //a
    cout<<v[1][0]<<endl;        //d
}
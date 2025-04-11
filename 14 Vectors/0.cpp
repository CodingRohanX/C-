#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    //3 Ways to initialize a Vector.

    // 1. Declaration
    //vector<int> a;

    // 2. Initialization with size
    vector<int> a(n);

    // 3. Initialization with size and default value
    vector<int> aWithSize(5, 0);
    /* 0 0 0 0 0 */

    // 4. Initialization using initializer list
    vector<int> myInitializedVector = {1, 2, 3, 4, 5};






    vector<int> a={1,2,3,4,5};

    // Printing/Accessing elements
    int value = a[2];

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    /* 1 2 3 4 5 */

    // Printing/Accessing elements using iterators
    for (auto it=a.begin(); it!=a.end(); ++it) {
        cout<<*it<<" ";
    }
    /* 1 2 3 4 5 */

    // Printing/Accessing elements using range-based for loop
    for (int element : a) {
        // Access each element directly
    }






    vector<int> a={1,2,3,4,5};

    // Adding elements at the end
    a.push_back(6);
    /*
    1 2 3 4 5           //before
    1 2 3 4 5 6         //after
    */

    vector<int> aWithSize(5);    //Initialize like this
    for(int i=0;i<n;i++){     //Take in exactly like a array.
        cin>>a[i];
    }cout<<endl;


    // Removing elements from the end
    a.pop_back();
    /*
    1 2 3 4 5           //before
    1 2 3 4             //after
    */


    // Inserting elements at a specific position
    a.insert(a.begin() + 2, 10);
    /*
    1 2 3 4 5           //before
    1 2 10 3 4 5        //after
    */


    // Erasing elements at a specific position (delete)
    a.erase(a.begin() + 2);     //2 is it's index
    /*
    1 2 3 4 5           //before
    1 2 4 5             //after ('3' deleted)
    */

    a.erase(a.begin(), a.begin() + 5);
    /*
    1 2 3 4 5 6 7 8          //before
    6 7 8             //after
    */


    // Clearing all elements    (delete)
    a.clear();






    vector<int> a={1,2,3,4,5};

    // Get the size (number of elements)
    size_t size = a.size();
    //5


    // Get the capacity (total storage allocated)
    size_t capacity = a.capacity();
    //5

    // Resizing the vector
    a.resize(8);
    /*
    Size=8      
    Capacity=10
    */

    // Reserving space without changing size
    a.reserve(100);
    /*
    Size=5
    Capacity=100
    */




    // Sorting elements
    sort(a.begin(), a.end());             //#include<algorithm>
    /*
    3 2 5 4 1           //before
    1 2 4 3 5           //after
    */

    // Reversing elements
    reverse(a.begin(), a.end());        //#include <algorithm>
    /*
    1 2 3 4 5           //before
    5 4 3 2 1           //after
    */


    reverse(a.begin(),a.begin()+2);
    /*
    1 2 3 4 5 6
    2 1 3 4 5 6
    */

    reverse(a.begin()+2,a.end());
    /*
    1 2 3 4 5 6
    1 2 6 5 4 3     // last 4 elements reversed
    */


    

    // Check if the vector is empty
    bool isEmpty = a.empty();
    //0

    // Get the first and last element
    int firstElement = a.front();
    int lastElement = a.back();
    /*
    1 2 3 4 5 
    1
    5
    */

    vector<int> anotherVector = {9, 8, 7};
    a.swap(anotherVector);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    /*
    1 2 3 4 5           //before
    9 8 7               //after    ("a" has now the elements of "anotherVector")
    */



    vector<int> data = {2, 4, 4, 4, 5, 5, 7, 9};
    double mean = accumulate(data.begin(), data.end(), 0.0) / data.size();      //#include <numeric>
    cout << "Mean: " << mean << endl;
    //Mean:5
}
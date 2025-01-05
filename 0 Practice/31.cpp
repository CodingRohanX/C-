#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/* int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    auto min=min_element(a.begin(),a.end());
    auto max=max_element(a.begin(),a.end());
    //cout<<min-max<<endl;
    cout<<min<<endl;
    cout<<max<<endl;
} */

int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    auto max_it = max_element(a, a + n);

    // Access the maximum element using the iterator
    int max_value = *max_it;

    cout << "Maximum element: " << max_value << endl;

    auto min_it = min_element(a, a + n);

    // Access the maximum element using the iterator
    int min_value = *min_it;

    cout << "Min element: " << min_value << endl;

    return 0;
}
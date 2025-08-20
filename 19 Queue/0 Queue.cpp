#include<iostream>
#include<queue>
using namespace std;

void showQueue(queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}

int main(){
    int n;
    cout<<"Enter Elem:";
    cin>>n;
    int a;             //1 2 3 4 5

    queue<int> q;
    for(int i=0;i<n;i++){
        cin>>a;
        q.push(a);
    }
    
    cout<<"Element in front of queue: "<<q.front()<<endl;
    cout<<"Element in back of queue: "<<q.back()<<endl;
    cout<<endl;
    showQueue(q);

    /*
    Enter Elem:5
    1 2 3 4 5
    Element in front of queue: 1
    Element in back of queue: 5
    1 2 3 4 5   <- Queue
    */

    q.pop();
    showQueue(q);
    cout<<"Element in front of queue: "<<q.front()<<endl;
    cout<<"Element in back of queue: "<<q.back()<<endl;
    cout<<endl;

    /*
    2 3 4 5 
    Element in front of queue: 2
    Element in back of queue: 5
    */

    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else if(!q.empty()){
        cout<<"Queue has elements: "<<endl;
        showQueue(q);
    }

    cout<<"Size of queue is: "<<q.size()<<endl;

    /* 
    Queue has elements: 
    2 3 4 5 
    */

    int size = q.size();            // Returns the size of the queue
    //4



    queue<char> charQueue;
    charQueue.push('A');
    cout << "Front element: " << charQueue.front() << endl;
    /* 
    Size of queue is: 4
    Front element: A
    */
}

/*
Enter Elem:5
1 2 3 4 5
Element in front of queue: 1
Element in back of queue: 5

2 3 4 5 
Element in front of queue: 2
Element in back of queue: 5

Queue has elements: 
2 3 4 5 
Size of queue is: 4
Front element: A
*/
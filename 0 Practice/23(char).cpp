#include<iostream>
using namespace std;

char last(int n){
    if(n>27){
        n-=26;
        //cout<<n+104<<" "<<char(n+104)<<endl;
        return char(n+104);
    }
    else{
        //cout<<n<<" "<<char(n+96)<<endl;
        return char(n+96);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=53;
        
        if(n<=k){
            cout<<char(97)<<endl;
            n--;
        }
    
        else if(n>k && n<k+26){
            for(int i=0;i<26;i++){
                cout<</* n+i+44<<" "<< */char(n+i+44)<<endl;
                n--;
                break;
            }
        }



        if(n>52){
            n-=26;      //n=44  52
            k-=26;      //k=27 
            if(n<=k){
                cout<<char(97)<<endl;
                n--;
                cout<<last(n)<<endl;
            }
        
            else if(n>k && n<k+26){
                for(int i=0;i<26;i++){
                    cout<<n+i+78<<" "<<char(n+i+78)<<endl;
                    n--;
                    break;
                }
                cout<<last(n)<<endl;
            }
        }
        else{
            cout<<last(n)<<endl;
        }

        
        /*
        else if(n<52 && n>26){
            for(int i=0;i<26;i++){
                cout<<n+i+44<<" "<<char(n+i+44)<<endl;
                break;
            } 
        }
        if(n>27){
            n-=26;
            cout<<n<<" "<<char(n+96)<<endl;
        }
        else{
            cout<<n<<" "<<char(n+96)<<endl;
        } */
        
        //k-=26;
    }
}

/*
5
24
70
3
55
48
*/
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    #define ll long long int 

    int main(){
        int n,flag=0;
        ll sum=0,count=0,max=0,i,j;
        cin>>n;
        vector<ll> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        /* if(n==1){
            if(a[0]%7==1){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        } */
        //else{
            for(i=0;i<n;i++){
                //sum=a[i];
                for(j=i;j<n;j++){
                    sum=sum+a[j];
                    count++;
                    if(sum%7==0){
                        flag=1;
                    }
                    else if(sum%7!=0 && flag==1){
                        if(max<(count-1)){
                            max=count-1;
                            i=j;
                        }
                        break;
                    }
                }count=0;flag=0;sum=0;
            }
        //}
        cout<<max<<endl;
    }
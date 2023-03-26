#include<bits/stdc++.h>
using namespace std;
int t,n,f=1;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        f=1;
        if(n==1)cout<<"FastestFinger";
        else if(n==2)cout<<"Ashishgup";
        else if(n%2==0){
            int k=log2(n);
            if((1<<k)==n)cout<<"FastestFinger";
            else{
                n/=2;
                for(int i=2;i*i<=n;i++){
                    if(n%i==0)f=0;
                }
                cout<<(f?"FastestFinger":"Ashishgup");
            }
        }
        else{
            cout<<"Ashishgup";
        }
    }
}
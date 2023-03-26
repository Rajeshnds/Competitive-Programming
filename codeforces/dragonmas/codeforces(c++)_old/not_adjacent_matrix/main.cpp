#include<bits/stdc++.h>
using namespace std;
int t,n,k,r;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        r=1;
        k=1;
        if(n==2)cout<<-1<<endl;
        else{
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(k<=n*n&&r)cout<<k<<" ",k+=2;
                    else if(r) r=0,cout<<2<<" ",k=4;
                    else if(r==0)cout<<k<<" ",k+=2;
                }
                cout<<endl;
            }
        }
    }
}

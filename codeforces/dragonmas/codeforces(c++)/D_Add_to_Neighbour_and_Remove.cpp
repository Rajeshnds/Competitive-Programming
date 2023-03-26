#include<bits/stdc++.h>
using namespace std;
int t,n,a[3001],s,c,k;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        s=0;
        for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
        for(int i=n;i>=1;i--){
            if(s%i==0){
                c=s/i;
                k=0;
                for(int j=1;j<=n;j++){
                    k+=a[j];
                    if(k==c)k=0;
                }
                if(k==0){cout<<n-i<<endl;break;}
            }
        }
    }
}
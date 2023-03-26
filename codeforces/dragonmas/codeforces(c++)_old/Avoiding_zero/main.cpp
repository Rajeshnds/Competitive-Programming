#include<bits/stdc++.h>
using namespace std;
int t,n;
int not_zero(int n){
    int s=0,t=0,a[51];
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    if(s==0)cout<<"NO";
    else{
        s=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
             s+=a[i];
             if(s==0)s=s-a[i]+a[n-1],t=a[i],a[i]=a[n-1],a[n-1]=t;
             cout<<a[i]<<" ";
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl)cin>>n,not_zero(n);
}

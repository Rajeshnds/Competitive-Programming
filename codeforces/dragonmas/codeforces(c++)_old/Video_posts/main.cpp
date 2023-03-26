#include<bits/stdc++.h>
using namespace std;
int n,k,l,s,t,j;
void equal_duration(){
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
    if(s%k)cout<<"No";
    else{
        s/=k;
    for(int i=0;i<n;i++){
        t+=a[i];
        l++;
        if(t==s)t=0,b[j++]=l,l=0;
    }
    if(j==k){
        cout<<"Yes"<<endl;
        for(int i=0;i<j;i++)cout<<b[i]<<" ";
    }
    else cout<<"No";
    }
}
int main(){
    equal_duration();
}

#include<bits/stdc++.h>
using namespace std;
int n;
int less_sum(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[n-1]>=a[n-2]+a[n-3])cout<<"NO";
    else{
        cout<<"YES"<<endl<<a[n-3]<<" "<<a[n-1]<<" "<<a[n-2]<<" ";n-=3;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
    }
}
int main(){
    cin>>n;less_sum(n);
}

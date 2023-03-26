#include<bits/stdc++.h>
using namespace std;
void sorted_increasing(int a[],int n){
    if(n%2)cout<<a[n/2]<<endl;
    for(int i=n/2-1;i>=0;i--)cout<<a[n-i-1]<<" "<<a[i]<<" ";
}
int main(){
    int t,n;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        sorted_increasing(a,n);
    }
}

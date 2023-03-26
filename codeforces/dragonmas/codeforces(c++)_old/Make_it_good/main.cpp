#include<bits/stdc++.h>
using namespace std;
int delete_for_good(int a[],int n){
    int k=0,l=0;
    for(int i=n;i>=1;i--)if(a[i-1]<a[i])k=i-1,i=0;
    for(int i=1;i<k;i++){
        if(a[i+1]<a[i])l=i;
    }
    return l;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        cout<<delete_for_good(a,n)<<endl;
    }
}

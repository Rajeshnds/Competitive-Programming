#include<bits/stdc++.h>
using namespace std;
int t,n;
int dominant(int n){
    int a[n+1],k=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    k=*max_element(a+1,a+n+1);
    if(a[1]==k&&a[2]<k)return 1;
    else if(a[n]==k&&a[n-1]<k)return n;
    else{
    for(int i=2;i<n;i++){
        if(a[i]==k&&(a[i+1]<k||a[i-1]<k))return i;
    }
    }
    return -1;
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<dominant(n)<<endl;
}

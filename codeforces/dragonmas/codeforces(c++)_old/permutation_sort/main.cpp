#include<bits/stdc++.h>
using namespace std;
int t,n,a[51],b[51];
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        if(is_sorted(a+1,a+n+1))cout<<0;
        else if(a[1]==n&&a[n]==1)cout<<3;
        else if(a[n]==n||a[1]==1)cout<<1;
        else cout<<2;
    }
}

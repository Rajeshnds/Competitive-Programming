#include<bits/stdc++.h>
using namespace std;
int n,k,m,a,b;
int main(){
    cin>>n;
    vector<int>v1(n+1),v2(n);
    for(int i=0;i<n;i++)cin>>a,v1[a]=i;
    for(int i=0;i<n;i++){
        cin>>b;
        m=max(m,++v2[(v1[b]-i+n)%n]);
    }
    cout<<m;
}
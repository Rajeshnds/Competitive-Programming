#include<bits/stdc++.h>
using namespace std;
int n,m;
int max_walk(){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    m=min(a[0],a[n-1]);
    for(int i=1;i<n-2;i++)m=min(m,max(a[i],a[i+1]));
    return m;
}
int main(){
    cout<<max_walk();
}

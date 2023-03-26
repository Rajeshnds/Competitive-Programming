#include<bits/stdc++.h>
using namespace std;
int n,k,a[2200],s;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<k;i++)s+=a[i];
    cout<<s;
}

#include<bits/stdc++.h>
using namespace std;
int n,k,a[200001];
map<int,int>m;
void read(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i],m[a[i]]++;
}
void solve(){
    int d=0;
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]&&a[i]<=a[i-1]+k)m[a[i-1]]=0;
    }
    for(int i=0;i<n;i++)d+=m[a[i]],m[a[i]]=0;
    cout<<d;
}
int main(){
    read();
    solve();
}

#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
}
void solve(){
    sort(a,a+n);
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=j)j++;
    }
    cout<<j+1;
}
int main(){
    read();
    solve();
}

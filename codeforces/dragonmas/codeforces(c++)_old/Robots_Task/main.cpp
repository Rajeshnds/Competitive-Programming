#include<bits/stdc++.h>
using namespace std;
int n,a[1002];
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
}
void solve(){
    int k,i,x=0,count=0;
    for(k=1,i=0;x<n;){
        if(a[i]<=x)a[i]=1002,x++;
        if(i+k>=0&&i+k<n)i+=k;
        else if(x<n)count++,k=-k;
    }
    cout<<count;
}
int main(){
    read();
    solve();
}

#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    int a[n+1]={0};
    int x,j=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        int k=upper_bound(a,a+j,x)-a;
        if(k==j)a[j++]=x;
        else a[k]=x;
    }
    cout<<j;
}
int main(){
    cin>>n;
    solve();
}
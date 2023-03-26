#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],k,j,d;
string s,t;
void solve(){
    j=0;
    for(int i=0;i<n&&j<m-1;i++){
        if(s[i]==t[j])d=max(d,a[j+1]-i),j++;
    }
    cout<<d;
}
int main(){
    cin>>n>>m>>s>>t;
    j=m-1;
    for(int i=n-1;i>=0&&j>0;i--){
        if(s[i]==t[j])a[j]=i,j--;
    }
    solve();
}
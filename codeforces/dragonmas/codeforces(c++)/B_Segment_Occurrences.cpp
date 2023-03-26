#include<bits/stdc++.h>
using namespace std;
int n,m,q,a[1001],l,r;
string s,t;
int main(){
    cin>>n>>m>>q>>s>>t;
    for(int i=0;i<=n-m;i++)a[i+1]=a[i]+(s.substr(i,m)==t);
    for(int i=0;i<q;i++){
        cin>>l>>r;
        if(r-l+1<m)cout<<0<<endl;
        else{
            cout<<a[r-m+1]-a[l-1]<<endl;
        }
    }
}
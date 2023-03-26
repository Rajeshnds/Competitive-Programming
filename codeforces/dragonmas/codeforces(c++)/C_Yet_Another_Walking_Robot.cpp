#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    int k=0,d=0,l=0,r=n;
    map<pair<int,int>,int>m;
    m[{0,0}]=1;
    for(int i=0;i<n;i++){
        s[i]=='R'?k++:s[i]=='L'?k--:s[i]=='U'?d++:d--;
        if(m[{k,d}]){
            if(i+1-m[{k,d}]+1<r-l+1)l=m[{k,d}],r=i+1;
        }
        m[{k,d}]=i+2;
    }
    if(!l)cout<<-1;
    else cout<<l<<" "<<r;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}
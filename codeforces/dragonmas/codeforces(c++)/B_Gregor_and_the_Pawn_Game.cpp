#include<bits/stdc++.h>
using namespace std;
int q,n;
string s,t;
void solve(){
    int k=0;
    for(int i=0;i<n;i++){
        if(t[i]=='1'){
            if(s[i]=='0')k++,s[i]='.';
            else if(s[i-1]=='1')s[i-1]='.',k++;
            else if(s[i+1]=='1')s[i+1]='.',k++;
        }
    }
    cout<<k;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>s>>t;
        solve();
    }
}
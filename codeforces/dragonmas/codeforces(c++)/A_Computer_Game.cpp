#include<bits/stdc++.h>
using namespace std;
# define ll long long
int n;
void solve(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&t[i]=='1'){
            cout<<"NO";return;
        }
    }
    cout<<"YES";
}
int main(){
    int t;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}
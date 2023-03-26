#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    if(s.find("ab")!=-1){
        int k=s.find("ab");
        cout<<k+1<<" "<<k+2;
    }
    else if(s.find("ba")!=-1){
        int k=s.find("ba");
        cout<<k+1<<" "<<k+2;
    }
    else cout<<-1<<" "<<-1;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}
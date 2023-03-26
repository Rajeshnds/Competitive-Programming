#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    if(s.find('0')==-1){
        cout<<1<<" "<<n-1<<" "<<2<<" "<<n;
    }
    else{
        int k=s.find('0')+1;
        if(k<=n/2){
            cout<<k<<" "<<n<<" "<<k+1<<" "<<n;
        }
        else{
            cout<<1<<" "<<k<<" "<<1<<" "<<k-1;
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}
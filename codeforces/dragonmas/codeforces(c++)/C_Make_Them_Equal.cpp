#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n;
char c;
string s;
void solve(){
    int f=-1,k=0;
    for(int i=0;i<n;i++){
        if(s[i]!=c){f=i;break;}
    }
    if(f==-1){cout<<0;return;}
    if(f==n-1){
        cout<<1<<endl<<n-1;
    }
    else if(f<n-1&&s[n-1]==c)cout<<1<<endl<<n;
    else{
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){k=i+1;break;}
        }
        if(k*2>n){
            cout<<1<<endl<<k;
        }
        else cout<<2<<endl<<n-1<<" "<<n;
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>c>>s;
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
long long n,k,a,b;
string s;
void solve(){
    int l=0,m=0;
    if(max(a,b)>(min(a,b)+1)*k){cout<<"NO";return;}
    while(a||b){
        if(a>=b){
            for(int i=1;i<=k-m&&a;i++)cout<<'G',a--;
            if(b)cout<<'B',b--,l=1;
        }
        if(b>a){
            for(int i=1;i<=k-l&&b;i++)cout<<'B',b--;
            if(a)cout<<'G',a--,m=1;
        }
    }
}
int main(){
    cin>>n>>k>>a>>b;
    solve();
}
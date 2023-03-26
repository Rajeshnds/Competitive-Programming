#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n;
void solve(string s){
     for(int i=0;i<s.size();i++){
        if((s[i]-'0')%2==0){
            cout<<2;
            return;
        }
     }
     cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        if(n%2==0)cout<<0;
        else{
            string s=to_string(n);
            int k=s[0]-'0';
            if(k%2==0)cout<<1;
            else{
                solve(s);
            }
        }
    }
}
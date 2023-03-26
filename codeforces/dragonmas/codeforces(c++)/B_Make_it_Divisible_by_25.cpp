#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t;
ll n;
string s;
void solve(){
    int l=0,k=s.size(),m=0,e=0,f=0;
    for(int i=k-1;i>=0;i--){
        if(s[i]=='0'){f=i;break;}
        l++;
    }
    for(int i=f-1;i>=0;i--){
        if(s[i]=='0'||s[i]=='5')break;
        l++;
    }
    for(int i=k-1;i>=0;i--){
        if(s[i]=='5'){e=i;break;}
        m++;
    }
    for(int i=e-1;i>=0;i--){
        if(s[i]=='2'||s[i]=='7')break;
        m++;
    }
    cout<<min(m,l);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s=to_string(n);
        solve();
    }   
}
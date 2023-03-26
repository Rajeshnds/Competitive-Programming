#include<bits/stdc++.h>
using namespace std;
int n,m,a[123];
string s,t,u;
void solve(){
    int f,k=0,ans=0;
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>t;
        f=1;
        u="";
        for(int j=0;f&&j<n;j++){
            if(s[j]!='*'&&s[j]!=t[j])f=0;
            else if(s[j]=='*'){
                if(s.find(t[j])!=-1)f=0;
                u+=t[j];
            }
        }
        if(f){
            k++;
            int b[123]={0};
            for(int j=0;j<u.size();j++){
                if(!b[u[j]])a[u[j]]++,b[u[j]]=1;
            }
        }
    }
    for(int i='a';i<='z';i++)if(a[i]==k)ans++;
    cout<<ans;
}
int main(){
    cin>>n>>s;
    solve();
}
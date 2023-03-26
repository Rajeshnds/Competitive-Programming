#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[26],b[200001],x;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>n>>m>>s;
        fill(b,b+n+1,0);
        fill(a,a+26,0);
        for(int i=1;i<=m;i++){
            cin>>x;
            b[x]++;
        }
        for(int i=n-1;i>=1;i--){
            b[i]+=b[i+1];
        }
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']+=b[i+1]+1;
        }
        for(int i=0;i<26;i++)cout<<a[i]<<" ";cout<<endl;
    }
}

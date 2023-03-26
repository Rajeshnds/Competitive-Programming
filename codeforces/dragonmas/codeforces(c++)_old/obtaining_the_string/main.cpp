#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
void read(){
    cin>>n>>s>>t;
}
void solve(){
    string u,v;
    int m=0,b[10005]={0};
    u=s;v=t;
    sort(u.begin(),u.end());
    sort(v.begin(),v.end());
    if(u!=v)cout<<-1;
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                int k=s.find(t[i], i);
                for(int j=k;j>i;j--)swap(s[j-1],s[j]),b[m++]=j;
            }
        }
    if(m>10000)cout<<-1;
    else{
        cout<<m<<endl;
        for(int i=0;i<m;i++)cout<<b[i]<<" ";
    }
    }
}
int main(){
    read();
    solve();
}

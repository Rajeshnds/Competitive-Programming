#include<bits/stdc++.h>
using namespace std;
int n,k=1;
string s,t;
string length(int n){
    pair<int,string>p[n];
    for(int i=0;i<n;i++)cin>>s,p[i].second=s,p[i].first=s.size();
    sort(p,p+n);
    for(int i=0;i<n-1;i++){
        s=p[i+1].second;
        t=p[i].second;
        if(s.find(t)==-1)k=0;
    }
    if(k){
        cout<<"YES"<<endl;
        for(auto i:p)cout<<i.second<<endl;
    }
    else cout<<"NO";
}
int main(){
    cin>>n;length(n);
}

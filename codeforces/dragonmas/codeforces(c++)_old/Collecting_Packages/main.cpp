#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t;t--;cout<<endl){
        string s="";
        int f=1;
        cin>>n;
        pair<int,int>p[n+1];
        for(int i=1;i<=n;i++)cin>>p[i].first>>p[i].second;
        sort(p+1,p+n+1);
        for(int i=1;i<=n;i++){
            if(p[i].second<p[i-1].second)f=0;
            for(int j=p[i-1].first;j<p[i].first;j++)s+='R';
            for(int j=p[i-1].second;j<p[i].second;j++)s+='U';
        }
        if(f)cout<<"YES"<<endl<<s;
        else cout<<"NO";
    }
}

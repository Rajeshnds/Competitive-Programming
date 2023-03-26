#include<bits/stdc++.h>
using namespace std;
int n,m,a,t,k;
map<int,int>mp;
int max_file(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a,t+=a,mp[t]=1;t=0;
    for(int i=0;i<m;i++){
        cin>>a;
        t+=a;
        if(mp[t])k++;
    }
    return k;
}
int main(){
    cout<<max_file();
}

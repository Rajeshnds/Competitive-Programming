#include<bits/stdc++.h>
using namespace std;
int t,n,m,s,a;
map<int,int>mp;
void chain(int n,int m){
    s=0;
    for(int i=1;i<=n;i++)cin>>a,s+=a;
    if(m<n||n==2)cout<<-1<<endl;
    else{
        cout<<s*2<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" "<<i%n+1<<endl;
    }
}
int main(){
    for(cin>>t;t--;)cin>>n>>m,chain(n,m);
}

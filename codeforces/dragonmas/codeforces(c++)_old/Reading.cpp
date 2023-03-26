#include<bits/stdc++.h>
using namespace std;
int n,k,i=1;
pair<int,int>p[1002];
main(){
    for(cin>>n>>k;i<=n;i++)cin>>p[i].first,p[i].second=i;
    sort(p+1,p+n+1);
    cout<<p[n-k+1].first<<endl;
    for(int i=n-k+1;i<=n;i++)cout<<p[i].second<<" ";
}


#include<bits/stdc++.h>
using namespace std;
int n,k,i;
pair<int,int>p[102];
main(){
    cin>>n>>k;
    for(i=0;i<n;i++){cin>>p[i].first;p[i].second=i+1;}
    sort(p,p+n);
    for(i=0;i<n;i++){k-=p[i].first;if(k<0)break;}
    cout<<i<<endl;
    while(i--)cout<<p[i].second<<" ";
}

#include<bits/stdc++.h>
using namespace std;
long long d,t,w,f,k,s,n;
void max_weight(){
    k=-1;s=0;d=-1;
    cin>>n>>w;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i+1;
    sort(p,p+n);
    for(int i=0;i<n;i++){
        s+=p[i].first;
        if(p[i].first>=(w+1)/2&&p[i].first<=w){d=i;break;}
        if(s>=(w+1)/2&&s<=w){k=i;break;}
    }
    if(d>=0)cout<<1<<endl<<p[d].second;
    else if(k>=0){
        cout<<k+1<<endl;
        for(int i=0;i<=k;i++)cout<<p[i].second<<" ";
    }
    else cout<<-1;
}
int main(){
    for(cin>>t;t--;cout<<endl)max_weight();
}

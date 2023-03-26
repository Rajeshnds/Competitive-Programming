#include<bits/stdc++.h>
using namespace std;
int n,k,a[200001],b[200001];
vector<int>v[200001];
void solve(){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int d=lower_bound(a,a+n,b[i])-a;
        int e=v[i+1].size();
        cout<<max(0,d-e)<<" ";
    }
}
int main(){
    int x,y;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
    for(int i=0;i<k;i++){
        cin>>x>>y;
        if(a[x-1]>a[y-1])v[x].push_back(y);
        else if(a[y-1]>a[x-1])v[y].push_back(x);
    }
    solve();
}
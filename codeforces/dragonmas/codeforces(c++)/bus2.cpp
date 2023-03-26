#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(){
    int a[100001];
    pair<int,int>p1[100001];
    int s=0,t,x;
    for(int i=1;i<=n;i+=m){
        int k=min(i+m-1,n);
        for(int j=i;j<=k;j++){
            cin>>t>>x;
            p1[j].first=x;
            p1[j].second=j;
        }
        s=max(s,t);
        sort(p1+i,p1+k+1);
        for(int j=i;j<=k;j++){
            int l=0;
            while(j<k&&p1[j+1].first==p1[j].first){
                a[p1[j].second]=s+p1[j].first;
                j++;
                l++;
            }
            a[p1[j].second]=s+p1[j].first;
            l++;
            s+=1+(l/2);
        }
        s+=2*p1[k].first;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n>>m;
    solve();
}
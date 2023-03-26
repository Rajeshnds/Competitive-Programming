#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>p[100001];
void solve(){
    int k=0,a=p[0].first,b=p[0].second;
    for(int i=1;i<n;i++){
        if(p[i].first>a&&p[i].second<b)k++;
        else a=p[i].first,b=p[i].second;
    }
    cout<<k;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    solve();
}
#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>p[200001];
void solve(){
    int k=p[0].second,l=p[1].second;
    for(int i=2;i<n;i++){
        if(p[i].first>k)k=p[i].second;
        else if(p[i].first>l)l=p[i].second;
        else {cout<<"NO";return;}
    }
    cout<<"YES";
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    solve();
}
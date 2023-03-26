#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int>p[5001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(p[i].second<m)m=p[i].first;
        else m=p[i].second;
    }
    cout<<m;
}
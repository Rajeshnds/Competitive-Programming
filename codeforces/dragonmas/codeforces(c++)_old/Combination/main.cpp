#include<bits/stdc++.h>
using namespace std;
int n,t,s;
int max_points(int n){
    pair<int,int>p[n];
    for(int i=0;i<n;i++)cin>>p[i].second>>p[i].first;
    sort(p,p+n);
    for(int i=n-1;i>=0&&t>=0;i--)s+=p[i].second,t--,t+=p[i].first;
    return s;
}
int main(){
    cin>>n;cout<<max_points(n);
}

#include<bits/stdc++.h>
using namespace std;
int n,t;
pair<double,double>p[1001];
int main(){
    int k=2;
    cin>>n>>t;
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    for(int i=0;i<n-1;i++){
        double l=(p[i+1].first-(p[i+1].second)/2)-
                (p[i].first+(p[i].second)/2);
        if(l>t)k+=2;
        else if(t==l)k++;
    }
    cout<<k;
}

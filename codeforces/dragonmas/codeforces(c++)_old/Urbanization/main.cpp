#include<bits/stdc++.h>
using namespace std;
double n,a,b,s,t;
double max_mean(){
    cin>>n>>a>>b;
    vector<int>v(n);
    if(a>b)swap(a,b);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    for(int i=0;i<a;i++)s+=v[i];
    for(int i=a;i<a+b;i++)t+=v[i];
    printf("%0.81f",s/a+t/b);
}
int main(){
    cout<<max_mean();
}

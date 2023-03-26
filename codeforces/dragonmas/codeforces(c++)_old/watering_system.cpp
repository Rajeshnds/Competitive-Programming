#include<bits/stdc++.h>
using namespace std;
int n,a,b,j,s,k;
int water(int n,int a,int b){
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i],s+=v[i];k=v[0];v[0]=0;
    sort(v.rbegin(),v.rend());
    while(a*k/s<b)s-=v[j++];
    return j;
}
int main(){
    cin>>n>>a>>b;
    vector<int>v(n);
    cout<<water(n,a,b);
}

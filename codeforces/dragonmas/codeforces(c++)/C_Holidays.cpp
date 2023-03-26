#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a[102];
map<int,int>mp;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        if(x==y)a[x]++;
        else{
            for(int j=x;j<=y;j++)a[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=1)return cout<<i<<" "<<a[i],0;
    }
    cout<<"OK";
}
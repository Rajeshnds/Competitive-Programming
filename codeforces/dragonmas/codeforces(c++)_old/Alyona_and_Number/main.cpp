#include<bits/stdc++.h>>
using namespace std;
long long n,m,s;
long long pairs(int n,int m){
    for(int i=1;i<=n;i++)s+=(i+m)/5-i/5;
    return s;
}
int main(){
    cin>>n>>m;cout<<pairs(n,m);
}

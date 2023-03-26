#include<bits/stdc++.h>
using namespace std;
int n,m,k,l;
int friends(int a,int m,int k,int &l){
    if(__builtin_popcount(a^m)<=k)l++;
}
int main(){
    cin>>n>>m>>k;map<int,int>a;
    for(int i=0;i<=m;i++)cin>>a[i];
    for(int i=0;i<m;i++){
        friends(a[i],a[m],k,l);
    }
            cout<<l;
}

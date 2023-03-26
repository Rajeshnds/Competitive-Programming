#include<bits/stdc++.h>
using namespace std;
int n,k;
pair<int,int>p[50];
int Rank(int n,int k){
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second,p[i].first*=-1;
    sort(p,p+n);
    return count(p,p+n,p[k-1]);
}
int main(){
    cin>>n>>k;cout<<Rank(n,k);
}

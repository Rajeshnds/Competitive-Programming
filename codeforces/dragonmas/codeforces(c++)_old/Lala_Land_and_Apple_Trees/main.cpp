#include<bits/stdc++.h>
using namespace std;
long long n,s,k,d,m,l,c;
pair<int,int>p[101];
long long apples(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
        p[i].first<0?k++:l++;
    }
    m=min(n,k*2);
    d=max(c,k-l-1);
    sort(p,p+n);
    for(int i=d;i<=m;i++)s+=p[i].second;
    return s;
}
int main(){
    cout<<apples();
}

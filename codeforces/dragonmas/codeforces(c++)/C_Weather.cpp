#include<bits/stdc++.h>
using namespace std;
int n,a[100001],k,l,m;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    m=n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<=0)k++;
    }
    for(int i=1;i<n;i++){
        if(a[i]>=0)l++;
        if(a[i]<=0)k--;
        m=min(m,k+l);
    }
    cout<<m;
}
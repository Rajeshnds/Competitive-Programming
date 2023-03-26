#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
    cin>>n>>k;
    int d=2*k+1;
    int q=n/d;
    int r=n%d;
    if(r)q++;
    else r=2*k;
    cout<<q<<endl;
    for(int i=1+r/2;i<=n;i+=d)cout<<i<<" ";
}
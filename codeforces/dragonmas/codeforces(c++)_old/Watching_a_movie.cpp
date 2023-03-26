#include<bits/stdc++.h>
using namespace std;
int n,x,d=1,k,l,r;
main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
    cin>>l>>r;
    k+=(l-d)%x;
    k+=r-l+1;
    d=r+1;
    }
    cout<<k;
}

#include<bits/stdc++.h>
using namespace std;
int n,q,x[100001],m;
main(){
cin>>n;
for(int i=0;i<n;i++)cin>>x[i];sort(x,x+n);
cin>>q;
for(int i=0;i<q;i++){
    cin>>m;
    cout<<upper_bound(x,x+n,m)-x<<endl;
}
}

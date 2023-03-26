#include<bits/stdc++.h>
using namespace std;
int t,l,r,m,a,b,c;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>l>>r>>m;
    for(int i=l;i<=r;i++)if((m-r+i)%4==0){c=i;break;}
    b=c;c=max(l,max(r,c));a=min(l,min(r,c));
    cout<<a<<" "<<l+r+b-c-a<<" "<<c;
}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
long long i,j,k,l,m,n,x,y,t,z,ma;
ma=1e9+7;
cin>>t;
while(t>0){
    t=t-1;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    x=a[0];y=0;
    for(i=0;i<n;i++){
        x=(x&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==x)y=y+1;
    }
    if(y<2){
        cout<<"0"<<"\n";
    }
    else{
        z=((y)*(y-1))%ma;
        for(i=1;i<=n-2;i++){
            z=(z*i)%ma;
        }
        cout<<z<<"\n";
    }
}
return 0;
}

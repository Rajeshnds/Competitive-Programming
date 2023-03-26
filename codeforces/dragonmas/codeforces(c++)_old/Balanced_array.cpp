#include<bits/stdc++.h>
using namespace std;
int n,a,l=1,k,m=2;
main(){
cin>>n;
while(n--){
        l=1;
m=2;
k=0;
    cin>>a;
if(a%4==0){
    cout<<"YES"<<endl;
    for(int i=1;i<=a/2;i++){
        cout<<m<<" ";
        k+=m;
    m+=2;
    }
    for(int i=1;i<=a/2-1;i++){
        cout<<l<<" ";
        k-=l;
        l+=2;
    }
    cout<<k<<endl;
}
else
    cout<<"NO"<<endl;
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,k,l,t,x,y,m,d;
main(){
cin>>n;d=n;
while(n--){
    cin>>t>>x>>y;
    if(t==1)k++,l+=x;
    else m+=x;
}
cout<<(2*l>=k*10?"LIVE":"DEAD")<<endl;
cout<<(2*m>=10*(d-k)?"LIVE":"DEAD")<<endl;
}

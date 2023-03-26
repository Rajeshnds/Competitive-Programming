#include<bits/stdc++.h>
using namespace std;
int n,a;
main(){
cin>>n;
while(n--){
    cin>>a;
    if(a%4==0){
        cout<<"YES"<<endl;
    for(int i=1;i<=a/2;i++)
        cout<<i*2<<" ";
    for(int i=1;i<=a/2-1;i++)
        cout<<i*2-1<<" ";
    cout<<a/2+a-1<<endl;
    }
    else
        cout<<"NO"<<endl;
}
return 0;
}

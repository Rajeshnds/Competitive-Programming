#include<bits/stdc++.h>
using namespace std;
int n,a,k,l,d;
main(){
cin>>n;
while(n--){
    cin>>a;
    if(a==1)k=1;
    if(k==1){
        if(a==1)d++,l=0;
        else l++,d++;
        if(l==2)k=0,d-=2;
    }
}
cout<<(k==1&&a==0?d-1:d);
}

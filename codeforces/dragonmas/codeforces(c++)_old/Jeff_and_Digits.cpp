#include<bits/stdc++.h>
using namespace std;
int n,a,n5,n0;
main(){
    for(cin>>n;n--;){
        cin>>a;
        if(a==0)n0++;
        else n5++;
    }
    if(n0==0)cout<<-1;
    else{
        n5-=n5%9;
        if(n5==0)n0=1;
        while(n5--)cout<<5;
        while(n0--)cout<<0;
    }
}

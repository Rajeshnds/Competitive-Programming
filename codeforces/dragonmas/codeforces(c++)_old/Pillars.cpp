#include<bits/stdc++.h>
using namespace std;
int n,a,f,b;
main(){
    for(cin>>n;n--;){
        cin>>a;
        if(a<b)f=1;
        if(f&&a>b)return cout<<"No",0;
        b=a;
    }
    cout<<"Yes";
}

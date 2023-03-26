#include<bits/stdc++.h>
using namespace std;
int n,p=1,a;
main(){
    for(cin>>n;n--;cout<<endl){
        cin>>a;
        if(a%2)cout<<(a+p)/2,p=-p;
        else cout<<a/2;
    }
}

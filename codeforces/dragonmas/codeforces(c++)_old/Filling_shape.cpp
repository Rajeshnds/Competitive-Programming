#include<bits/stdc++.h>
using namespace std;
long long n,k=1;
main(){
    cin>>n;
    if(n%2)cout<<0;
    else{
        for(int i=1;i<=n/2;i++)k*=2;
    cout<<k;
    }
}

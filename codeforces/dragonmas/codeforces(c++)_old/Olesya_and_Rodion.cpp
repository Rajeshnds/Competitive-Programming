#include<bits/stdc++.h>
using namespace std;
int n,t;
main(){
    cin>>n>>t;
    cout<<(t>9?--n?t:-1:t);while(--n>0)cout<<0;
}

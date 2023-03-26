#include<bits/stdc++.h>
using namespace std;
long long t,n;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        cout<<2*n-__builtin_popcountll(n)<<endl;
    }
}
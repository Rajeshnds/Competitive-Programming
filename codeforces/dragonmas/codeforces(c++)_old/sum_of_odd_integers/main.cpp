#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,k;
string sum(ll n,ll k){
 return n<k*k||n%2-k%2?"NO":"YES";
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>k;
        cout<<sum(n,k)<<endl;
    }
}

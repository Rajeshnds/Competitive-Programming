#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b,s;
ll no_of_steps(ll n){
    for(int i=0;i<n;i++){
        cin>>b;
        s+=abs(b-a);
        a=b;
    }
    return s;
}
int main(){
    cin>>n;cout<<no_of_steps(n);
}

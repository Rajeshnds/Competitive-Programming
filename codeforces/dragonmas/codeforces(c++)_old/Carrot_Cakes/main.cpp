#include<bits/stdc++.h>
using namespace std;
int n,t,k,d,l,e;
string cake(){
    cin>>n>>t>>k>>d;
    return (n-1)/k*t>d?"YES":"NO";
}
int main(){
    cout<<cake();
}

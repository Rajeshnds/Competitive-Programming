#include<bits/stdc++.h>
using namespace std;
int n,k,s,a,b;
int segment_value(){
    cin>>n>>k;
    while(n--)cin>>a>>b,s+=b-a+1;
    return (k-(s%k))%k;
}
int main(){
    cout<<segment_value();
}

#include<bits/stdc++.h>
using namespace std;
long long not_divisible(int n,int k){
    return k+(k-1)/(n-1);
}
int main(){
    int t,n,k;
    for(cin>>t;t--;)cin>>n>>k,cout<<not_divisible(n,k)<<endl;
}

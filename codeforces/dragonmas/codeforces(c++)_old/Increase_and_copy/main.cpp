#include<bits/stdc++.h>
using namespace std;
int t,n;
int min_moves(int n){
    int k=sqrt(n);
    return k-1+(n-1)/k;
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<min_moves(n)<<endl;
}

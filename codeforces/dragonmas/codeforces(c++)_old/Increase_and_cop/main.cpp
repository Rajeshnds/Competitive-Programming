#include<bits/stdc++.h>
using namespace std;
int t,n;
int no_of_moves(int n){
    int k=ceil(sqrt(n));
    return k-1+(n-1)/k;
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<no_of_moves(n)<<endl;
}

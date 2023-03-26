#include<bits/stdc++.h>
using namespace std;
int t,n,a;
int merge(int n){
    int b[3]={0};
    while(n--)cin>>a,b[a%3]++;
    return b[0]+min(b[1],b[2])+(max(b[1],b[2])-min(b[1],b[2]))/3;
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<merge(n)<<endl;
}

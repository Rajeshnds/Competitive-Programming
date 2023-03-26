#include<bits/stdc++.h>
using namespace std;
int t,n,m,f,s,a,k,l;
int max_sum(){
    f=0;k=0;m=INT_MAX;s=0;
    cin>>n>>l;
    for(int i=0;i<n*l;i++){cin>>a;m=min(m,abs(a));s+=abs(a);if(a<0)k++;if(a==0)f=1;}
    return f?s:(k&1)?s-2*m:s;
}
int main(){
    for(cin>>t;t--;)cout<<max_sum()<<endl;
}

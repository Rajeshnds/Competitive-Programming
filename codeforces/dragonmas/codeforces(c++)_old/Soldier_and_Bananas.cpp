#include<iostream>
using namespace std;
int main(){
long long k,n,w,l;
cin>>k>>n>>w;
l=k;
for(int i=2;i<=w;i++)
    k=k+(l*i);
    cout<<(k>n?k-n:0);
return 0;
}

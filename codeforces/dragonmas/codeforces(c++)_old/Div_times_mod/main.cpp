#include<bits/stdc++.h>
using namespace std;
int n,k,l;
int number(){
    cin>>n>>k;
    for(int i=k-1;i>0;i--)if(n%i==0){l=i;break;}
    return n/l*k+l;
}
int main(){
    cout<<number();
}

#include<bits/stdc++.h>
using namespace std;
double t,i,k;
int n;
int pyramid(int n){
    i=0;
    while(n>1){
        k=2;
        while(n>=k){
            n=n-k;
            k=k+3;
        }
        i++;
    }
    return i;
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<pyramid(n)<<endl;
}

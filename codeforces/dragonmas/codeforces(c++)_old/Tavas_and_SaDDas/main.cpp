#include<bits/stdc++.h>
using namespace std;
int n,k,m=1;
int number(int n){
    while(n){
        if(n%10==4)k+=m;
        else k+=2*m;
        m*=2;
        n/=10;
    }
    return k;
}
int main(){
    cin>>n;cout<<number(n);
}

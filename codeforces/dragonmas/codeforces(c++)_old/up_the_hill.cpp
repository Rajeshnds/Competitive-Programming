#include<bits/stdc++.h>
using namespace std;
int a,b,i,n;
int  stop1(int &i){
    return ++i;
}
int  stop2(int &n){
    return n--;
}
int main(){
    cin>>a>>b;n=a+b+1;
    while(a--)cout<<stop1(i)<<" ";
    while(b--)cout<<stop2(n)<<" ";
    cout<<n;
}

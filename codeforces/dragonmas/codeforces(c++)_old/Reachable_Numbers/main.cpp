#include<bits/stdc++.h>
using namespace std;
int n,c=9;
int count(int n){
    c+=(n>9);
    while(n>9)c+=9-n%10,n/=10;
    return c;
}
int main(){
    cin>>n,cout<<count(n);
}

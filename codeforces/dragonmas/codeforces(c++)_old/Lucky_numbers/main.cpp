#include<bits/stdc++.h>
using namespace std;
int n;
int digit(int n){
    return (2LL<<n)-2;
}
int main(){
    cin>>n;cout<<digit(n);
}

#include<bits/stdc++.h>
using namespace std;
int n,s,ar,ap,as,br,bp,bs;
int winner(int n){
    cin>>ar>>ap>>as>>br>>bp>>bs;
    s+=max(0,ar-bp-br)+max(ap-bs-bp,0)+max(0,as-br-bs);
    cout<<s;
}
int main(){
    cin>>n;winner(n);
}

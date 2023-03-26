#include<bits/stdc++.h>
using namespace std;
int n,a,s;
string who_win(int n){
    while(n--)cin>>a,s+=a&1;
    return s?"First":"Second";
}
int main(){
    cin>>n;cout<<who_win(n);
}

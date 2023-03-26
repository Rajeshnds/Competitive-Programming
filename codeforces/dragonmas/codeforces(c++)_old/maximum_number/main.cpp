#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n&1)cout<<7,n-=3;
    cout<<string(n/2,49);
}

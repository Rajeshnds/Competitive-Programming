#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n%2)cout<<2*(n/2+1)*(n/2+2);
    else cout<<(n/2+1)*(n/2+1);
}

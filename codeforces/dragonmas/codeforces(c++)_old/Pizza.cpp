#include<bits/stdc++.h>
using namespace std;
int64_t n;
main(){
    cin>>n;
    cout<<(n&1||n==0?(n+1)/2:n+1);
}

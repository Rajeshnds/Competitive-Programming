#include<bits/stdc++.h>
using namespace std;
int n,m,k;
main(){
    cin>>n>>m;
    while((m/n)%3==0)n*=3,k++;
    while(m>n)n*=2,k++;
    cout<<(m==n?k:-1);
}

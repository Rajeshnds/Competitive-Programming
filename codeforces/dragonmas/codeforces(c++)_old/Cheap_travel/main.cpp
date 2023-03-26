#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int cheap_ride(){
    cin>>n>>m>>a>>b;
    return min(n*a,min((n+m-1)/m*b,n/m*b+n%m*a));
}
int main(){
    cout<<cheap_ride();
}

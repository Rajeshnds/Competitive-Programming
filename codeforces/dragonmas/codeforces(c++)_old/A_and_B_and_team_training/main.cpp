#include<bits/stdc++.h>
using namespace std;
long long k,n,m;
int main(){
    cin>>n>>m;
    cout<<min(n,min(m,(n+m)/3));
}

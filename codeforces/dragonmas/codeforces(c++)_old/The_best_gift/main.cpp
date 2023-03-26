#include<bits/stdc++.h>
using namespace std;
int n,m,b[11],s,a;
int no_of_ways(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a,b[a]++,s+=i-b[a];
    return s;
}
int main(){
    cout<<no_of_ways();
}

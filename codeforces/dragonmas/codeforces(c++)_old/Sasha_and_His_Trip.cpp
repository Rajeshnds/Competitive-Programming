#include<bits/stdc++.h>
using namespace std;
int n,v;
main(){
    cin>>n>>v;
cout<<(n>v+1?v-1+(n-v)*(n-v+1)/2:n-1);
}

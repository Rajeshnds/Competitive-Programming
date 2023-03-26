#include<bits/stdc++.h>
using namespace std;
int n,m,a,b[1001];
string distinct_array(int n){
    for(int i=0;i<n;i++)cin>>a,b[a]++,m=max(m,b[a]);
    return m>(n+1)/2?"NO":"YES";
}
int main(){
    cin>>n;cout<<distinct_array(n);
}

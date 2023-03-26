#include<bits/stdc++.h>
using namespace std;
int n,k,m,s,a;
void park_seat(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a,s+=a,m=max(m,a);
    cout<<max(m,(s+k+n-1)/n)<<" "<<m+k;
}
int main(){
    park_seat();
}

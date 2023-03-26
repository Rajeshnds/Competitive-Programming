#include<bits/stdc++.h>
using namespace std;
long long n,m,k,l,b,a,c;
string s,t;
void winner(int n){
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>b,a[b]=i;
    for(cin>>m;m--;)cin>>c,k+=a[c],l+=n-a[c]+1;
    cout<<k<<" "<<l;
}
int main(){
    cin>>n;
    winner(n);

}

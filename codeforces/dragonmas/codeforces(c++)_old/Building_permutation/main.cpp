#include<bits/stdc++.h>
using namespace std;
long long min_moves(int n){
    long long a[n+1],k=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)k+=abs(a[i]-i);
    return k;
}
int main(){
    int n;
    cin>>n;
    cout<<min_moves(n);
}

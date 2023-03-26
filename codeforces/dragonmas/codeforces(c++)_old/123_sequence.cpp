#include<bits/stdc++.h>
using namespace std;
int n,a,b[4];
main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,b[a]++;
    sort(b+1,b+4);
    cout<<b[1]+b[2];
}

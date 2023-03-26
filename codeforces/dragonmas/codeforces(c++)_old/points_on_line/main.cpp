#include<bits/stdc++.h>
using namespace std;
long long j,s,n,d,a[100001],i;
int main(){
    cin>>n>>d;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){
        while(a[j]-a[i]<=d&&j<n)j++;
        if(j-i-2>=1)s+=(j-i-2)*(j-i-1)/2;
    }
    cout<<s;
}

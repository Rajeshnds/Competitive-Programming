#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Max_product(int n,ll a[]){
    return max(a[0]*a[1]*a[n-1]*a[n-2]*a[n-3],max(
            a[0]*a[1]*a[2]*a[3]*a[n-1],
            a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5]));
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        cout<<Max_product(n,a)<<endl;
    }
}

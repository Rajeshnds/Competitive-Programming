#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll maximum_sum(int a[],int n){
    int k,m=a[0];ll s=0;
    k=m<0?-1:1;
    for(int i=0;i<n;i++){
        while(k*a[i]>=0&&i<n)m=max(m,a[i]),i++;
        s+=m;m=a[i],i--;k*=-1;
    }
    return s;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<maximum_sum(a,n)<<endl;
    }
}

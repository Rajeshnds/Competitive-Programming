#include<bits/stdc++.h>
using namespace std;
int n,k,l;
map<int,int>mp;
set<int>s;
int longest_distance(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)if(a[0]!=a[i])k=i;
    for(int i=n-2;i>=0;i--)if(a[n-1]!=a[i])l=n-i-1;
    return max(k,l);
}
int main(){
    cin>>n;cout<<longest_distance(n);
}

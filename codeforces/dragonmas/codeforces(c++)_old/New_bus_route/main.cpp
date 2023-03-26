#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int>m;
int min_distance(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)m[abs(a[i]-a[i+1])]++;
    cout<<m.begin()->first<<" "<<m.begin()->second;
}
int main(){
    cin>>n;min_distance(n);
}

#include<bits/stdc++.h>
using namespace std;
double m,a[1000];
int n,l;
double min_radius(int n,int l){
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    m=max(a[0]-0,l-a[n-1]);
    for(int i=1;i<n;i++)m=max(m,(a[i]-a[i-1])/2);
    return m;
}
int main(){
    cin>>n>>l;
    printf("%.81f",min_radius(n,l));
}

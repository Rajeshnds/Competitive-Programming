#include<bits/stdc++.h>
using namespace std;
int n,a[2001],d,c;
int main(){
    cin>>n;
    for(int i=0;i<2*n;i++)cin>>a[i];
    c=n%2?2*n:4;
    d=-1;
    for(int i=0;i<c;i++){
        if(is_sorted(a,a+2*n)){
            d=i;
            break;
        }
        if(i%2)for(int j=0;j<n;j++)swap(a[j],a[j+n]);
        else for(int j=0;j<2*n;j+=2)swap(a[j],a[j+1]);
        }
    cout<<min(d,c-d);
}

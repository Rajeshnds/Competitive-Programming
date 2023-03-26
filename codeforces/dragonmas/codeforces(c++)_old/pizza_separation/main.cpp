#include<bits/stdc++.h>
using namespace std;
int n,a[361];
int main(){
    int s=0,m=360;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            m=min(m,abs(360-2*s));
        }
    }
    cout<<m;
}

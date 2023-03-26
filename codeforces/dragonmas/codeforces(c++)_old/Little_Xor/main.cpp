#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,a[101],n;
ll max_xor(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];m=*max_element(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            m=max(m,a[i]^a[j]);
            a[i]=a[i]^a[j];
        }
    }
    return m;
}
int main(){
    cout<<max_xor();
}

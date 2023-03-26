#include<bits/stdc++.h>
using namespace std;
int n,s,a[101],m=10001;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        if(a[i]&1)m=min(m,a[i]);
    }
    cout<<(s&1?s:max(0,s-m));
}

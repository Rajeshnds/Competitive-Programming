#include<bits/stdc++.h>
using namespace std;
int n,k,a[123],m;
char c,d;
int k_length(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c-d)a[d]+=m/k,m=1;
        else m++;
        d=c;
    }
    a[d]+=m/k;
    return *max_element(a,a+123);
}
int main(){
    cout<<k_length();
}

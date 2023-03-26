#include<bits/stdc++.h>
using namespace std;
int n,m=INT_MAX,t,s;
int best_t(int n){
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=100;i++){
        s=0;
        for(int j=0;j<n;j++){
            if(abs(i-a[j])>1)s+=abs(i-a[j])-1;
        }
        if(s<m)m=s,t=i;
    }
    cout<<t<<" "<<m;
}
int main(){
    cin>>n;best_t(n);
}

#include<bits/stdc++.h>
using namespace std;
long long n,k,a,s,t;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(s&&s+a<k)t++,s=0;
        else t+=(s+a)/k,s=(s+a)%k;
    }
    cout<<t+(s>0);
}
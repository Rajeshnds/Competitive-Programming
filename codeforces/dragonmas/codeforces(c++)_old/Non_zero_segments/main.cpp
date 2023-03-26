#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,s,a;
map<ll,ll>m;
int segment_zero(int n){
    m[0]=1;
    while(n--){
        cin>>a;
        s+=a;
        if(m[s]){
            k++;
            m.clear();
            s=a;
            m[0]=1;
        }
        m[s]=1;
    }
    return k;
}
int main(){
    cin>>n;cout<<segment_zero(n);
}

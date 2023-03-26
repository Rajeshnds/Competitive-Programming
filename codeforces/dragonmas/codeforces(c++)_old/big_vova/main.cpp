#include<bits/stdc++.h>
using namespace std;
int t,n,m;
vector<int>v(1001);
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        m=0;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i],m)<__gcd(v[j],m))swap(v[i],v[j]);
            }
           m=__gcd(v[i],m);
        }
       for(int i=0;i<n;i++)cout<<v[i]<<" ";
    }
}

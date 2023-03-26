#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c;
set<pair<int,long long>>s;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        b=a;
        c=0;
        while(a%3==0){
            c++;
            a/=3;
        }
        s.insert({-c,b});
    }
    for(auto i:s)cout<<i.second<<" ";
}
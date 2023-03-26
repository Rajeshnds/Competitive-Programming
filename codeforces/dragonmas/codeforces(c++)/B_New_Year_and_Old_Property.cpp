#include<bits/stdc++.h>
using namespace std;
long long a,b,k,s;
int main(){
    cin>>a>>b;
    for(int i=0;i<=61;i++){
        for(int j=0;j<i-1;j++){
            k=(1LL<<i)-(1LL<<j)-1  ;
            if(k>=a&&k<=b)s++;
        }
    }
    cout<<s;
}
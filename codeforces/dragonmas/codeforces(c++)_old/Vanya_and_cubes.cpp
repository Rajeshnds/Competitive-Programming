#include<bits/stdc++.h>
using namespace std;
int n,i,s;
main(){
cin>>n;
while(s<=n){
        i++;
        s+=i*(i+1)/2;
    }
    cout<<i-1;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,t;
string divide_numbers(){
    cin>>n>>s;if(n&1)k=3;
    for(int i=0;i<n-k;i+=2)t=t+s[i]+s[i+1]+"-";
    if(n&1)t=t+s[n-3]+s[n-2]+s[n-1];
    else t.erase(t.size()-1,1);
    return t;
}
int main(){
    cout<<divide_numbers();
}

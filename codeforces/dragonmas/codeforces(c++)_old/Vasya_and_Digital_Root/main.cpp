#include<bits/stdc++.h>
using namespace std;
int k,d;
string s;
string digital_root(){
    cin>>k>>d;
    s+=to_string(d);
    for(int i=1;i<k;i++)s+='0';
    return (d==0&&k==1)||d>0?s:"No solution";
}
int main(){
    cout<<digital_root();
}

#include<bits/stdc++.h>
using namespace std;
float t,l,r;
string scheme(){
    cin>>l>>r;
    if((r+1)/2<=l)return "YES";
    return "NO";
}
int main(){
    for(cin>>t;t--;)cout<<scheme()<<endl;
}

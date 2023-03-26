#include<bits/stdc++.h>
using namespace std;
int n;
string s,t,z="z";
string addresses(){
    cin>>t>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.substr(0,t.size())==t&&s<z)z=s;
    }
    return z=="z"?t:z;
}
int main(){
    cout<<addresses();
}

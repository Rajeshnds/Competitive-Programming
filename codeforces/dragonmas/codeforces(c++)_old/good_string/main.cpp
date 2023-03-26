#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(t.size()%2==0||s[i]!=t.back())t+=s[i];
    }
    if(t.size()%2==1)t.pop_back();
    cout<<n-t.size()<<endl<<t;
}

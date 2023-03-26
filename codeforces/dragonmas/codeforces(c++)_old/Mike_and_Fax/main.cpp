#include<bits/stdc++.h>
using namespace std;
int k,n;
string s,t,u;
string pallindrome(){
    cin>>s>>n;
    if(s.size()%n==0)k=s.size()/n;
    else return "NO";
    for(int i=0;i<n;i++){
        u="";t="";
        for(int j=0;j<k;j++){
            u+=s[j];t+=s[j];
        }
        reverse(t.begin(),t.end());
        if(t!=u)return "NO";
        s.erase(0,k);
    }
    return "YES";
}
int main(){
    cout<<pallindrome();
}

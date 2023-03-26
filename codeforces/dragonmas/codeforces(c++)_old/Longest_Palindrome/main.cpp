#include<bits/stdc++.h>
using namespace std;
int n,z;
string s,t,a,b,m;
set<string>se;
void pallindrome(int n){
    while(n--){
        cin>>s;
        t=s;
        reverse(t.begin(),t.end());
        if(s==t)m=t;
        else if(se.count(t))a+=s,b=t+b;
        se.insert(s);
    }
    a=a+m+b;
    cout<<a.size()<<endl<<a;
}
int main(){
    cin>>n>>z;
    pallindrome(n);
}

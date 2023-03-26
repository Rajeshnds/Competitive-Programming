#include<bits/stdc++.h>
using namespace std;
string forgotten(int a,string &s){
    if(s[a]=='a')s[a]='b';
    else if(s[a]=='b')s[a]='a';
    return s;
}
int main(){
    int d,n,a;
    string t,s;
    for(int i=0;i<200;i++)t+='a';
    for(cin>>d;d--;){
        s=t;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i==0)cout<<s<<endl;
            cout<<forgotten(a,s)<<endl;
        }
    }
}

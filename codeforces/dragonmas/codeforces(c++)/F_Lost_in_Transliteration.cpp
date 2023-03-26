#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
set<string>st;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s.substr(i,1)=="u")s.replace(i,1,"oo");
            if(s.substr(i,2)=="kh")s.replace(i,2,"h"),i-=2;
            if(i<-1)i=-1;
        }
        st.insert(s);
    }
    cout<<st.size();
}
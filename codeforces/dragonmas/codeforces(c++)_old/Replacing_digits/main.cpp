#include<bits/stdc++.h>
using namespace std;
string s,t;
int j;
string max_value(){
    cin>>s>>t;
    sort(t.rbegin(),t.rend());
    for(int i=0;i<s.size()&&j<t.size();i++){
        if(s[i]<t[j])s[i]=t[j],j++;
    }
    return s;
}
int main(){
    cout<<max_value();
}

#include<bits/stdc++.h>
using namespace std;
long long k,d,i;
string s;
int change_number(){
    cin>>k>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)d+=s[i]-48;i=0;
    if(d<k){
        while(d<k)d=d-(s[i]-48)+9,i++;
        return i;
    }
    return 0;
}
int main(){
    cout<<change_number();
}

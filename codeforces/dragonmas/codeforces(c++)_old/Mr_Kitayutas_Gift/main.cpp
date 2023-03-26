#include<bits/stdc++.h>
using namespace std;
string s,t,x;
string pallindrome(){
    cin>>s;
    for(int i=0;i<=s.size();i++){
        for(char j='a';j<='z';j++){
            x=s.substr(0,i)+j+s.substr(i);
            t=x;
            reverse(t.begin(),t.end());
            if(t==x)return x;
        }
    }
    return "NA";
}
int main(){
    cout<<pallindrome();
}

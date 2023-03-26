#include<bits/stdc++.h>
using namespace std;
int n,t,k,l;
string s;
int alternate(){
    k=0;l=0;
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]=='1'&&s[i]==s[i+1])k++;
        else if(s[i]=='0'&&s[i]==s[i+1])l++;
    }
    return max(k,l);
}
int main(){
    for(cin>>t;t--;)cout<<alternate()<<endl;
}

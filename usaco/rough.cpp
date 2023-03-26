#include<bits/stdc++.h>
using namespace std;
int t;
long long a,b;
void solve(){
    if(a>=b){
        cout<<a-b;
    }
    else if((a|b)==b||abs(a-b)==1){
        cout<<1;
    }
    else{
        int k=0,l;
        bitset<62>bitsa(a);
        bitset<62>bitsb(b);
        string s=bitsb.to_string();
        string t=bitsa.to_string();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'&&t[i]=='0'){
                k=1;
                l=i;
                break;
            }
            else if(s[i]=='0'&&t[i]=='1'){
                k=-1;
                l=i;
                break;
            }
        }
        if(k==1){
            
        }
        else{

        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        solve();
    }
}
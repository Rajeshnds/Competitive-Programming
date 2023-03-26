#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>s;
        long long k=0,p=0;
        for(int i=0;i<s.size();i++){
            p=p+(s[i]=='+')-(s[i]=='-');
            if(p<0)p=0,k+=i+1;
        }
        cout<<k+s.size()<<endl;
    }
}

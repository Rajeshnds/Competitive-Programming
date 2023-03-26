#include<bits/stdc++.h>
using namespace std;
int t,k;
string n;
string solve(){
    while(true){
        set<char>s;
        for(int i=0;i<n.size();i++)s.insert(n[i]);
        if(s.size()<=k)return n;
        s.clear();
        for(int i=0;i<n.size();i++){
            s.insert(n[i]);
            if(s.size()>k){
                while(n[i]=='9')i--;
                n[i]+=1;
                for(int j=i+1;j<n.size();j++)n[j]='0';
                break;
            }
        }
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        cout<<solve();
    }
}
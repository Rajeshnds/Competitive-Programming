#include<bits/stdc++.h>
using namespace std;
int n;
string s;
map<string,int> m;
main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(m[s]==0)
        cout<<"OK"<<endl;
        else cout<<s<<m[s]<<endl;
        m[s]++;
    }
}

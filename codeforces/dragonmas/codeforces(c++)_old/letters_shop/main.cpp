#include<bits/stdc++.h>
using namespace std;
int n,a[26][200002],b[26],m;
string s,t;
int main(){
    cin>>n>>s>>m;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a'][b[s[i]-'a']++]=i+1;
    }
    while(m--){
        cin>>t;
        int c[26]={0};
        for(int i=n=0;i<t.size();i++){
            n=max(n,a[t[i]-'a'][c[t[i]-'a']++]);
        }
        cout<<n<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int n,x;
char f[58];
string s;
int main(){
    cin>>n>>s;
    for(int i=1;i<=9;i++){
        cin>>x;
        f[i+'0']=x+'0';
    }
    for(int i=0;i<n;i++){
        if(f[s[i]]>s[i]){
            while(f[s[i]]>=s[i]&&i<n)
                s[i]=f[s[i]],i++;
            break;
        }
    }
    cout<<s;
}

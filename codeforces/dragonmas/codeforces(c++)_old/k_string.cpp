#include<bits/stdc++.h>
using namespace std;
int n,k,a[27];
string s,t;
main(){
    cin>>n>>s;
    for(int i=0;i<s.size();i++)a[s[i]-96]++;
    for(int i=1;i<=26;i++)if(a[i]%n)return cout<<-1,0;
    for(int i=1;i<=26;i++){
        if(a[i]!=0){
            k=a[i]/n;
            while(k--)t+=(char)(i+96);
        }
    }
    while(n--)cout<<t;
}

#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void solve(){
    int d=0;
    for(int i=1;i<n;i++){
        if(s[i]>s[0])d=i;
        else if(s[i]==s[0]){
            int e=1;
            for(int j=1;j<=i-1&&i+e<n;j++){
                if(s[j]>s[i+e])break;
                else if(s[j]<s[i+e])d=i;
                e++;
            }
        }
        if(d)break;
    }
    if(d)n=d;
    else if(s[n-1]==s[0]){
        while(n>1&&s[n-1]==s[0])n--;
    }
    for(int i=0;i<k;i++){
        cout<<s[i%n];
    }
}
int main(){
    cin>>n>>k>>s;
    solve();
}
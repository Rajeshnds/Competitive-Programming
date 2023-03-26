#include<bits/stdc++.h>
using namespace std;
int a[125];
string s;
void solve(){
    int k=0;
    for(int i=0;i<s.size();i++){
        if(a[s[i]])k++;
        else k=0;
        if(k==3){
            if(s[i-1]==s[i]&&s[i-2]==s[i])k--;
            else{
                s.insert(i," ");
                k=0;
            }
        }
    }
    cout<<s;
}
int main(){
    cin>>s;
    for(int i='b';i<='z';i++){
        if(i=='e'||i=='i'||i=='o'||i=='u')continue;
        a[i]=1;
    }
    solve();
}
#include<bits/stdc++.h>
using namespace std;
int n,k,d;
string s;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='(')k++;
        else k--;
        if(k<0||(k==0&&s[i]=='('))d++;
    }
    cout<<(k?-1:d);
}

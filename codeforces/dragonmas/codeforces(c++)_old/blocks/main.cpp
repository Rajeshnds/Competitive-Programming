#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    int k=0,l=0;
    vector<int>v;
    char c;
    cin>>n>>s;
    for(int i=0;i<n;i++)s[i]=='B'?k++:l++;
    if(k%2&&l%2)cout<<-1;
    else{
        if(k%2==0)c='W';
        else c='B';
        k=0;
        for(int i=0;i<n;i++){
            if(k%2)v.push_back(i);
            if(s[i]!=c)k++;
        }
    cout<<v.size()<<endl;
    for(auto i:v)cout<<i<<" ";
    }
}

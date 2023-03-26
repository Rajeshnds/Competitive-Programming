#include<bits/stdc++.h>
using namespace std;
int n,k,l,j;
string s,t;
int main(){
    cin>>n>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++){
        if(t[i]<s[j])k++;
        else j++;
    }
    j=0;
    for(int i=0;i<n;i++){
        if(t[i]>s[j])j++,l++;
    }
    cout<<k<<endl<<l;
}
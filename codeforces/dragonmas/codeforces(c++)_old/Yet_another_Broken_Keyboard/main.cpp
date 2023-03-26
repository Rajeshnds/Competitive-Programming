#include<bits/stdc++.h>
using namespace std;
long long no_of_substrings(int n,int k){
    string s;
    char c;
    long long a[123]={0},t=0,l=0;
    cin>>s;
    for(int i=0;i<k;i++)cin>>c,a[c]=1;
    for(int i=0;i<n;i++){
        if(a[s[i]])l++;
        else t+=l*(l+1)/2,l=0;
    }
    return t+l*(l+1)/2;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<no_of_substrings(n,k);
}

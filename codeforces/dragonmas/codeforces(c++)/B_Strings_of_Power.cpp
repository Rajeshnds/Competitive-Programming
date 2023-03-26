#include<bits/stdc++.h>
using namespace std;
long long k,l,i=-1;
string s;
int main(){
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-4;i++){
        if(s.substr(i,5)=="heavy")k++;
        else if(s.substr(i,5)=="metal")l+=k;
    }
    cout<<l;
}
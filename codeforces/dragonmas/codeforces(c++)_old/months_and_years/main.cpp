#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    int a;
    string s,t="181010110101181010110101191010110101";
    t+=t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a%10+48;
    }
    if(t.find(s)==-1)cout<<"NO";
    else cout<<"YES";
}

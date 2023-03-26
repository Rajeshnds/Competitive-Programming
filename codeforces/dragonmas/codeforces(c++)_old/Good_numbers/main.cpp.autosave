#include<bits/stdc++.h>
using namespace std;
int n,k,a,b;
int good_numbers(int b,int k,int &a){
    set<int>s;
    while(b){if(b%10<=k)s.insert(b%10);b/=10;}
    if(s.size()==k+1)a++;
}
int main(){
    cin>>n>>k;
    while(n--)cin>>b,good_numbers(b,k,a);
    cout<<a;
}

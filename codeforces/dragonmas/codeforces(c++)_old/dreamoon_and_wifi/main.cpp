#include<bits/stdc++.h>
using namespace std;
string s,t;
int k,l,d;
int solve(int p,int q){
    return p?solve(p-1,q+1)+solve(p-1,q-1):q==0;
}
int main(){
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        s[i]=='+'?k++:k--;
        if(t[i]=='+')l++;
        else if(t[i]=='-')l--;
        else d++;
    }
    printf("%.81f",(double)solve(d,k-l)/(1<<d));
}

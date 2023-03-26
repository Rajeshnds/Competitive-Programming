#include<bits/stdc++.h>
using namespace std;
int n,a,k,l,b[1000001];
char c;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c>>a;
        if(c=='+')l++,b[a]=1;
        else if(c=='-'&&b[a]==0)k++;
        else if(c=='-'&&b[a])b[a]=0,l--;
        if(l>k)k++;
    }
    cout<<k;
}
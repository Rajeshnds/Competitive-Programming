#include<bits/stdc++.h>
using namespace std;
int n,k;
char a,b;
int no_of_keys(){
    cin>>n;
    int c[27]={0};
    for(int i=1;i<=n-1;i++){
        cin>>a>>b;
        c[a-'a']++;
        if(c[b-'A']==0)k++;
        else c[b-'A']--;
    }
    return k;
}
int main(){
    cout<<no_of_keys();
}

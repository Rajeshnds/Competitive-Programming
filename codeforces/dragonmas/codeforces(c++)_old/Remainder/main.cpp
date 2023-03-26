#include<bits/stdc++.h>
using namespace std;
int n,x,y,j,k;
string s;
int no_of_oper(){
    cin>>n>>x>>y>>s;y++;j=n-1;
    for(int i=1;i<=x;i++){
        if(i==y){if(s[j]!='1')k++;}
        else if(s[j]!='0')k++;
        j--;
    }
    return k;
}
int main(){
    cout<<no_of_oper();
}

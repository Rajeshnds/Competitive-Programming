#include<bits/stdc++.h>
using namespace std;
int n,k,l,m,d,f;
string s;
int standing_dominos(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='R'||f){
            if(s[i]=='R')d=i;
            f=1;
            if(s[i]=='L'){
                if((i-d)%2==0)l++;
                f=0;
            }
        }
        else if(s[i]=='.')m++;
        else m=0;
    }
    return m+l;
}
int main(){
    cout<<standing_dominos();
}

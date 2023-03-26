#include<bits/stdc++.h>
using namespace std;
int n,m,k,l;
string s;
void longest_word(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            i++;
            if(s[i]!='_'&&s[i]!=')')l++;
            while(s[i]!=')'&&i<n){
                if(s[i]=='_'&&s[i+1]!='_'&&s[i+1]!=')')l++;
                i++;
            }
        }
        else{
            k=0;
            while(s[i]!='('&&i<n){
                if(s[i]!='_')k++,m=max(m,k);
                else k=0;
                i++;
            }
            i--;
        }
    }
        cout<<max(m,k)<<" "<<l;
}
int main(){
    longest_word();
}

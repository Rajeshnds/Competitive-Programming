#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
    cin>>n;
    string s;
    while(true){
        s+="47";
        sort(s.begin(),s.end());
        do{
            if(stoll(s)>=n)return cout<<stoll(s),0;
        }while(next_permutation(s.begin(),s.end()));
    }
}

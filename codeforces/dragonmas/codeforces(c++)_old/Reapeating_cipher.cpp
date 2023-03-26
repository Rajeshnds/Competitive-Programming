#include<iostream>
using namespace std;
int main(){
int n,j=0;
string s;
cin>>n>>s;
for(int i=0;i<n;i++){
    i+=j;
    cout<<s[i];
    j++;
    }
    return 0;
}

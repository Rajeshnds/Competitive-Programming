#include<iostream>
using namespace std;
int main(){
int n,m,q,y;
cin>>n>>m;
string s[20],t[20];
for(int i=0;i<n;i++)
    cin>>s[i];
for(int i=0;i<m;i++)
    cin>>t[i];
cin>>q;
while(q){
    cin>>y;
    cout<<s[(y-1)%n]<<t[(y-1)%m]<<endl;
    q--;
}
return 0;

}

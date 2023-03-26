#include<iostream>
using namespace std;
int main(){
int s,v1,v2,t1,t2;
cin>>s>>v1>>v2>>t1>>t2;
int i=(v1*s)+(t1*2);
int j=(v2*s)+(t2*2);
cout<<(i==j ? "Friendship" : (i>j ? "Second" : "First"));
return 0;
}

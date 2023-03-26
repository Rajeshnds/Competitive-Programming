#include<bits/stdc++.h>
using namespace std;
int students;
int Exam(int students){
    if(students==2)cout<<1<<endl<<1<<endl;
    else if(students==3)cout<<2<<endl<<1<<" "<<3;
    else{
        cout<<students<<endl;
        for(int i=students;i>0;i--)if(i&1)cout<<i<<" ";
        for(int i=students;i>0;i--)if(i%2==0)cout<<i<<" ";
    }
}
int main(){
    cin>>students;Exam(students);
}

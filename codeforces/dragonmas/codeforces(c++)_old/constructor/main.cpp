#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    Complex(int x,int y){

    }
    Complex(){

    }
    Complex(Complex &c){
        a=c.a;
        b=c.b;
    }
};
int main(){
    Complex c1,c2(c1);
}

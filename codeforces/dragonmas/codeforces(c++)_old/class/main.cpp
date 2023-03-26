/*#include<bits/stdc++.h>
using namespace std;
struct Complex{
private:
    int a,b;
public:
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void show_data(){
        cout<<a<<endl<<b;
    }
};
int main(){
    Complex c1;
    c1.set_data(3,5);
    c1.show_data();
}*/

//No difference in class and structure

/*#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void set_data(int x,int y){ //function inside class
        a=x;
        b=y;
    }
    void show_data(){
        cout<<a<<endl<<b;
    }
};
int main(){
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
}*/

//function outside class

/*#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void set_data(int,int);
    void show_data(){
        cout<<a<<endl<<b;
    }
};
void Complex:: set_data(int x,int y){
    a=x;
    b=y;
}
int main(){
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
}*/

/*#include<bits/stdc++.h>  //sum of two numbers
using namespace std;
class Sum_of_two{
private:
    int a,b;
public:
    void insert(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a+b;
    }
};
int main(){
    Sum_of_two s1;
    int a,b;
    cin>>a>>b;
    s1.insert(a,b);
    s1.display();
}*/

#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int real,imag;
public:
    void set_data(int x,int y){
        real=x;
        imag=y;
    }
    Complex add_data(Complex c2){
        Complex sum;
        sum.real=real+c2.real;
        sum.imag=imag+c2.imag;
        return sum;
    }
    void show_data(){
        cout<<"sum of numbers are: "<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    int real,imag;
    Complex c1,c2,c3;
    cout<<"Enter real and imaginary part of first number:"<<endl;
    cin>>real>>imag;
    c1.set_data(real,imag);
    cout<<"Enter real and imaginary part of second number:"<<endl;
    cin>>real>>imag;
    c2.set_data(real,imag);
    c3=c1.add_data(c2);
    c3.show_data();
}

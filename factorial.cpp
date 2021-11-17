#include<iostream>
using namespace std ;

int factorial(int );
int main(){
int a;
cout<<" Ingrese un numero "<<endl;
cin>> a;
cout<<"El factorial de "<<a<<" : "<<factorial(a)<<endl;

    return 0;
}

int factorial(int n){
if(n == 0){
    return 1;
}
else {
    return n *factorial(n- 1);
}
}
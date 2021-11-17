#include<iostream>
using namespace std;

void hanoi(int , char , char ,char);

int main(){
int n;
cout<<"Ingrese la cantidad de discos para el juego : ";
cin>>n;
hanoi(n,'O','A','D');

    return 0;
}

void hanoi(int n, char o , char a, char d){
if(n==1){
    cout<<"Mover disco del "<<o<<" al "<<d<<endl;
}
else{
    hanoi(n-1,o,d,a);
    cout<<"Mover disco del "<<o<<" al "<<d<<endl;
    hanoi(n-1,a,o,d);
}
}
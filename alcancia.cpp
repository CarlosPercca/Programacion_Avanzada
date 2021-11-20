#include<iostream>
using namespace std;

class Alcancia{
    private:

    int monto,capacidad;

    public:
    Alcancia();
    void depositar(int);
    void retirar(int);
    void verMonto();
    void establecerCapacidad(int);
};
Alcancia :: Alcancia(){
    monto = 0 ;
    capacidad = 0;
}
void Alcancia :: depositar(int d){
    if(monto + d <= capacidad){
    cout<<"Se depositov la cantidad de "<<d<<" soles"<<endl;
    monto = monto +d;
    }
    else{
        cout<<"El monto a depositar su saldo excede la capacidad de la alcancia"<<endl;
        cout<<"No se realizo la operacion"<<endl;
    }
    
}
void Alcancia :: retirar(int r){
    if (monto>=r){
        cout<<"Se retiro la cantidad de "<<r<<"soles"<<endl;
        monto=monto -r;   
    }
    else{
        cout<<"El monto a retirar excede a lo que tiene almacenado en la alcancia"<<endl;
        cout<<"No se realizo la operacion"<<endl;
    }
}

void Alcancia :: verMonto(){
    cout<<"El saldo de la alcancia es de "<<monto<<" soles"<<endl;
}
void Alcancia :: establecerCapacidad(int c){
    capacidad=c;
}
int main(){

    Alcancia objA;
    int x;
    objA.establecerCapacidad(100);
    objA.verMonto();
    cout<<"Ingrese el monto a depositar : ";cin>>x;
    objA.depositar(x);
    objA.verMonto();
    cout<<"Ingrese el monto a retirar: ";cin>>x;
    objA.retirar(x);
    objA.verMonto();
    return 0;
}


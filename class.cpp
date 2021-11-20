#include<iostream>
using namespace std;

class Auto{
    private:
    string matricula;
    string marca;
    string tipo;
    string color;

    public:
    void imprimirDatos();
    void leerDatos();
    void avanzar();
    void frenar();
    void estacionar();
    void setMatricula(string);
    void setMarca(string);
    void setTipo(string);
    void setColor(string);

};
void Auto :: leerDatos(){
cout<<"Ingrese los datos de la matricula: ";cin>>matricula;
cout<<"Ingrese la marca: ";cin>>marca;
cout<<"Ingrese el tipo ";cin>>tipo;
cout<<"Ingrese el color: ";cin>>color;

}
void Auto :: setMatricula(string m){
matricula = m;
}
void Auto :: setMarca(string n){
marca = n;
}
void Auto :: setTipo(string o){
tipo = o;
}
void Auto :: setColor(string z){
color = z;
}


void Auto :: imprimirDatos(){
cout<<"El auto "<<matricula<<" de marca "<<marca<<" es ";
cout<<"una "<<tipo<<" de color "<<color<<endl;
    
}
void Auto :: avanzar(){
cout<<"El auto esta avanzando"<<endl;
    
}
void Auto :: frenar(){
cout<<"El auto ah frenado"<<endl;
    
}
void Auto :: estacionar(){
cout<<"El auto ah estacionado"<<endl;
    
}

int main(){
    Auto obj1,obj2,obj3;


obj1.setMatricula("B4F945");
obj1.setMarca("Ferraro");
obj1.setTipo("Camioneta");
obj1.setColor("Celeste");
obj1.leerDatos();
obj1.imprimirDatos();
obj1.avanzar();
obj1.frenar();
obj1.estacionar();


    return 0;
}
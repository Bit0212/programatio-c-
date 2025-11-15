#include <iostream>
int sacardinero(int a){

    return a-100;
}
int meterdinero (int a){
    return a+100;
}
int transferir(int a){
    return a -200;

}

int main(){
    int dinero = 1000;
    int decision,saldoactual = 0;

    std::cout<<"Hola soy una maquina de cajero automatico "<<std::endl;
    std::cout<<"inserte un numerito jeje"<<std::endl;
    std::cout<<"Tienes "<<dinero<<" rupias"<<std::endl;
    std::cout<<"Numero 1. "<<" meter dinero"<<std::endl;
    std::cout<<"Numero 2."<<" sacar dinero"<<std::endl;
    std::cout<<"Numero 3."<<" transferir "<<std::endl;
    std::cout<<"Numero 4."<<" salir de esta ventana"<<std::endl;
    std::cin>>decision;
    switch (decision){
        case 1: std::cout<<"hola vas a meter dinero "<<std::endl;
        saldoactual= meterdinero(dinero);
        std::cout<<"tu dinero actual es: "<<saldoactual<<std::endl;
        break;
        case 2: std::cout<<"hola vas a sacar dinero "<<std::endl;
        saldoactual = sacardinero(dinero);
        std::cout<<"tu dinero actual es "<<saldoactual<<std::endl;
        break;
         case 3: std::cout<<"hola vas a transferir dinero "<<std::endl;
        saldoactual = transferir(dinero);
        std::cout<<"tu dinero actual es "<<saldoactual<<std::endl;
        break;
        case 4:std::cout<<"vas a salir de aqui, cuidate mucho "<<std::endl;
        break;
        
        
    }


    return 0;
}
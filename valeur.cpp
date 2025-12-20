#include <iostream>
int main(){
    int numero =0;
    int suma =0;
    while(numero<20 || numero>30){

        std::cout<<"pasame un numero"<<std::endl; std::cin>>numero;
        if (numero>0){
            suma +=numero;
        }
    }
std::cout<<"la suma de los numeros positivos introducidos es: "<<suma<<std::endl;
    return 0;
}
#include <iostream>
int main(){
int meses;
std::cout<<"Hola dime el numero del mes del año que quieras ver"<<std::endl;
std::cin>>meses;
switch (meses){
    case 1: std::cout<<"Enero"; break;
    case 2: std::cout<<"Febrero"; break;
    case 3: std::cout<<"Marzo"; break;
    case 4: std::cout<<"Abril"; break;
    case 5: std::cout<<"Mayo"; break;
    case 6: std::cout<<"Junio"; break;
    case 7: std::cout<<"Julio"; break;
    case 8: std::cout<<"Agosto "; break;
    case 9: std::cout<<"Septiembre "; break;
    case 10: std::cout<<"Octubre"; break;
    case 11: std::cout<<"Noviembre"; break;
    case 12: std::cout<<"Diciembre"; break;
    

}

    return 0;

}
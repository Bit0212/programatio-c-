#include <iostream>
int main(){
int i;
int e =0;
while(i!=0){
    std::cout<<"pasame un numerito: "<<std::endl; std::cin>>i;
if(i>0){
    e++;
}
}
std::cout<<"la cantidad de numeros mayores que cero introducidos son: "<<e<<std::endl;
    return 0;
}
#include <iostream>
#include <cmath>
int main(){
int trusta;
do{
    std::cout<<"pasa paca numerito "<<std::endl; std::cin>>trusta;
}while(trusta<1 || trusta>10);
for(int i =0; i<=20; i++){
    std::cout<<trusta<<" * "<<i<<" = "<<trusta*i<<std::endl;
}

    return 0;
}
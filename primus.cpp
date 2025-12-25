#include <iostream>
int main() {
int a =0;
    std::cout<<"pasame un numero crack"<<std::endl;
    std::cin>>a;
    if(a>2){
        std::cout<<"es imposible descomponerlo en factores primos crack un saludo "<<std::endl;

    }
    for(int i =2; i*i<=a; i++){
        while(a% i ==0){
            std::cout<<i;
            a/=i;
            if(a>1){
                std::cout<<"*";
            }
        }

    }
if(a>1){
    std::cout<<a<<std::endl;
}
    return 0;
}

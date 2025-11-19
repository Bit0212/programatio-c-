#include <iostream>
#include <vector>

int main(){
    int l;
std::cout<<"hola cuantos numeros quieres"<<std::endl;
std::cin>>l;
std::vector<int>pedro;
for(int c =0; c<l; c++){
int d;
std::cout<<"pasame un numero che"<<std::endl;
std::cin>>d;
pedro.push_back(d);


}
std::cout<<"bueno la cantidad de numeros que pusiste son: "<<pedro.size()<<"\n";
for(int i =0; i<pedro.size(); i++){
std::cout<<pedro[i]<<"\n";

}


    return 0;
}
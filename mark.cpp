
#include <iostream>
int main(){
  int a, sum =0;
std::cout<<"hola podrias pasarme un numero jeje "<<std::endl;
std::cin>>a;

for(int i =1; i<=(a*2)-1; i+=2  ){
sum +=i;
}

std::cout<<"\n"<<sum;
  return 0;
}

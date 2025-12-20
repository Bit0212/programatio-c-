#include <iostream>
#include <cmath>
int main(){
  int update =0;
for(int i =0; i<=10; i++){
  int resultado =pow(i,2);
  std::cout<<resultado<<std::endl;
update +=  resultado;
if(i==10){

  std::cout<<update<<std::endl;
}
}

  return 0;
}

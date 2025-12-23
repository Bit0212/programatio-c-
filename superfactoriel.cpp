 #include <iostream>
int factorial(int a){
  int b =1;
  for(int i =1; i<=a; i++){
    b *=i;
  }
  return b;
}
int main(){
  int a,b  =0;
  std::cout<<"hola bienvenido a mi programa pasame una variable jeje"<<std::endl;
  std::cin>>a;
  for(int i =0; i<=a; i++){
b+=factorial(i);

  }
  std::cout<<" el numerito loco es: "<<b;
  return 0;
}

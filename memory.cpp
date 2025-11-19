#include <iostream>
#include <vector>
int main(){
std::vector<int>b;
b.push_back(7);
for(int i = 0; i<50; i++){
    b.push_back(i);
}
std::cout<<b[0]<<"\n";
b.push_back(20);
b.push_back(1);
int f =b.size();
std::cout<<b[2]<<"\n";
std::cout<<f<<"\n";
for(int i =0; i<f; i++){
    std::cout<<b[i]<<"\n";
}
    return 0;
}
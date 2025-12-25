#include <cmath>
#include <iostream>

int main()
{
    int hola = 0;
    int potencielle = 0;
    std::cout << "hola buenas tardes escoja una de las siguientes opciones " << std::endl;

    std::cout << "1.cubo de algo\n"
              << "2.par o impar" << "3. Salir de este programa" << std::endl;
    std::cin >> hola;
    switch (hola)
    {
    case 1:
        std::cout << "\nPasame un numero " << std::endl;
        std::cin >> potencielle;
        std::cout << "tu numero bien cubeado es: "<<pow(potencielle,3)<<std::endl;

            break;
            case 2:
            std::cout<<"pasame tu numero para ver si es par/impar "<<std::endl;
            std::cin>>potencielle;
            if(potencielle %2 ==0){
                std::cout<<"es par felicidades"<<std::endl;
                break;
            }
            else {
                std::cout<<"no es par felicidades "<<std::endl;
                break;
            }
            break;
case 3:
std::cout<<"adios de este programa che "<<std::endl;
break;
            default:
std::cout<<"adios de este programa che "<<std::endl;
break;
        
    }

    return 0;
}

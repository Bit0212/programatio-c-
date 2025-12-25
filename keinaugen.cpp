#include <iostream>

int main() {
  int l = 0;
  int decisio1, decisio2, decisio3 = 0;
  int alle = 0;
  int nulle = 0;
  int eins = 0;
  int secunde = 0;
  int troisene = 0;

  while (l < 5) {
    std::cout << "jeje este es el alumno numero  " << l << std::endl;
    std::cout << "paso el primero (1 para si, 2 para no)" << std::endl;
    std::cin >> decisio1;
    if (decisio1 == 1) {
      eins++;
    } else {
      std::cout << "no paso el primero" << std::endl;
    }

    std::cout << "paso el segundo (1 para si, 2 para no)" << std::endl;
    std::cin >> decisio2;
    if (decisio2 == 1) {

      secunde++;
    } else {
      std::cout << "no paso el segundo jeje " << std::endl;
    }
    std::cout << "paso el tercero (1 para si, 2 para no)" << std::endl;
    std::cin >> decisio3;
    if (decisio3 == 1) {

      troisene++;

    } else {
      std::cout << "no pasaste el tercero jejen " << std::endl;
    }
    if (decisio1 == 1 && decisio2 == 1 && decisio3 == 1) {
      alle++;
    } else if (decisio1 == 0 && decisio2 == 0 && decisio3 == 0) {
      nulle++;
    }

    l++;
  }

  if (eins == 0) {
    std::cout << "nadie paso el primero jeje" << std::endl;
  }
  if (eins == 1 || secunde == 1 || troisene == 1) {
    std::cout << "almenos alguien tuvo correcto por lo menos un examen "
              << std::endl;
  }
  if (alle == 5) {
    std::cout << "todos pasaron jeje " << std::endl;
  }
  if (nulle == 5) {
    std::cout << "nadie paso jeje je je je " << std::endl;
  }
  if (troisene == 5) {
    std::cout << "todos pasaron almenos el tercero jeje je je je " << std::endl;
  }

  return 0;
}

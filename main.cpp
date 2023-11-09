#include <iostream>

int ej1(){
    int a, n;
    std::cout << "Escriba un numero: \n";std::cin >> n;
    std::cout << "Escriba un numero: \n";std::cin >> a;
    return a + n;
}

int main(){
    std::cout << ej1() << std::endl;
}

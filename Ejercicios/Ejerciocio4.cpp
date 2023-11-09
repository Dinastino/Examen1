#include <iostream>

void division(int a, int b){
    if (b == 0){
        throw std::runtime_error("No se puede dividir entre 0"); //Throw para cuando un numero se divide entre cero
    }
    else { //Si no existe ningun problema
        std::cout << "El resultado es: \n" << a / b << "\n Con resto: \n" << a % b << std::endl;
    }
}

int main(){
    int n, v;
    std::cout << "Escriba un numero: \n";std::cin >> n;
    std::cout << "Escriba su divisor: \n";std::cin >> v;
    try {
        division(n,v);
    }
    catch (const std::runtime_error& e){ //Si se intenta dividir entre cero el throw se activa provocando una excepcion capturada por catch que devuelve el error
        std::cerr << "Excepción capturada en el main: " << e.what() << std::endl;
    }
}
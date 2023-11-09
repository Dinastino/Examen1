#include <iostream>

void cambio(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    std::cout << "Escriba un numero: \n";std::cin >> b;
    std::cout << "Escriba un segundo numero: \n";std::cin >> a;
    std::cout << "Antes del cambio: \n" << a << "\n" << b << std::endl;
    cambio(&a, &b);
    std::cout << "Despues del cambio: \n" << a << "\n" << b << std::endl;
}

#include <iostream>

int ej1(){ //Funcion utilizada para la suma
    int a, n; //Variables a utilizar
    std::cout << "Escriba un numero: \n";std::cin >> n;
    std::cout << "Escriba un segundo numero: \n";std::cin >> a; //Se piden dos numeros
    return a + n; //se suman en el return y al llamar a la funcion devuelve el resultado
}

int main(){
    std::cout << ej1() << std::endl; // llamada de la funcion en main
}

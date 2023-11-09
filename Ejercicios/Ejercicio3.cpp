#include <iostream>

int division(int a, int b){
    try {
        a / b;
        if (b == 0){
            throw std::runtime_error("No se puede dividir entre 0");
        }
    }
    catch (const std::runtime_error& e){

    }
}

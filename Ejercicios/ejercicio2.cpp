#include <iostream>
#include <string>

class estudiante{
private:
    std::string nombre;
    int edad;
    std::string grado;
public:
    estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}
    void mostrar_info(){
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Nombre: " << grado << std::endl;
    }
};

int main(){
    estudiante estudiante1("juanjo", 20, "Primero de ESO");
    estudiante1.mostrar_info();
}
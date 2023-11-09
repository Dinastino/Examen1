#include <iostream>
#include <string>

class estudiante{ //Creacion de la clase estudiante
private: //Establecimiento de parametros
    std::string nombre;
    int edad;
    std::string grado;
public:
    estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {} //adecuar para la llamada en main
    void mostrar_info(){ // mostrar los datos del estudiante cuando llamado
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Nombre: " << grado << std::endl;
    }
};

int main(){
    estudiante estudiante1("juanjo", 20, "Primero de ESO"); // Se introducen los datos del estudiante
    estudiante1.mostrar_info(); // Se llama a la funcion mostrar info
}
//utilizando la como base el ejercicio 2
#include <iostream>
#include <string>
#include <vector>

class estudiante{ //Creacion de la clase estudiante
private: //Establecimiento de parametros
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> asignaturas;//Vector/lista para guardar las asignaturas/materias
    std::vector<int> calificaciones; //Vector pata notas
public:
    estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {} //adecuar para la llamada en main
    double calcular_promedio(){
        int s = 0;
        if(calificaciones.empty()){
            std::cout << "No hay notas o no ha sido evaluado" << std::endl;
            return 0; // Se imprime si on hay notas
        }
        else {
            for(int calificacion : calificaciones){
                s += calificacion;
            }
            double promedio = static_cast<double>(s) / calificaciones.size();
            std::cout << "Promedio de calificaciones: " << promedio << std::endl; //Imprime el promedio en pantalla
            return 0;
        }
    }

    void mostrar_info(){ // mostrar los datos del estudiante cuando llamado
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Nombre: " << grado << std::endl;
        mostrar_asignatura(); //Lama a la funcion mostrar asignatura
        calcular_promedio(); // LLama a la funcion calculat promedio
    }
    void registrar_asignatura(const std::string& asignatura) { //funcion utilizada para registrar asignaturas en el vector
        asignaturas.push_back(asignatura);
    }
    void registrar_calificaciones(const std::vector<int>& notas){
        calificaciones = notas; // funcion patra registrar las noras
    }
    void mostrar_asignatura(){
        if (!asignaturas.empty()) {
            std::cout << "Asignaturas registradas:" << std::endl;
            for (const auto& asignatura : asignaturas) {
                std::cout << "- " << asignatura << std::endl; // imprime todas las registradas
            }
        }
        else {
            std::cout << "No hay asignaturas registradas." << std::endl; //Si no hay ninguna registrada
        }
    }
};

int main(){
    estudiante estudiante1("juanjo", 20, "Primero de ESO"); // Se introducen los datos del estudiante
    estudiante1.registrar_asignatura("Mates"); //Asignaturas/materias que se registran
    estudiante1.registrar_asignatura("Fisica");
    estudiante1.registrar_asignatura("Programacion");
    std::vector<int> calificaciones = {10,9,3,5,6}; //Crea un vector conteniendo las notas
    estudiante1.registrar_calificaciones(calificaciones); //Registra las notas
    estudiante1.mostrar_info(); // Se llama a la funcion mostrar_info
}
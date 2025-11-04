//
// Created by meked on 02/11/2025.
//
#include <iostream>
#include <locale>
#include <string>

int main() {
    system("chcp 65001");              // Cambia la consola a UTF-8
    std::locale::global(std::locale("")); // Activa configuración regional del sistema
    std:: string nombre; //Le dice a la memoria que le dé un lugar para guardar texto (string

    //std::cout << "¡Bienvenido! Aquí hay acentos: á é í ó ú ñ" << std::endl;
    //std::cout << "Este es el texto que quiero que aparezca" << std::endl;

    //cada línea se escribirá de la misma forma agragando << std::endl; para poder saltar de línea
    //std::cout << "AHORA TENGO OTRO TEXTO" << std::endl;
    //std::cout << "Tercera línea" << std::endl;
    //std::cout << "Cuarta línea" << std::endl;

    std::cout <<"Ingresa tu nombre:";
    std::cin >> nombre; //Lee lo que se escriba en la consola
    std::cout << std::endl; // salto de línea
    std::cout << "Hola, " << nombre << ", bienvenido a C++";//Imprime lo que se lee en la consola

}
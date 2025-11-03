//
// Created by meked on 02/11/2025.
//
#include <iostream>
#include <locale>

int main() {
    system("chcp 65001");              // Cambia la consola a UTF-8
    std::locale::global(std::locale("")); // Activa configuración regional del sistema

    std::cout << "¡Bienvenido! Aquí hay acentos: á é í ó ú ñ" << std::endl;
    std::cout << "Este es el texto que quiero que aparezca" << std::endl;

    //cada línea se escribirá de la misma forma agragando << std::endl; para poder saltar de línea
    std::cout << "AHORA TENGO OTRO TEXTO" << std::endl;
    std::cout << "Tercera línea" << std::endl;
    std::cout << "Cuarta línea" << std::endl;
}
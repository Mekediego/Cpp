//
// Created by meked on 05/11/2025.
//
#include <iostream> //Librerías de operaciones
#include <locale>

int main() {
    system("chcp 65001");              // Cambia la consola a UTF-8
    std::locale::global(std::locale("")); // Activa configuración regional del sistema
    int largo, ancho, area, perimetro; //Declaramos una variable con int Rectangulo
    int LadoA, LadoB, LadoC, perimetroT; // Perímetro triángulo.
    //int ancho; //Declaramos una variable con int
    //int area; //Declaramos una variable con int
    //int perimetro; //Declaramos una variable con int

std::cout <<"Generando programa para perímetro de triángulo" << std::endl;
    std::cout << "Ingrese lado A: "; //Imprime en pantalla
    std::cin >> LadoA; //Lee lo que se escrib
    std::cout << "Ingrese lado B: "; //Imprime
    std::cin >> LadoB; //Lee lo que se escribe
    std::cout << "Ingrese lado C: "; //Imprime
    std::cin >> LadoC; //Lee lo que se escribe

    perimetroT = LadoA + LadoB + LadoC;


    std::cout << "El perímetro del triángulo es " << perimetroT << " cm" << std::endl;
    std::cout << std::endl;
    std::cout <<"Perímetro y área de un cuadrado" << std::endl;
    std::cout << "Ingrese el largo: "; //Imprime en pantalla
    std::cin >> largo; //Lee lo que se escriba en la consola
    std::cout << "Ingrese el ancho: "; //Imprime en pantalla
    std::cin >> ancho; //Lee lo que se escriba en la consola

    perimetro = largo * 2 + ancho * 2; //Rectángulo
    area = largo * ancho; // rectángulo

    std:: cout <<"El perímetro es: " <<perimetro << std::endl; //std::endl; es para que baje el renglón.
    std:: cout <<"El área es: " <<area;
    std:: cout <<"El perímetro es " <<perimetro << " y el área " <<area << "." << std :: endl;
    std:: cout << "Enter para salir.";
    std:: cin.ignore();
    std:: cin.get();

}
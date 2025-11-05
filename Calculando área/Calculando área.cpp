//
// Created by meked on 05/11/2025.
//
#include <iostream> //Librerías de operaciones
#include <locale>

int main() {
    system("chcp 65001");              // Cambia la consola a UTF-8
    std::locale::global(std::locale("")); // Activa configuración regional del sistema
    int largo, ancho, areaR, perimetroR, areaC, perimetroC, lado; //Declaramos una variable con int
    //int ancho; //Declaramos una variable con int
    //int area; //Declaramos una variable con int
    //int perimetro; //Declaramos una variable con int

    //std::cout << "Ingrese el largo: "; //Imprime en pantalla
    //std::cin >> largo; //Lee lo que se escriba en la consola
    //std::cout << "Ingrese el ancho: "; //Imprime en pantalla
    //std::cin >> ancho; //Lee lo que se escriba en la consola

    perimetroR = largo * 2 + ancho * 2; //Rectángulo
    areaR = largo * ancho; // rectángulo

    perimetroC = 4*lado; //Cuadrado
    areaC = lado * lado; //Cuadrado


    std::cout << "Ingrese medida de lado: "; //Imprime en pantalla
    std::cin >> lado;
    std::cout << "Ingrese medida de lado nuevamente para saber el área: "; //Imprime en pantalla

    std::cout <<"El perímetro es " << perimetroC << " y el área " << areaC;
    //std:: cout <<"El perímetro es: " <<perimetro << std::endl; //std::endl; es para que baje el renglón.
    //std:: cout <<"El área es: " <<area;

    //std:: cout <<"El perímetro es " <<perimetroR << " y el área " <<areaR << "." << std :: endl;



    std:: cout << "Enter para salir.";
    std:: cin.ignore();
    std:: cin.get();

}
#include "../include/calcula.h"
#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;

int main(void){
	/*menu de escolhas*/
	int op;
	do{
	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" <<endl;
	cout << "(3) Quadrado"<<endl;
	cout << "(4) Circulo"<<endl;
	cout << "(5) Piramide com base quadrangular"<<endl;
	cout << "(6) Cubo"<<endl;
	cout << "(7) Paralelepipedo"<<endl;
	cout << "(8) Esfera"<<endl;
	cout << "(0) Sair"<<endl;
	cout << "Digite a sua opcao: ";
	cin >> op;
	calcula(op);
	}while(op != 0);
	
	return EXIT_SUCCESS;
}

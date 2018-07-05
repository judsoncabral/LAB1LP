#include "../include/fatorial.h"
#include "../include/primalidade.h"
#include <stdexcept>

#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;

int main(int argc,char *argv[]){
	if(argc == 1){
		throw std::runtime_error("Não foi fornecido um número!");
	}
	int x,y;
	/*Chama as funcoes para achar o ultimo primo e achar fatorial*/
	y = atoi(argv[1]);
	x = fatorial(y);

	cout << "Maior número primo anterior ao fatorial de " << y << " (" << x << ") eh " << primalidade(x-1) << "." << endl; 

	return EXIT_SUCCESS;
}

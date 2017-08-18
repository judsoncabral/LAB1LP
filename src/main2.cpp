#include "fatorial.h"
#include "primalidade.h"
#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;

int main(int argc,char *argv[]){
	int x,y;
	/*Chama as funcoes para achar o ultimo primo e achar fatorial*/
	y = atoi(argv[1]);
	x = fatorial(y);

	cout << "Maior número primo anterior ao fatorial de " << y << " (" << x << ") eh " << primalidade(x-1) << "." << endl; 


}

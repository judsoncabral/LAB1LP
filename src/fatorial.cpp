#include <iostream>
/*Calcula o fatorial por recursao*/
int fatorial(int x){
	if(x>1){
		return x*fatorial(x-1);
	}
	else{
		return 1;
	}
}

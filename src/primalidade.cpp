#include <iostream>
#include "primalidade.h"

int primalidade(int x){

	for(int i = 2; i < x; i++){
		if(x%i == 0){
			return primalidade(x-1);
		}
		
	}
}
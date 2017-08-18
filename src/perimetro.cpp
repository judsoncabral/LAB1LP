#include "perimetro.h"
#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
	
float perimetroTriangulo(float z){
	float per;
	per = 3*z;
	cout<<"O valor do perimetro eh:"<<per<<endl;
	return 0;
}

float perimetroRetangulo(float z,float y){
	float per;
	per = 2*(z+y);
	cout<<"O valor do perimetro eh:"<<per<<endl;
	return 0;
}

float perimetroQuadrado(float z){
	float per;
	per = 4*z;
	cout<<"O valor do perimetro eh:"<<per<<endl;
	return 0;
}


float perimetroCirculo(float z){
	float per;
	float pi;
	pi= 3.1415;
	per = 2*z*pi;
	cout<<"O valor do comprimento da circurferencia eh:"<<per<<endl;
	return 0;
}
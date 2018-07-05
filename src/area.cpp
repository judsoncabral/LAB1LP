#include <cstdlib>
#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include "../include/area.h"
/*cada funcao calcula sua respectia area*/
float areaTriangulo(float z,float y){
	float a;
 	a = (z*y)/2;
 	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaRetangulo(float z,float y){
	float a;
	a = z*y;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaQuadrado(float z){
	float a;
	a = z*z;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaCirculo(float z){
	float a;
	float pi;
	pi = 3.1415;
	a = pi*z*z;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaPiramide(float z,float y){
	float a;
	a = z+y;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaCubo(float z){
	float a;
	a = 6*z*z;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaParalelepipedo(float z,float y,float k){
	float a;
	a= (2*z*y)+(2*z*k)+(2*k*y);
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}

float areaEsfera(float z){
	float a;
	float pi;
	pi = 3.1415;
	a= 4*pi*z*z;
	cout<<"O valor da area eh:"<<a<<endl<<endl;
	return 0;
}


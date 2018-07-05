#include "../include/volume.h"
#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
	/*calcula volume de sua respectiva figura*/
float volumePiramide(float z,float y){
	float v;
	v = (z*y)/3;
	cout<<"O valor do volume eh:"<<v<<endl;
	return 0;
}

float volumeCubo(float z){
	float v;
	v = z*z*z;
	cout<<"O valor do volume eh:"<<v<<endl;
	return 0;
}

float volumeParalelepipedo(float z,float y,float k){
	float v;
	v = z*y*k;
	cout<<"O valor do volume eh:"<<v<<endl;
	return 0;
}

float volumeEsfera(float z){
	float v;
	float pi;
	pi = 3.1415;
	v= (4*pi*z*z*z)/3;
	cout<<"O valor do volume eh:"<<v<<endl;
	return 0;
}


#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include "perimetro.h"
#include "calcula.h"
#include "volume.h"
#include "area.h"

int calcula(int x){
	/*verifica se foi escolhida uma opcao valida e depois chama a funcao pra calcular de acordo com opcao escolhida*/
	if(x<0 || x>8){
		cout << "Digite uma opcao valida:" << endl;
		cin >> x;
		return calcula(x);
	}
	float b,h,l,ar,ar1,ar2,ar3,ab;
	float r;
	
	switch (x){

		case 1:

			cout<<"Digite o valor da base do triangulo:"<<endl;
			cin >> b;
			cout<<"Digite o valor da altura do triangulo:"<<endl;
			cin >> h;
			cout<<"Digite o valor do lado do triangulo:"<<endl;
			cin >> l;
			
			perimetroTriangulo(l);
			areaTriangulo(b,h);
			break;

		case 2:

			cout<<"Digite o valor da base do retangulo:"<<endl;
			cin >> b;
			cout<<"Digite o valor da altura do retangulo:"<<endl;
			cin >> h;
			perimetroRetangulo(b,h);
			areaRetangulo(b,h);
			break;

		case 3:

			cout<<"Digite o valor do lado do quadrado:"<<endl;
			cin >> l;
			perimetroQuadrado(l);
			areaQuadrado(l);
			break;

		case 4:

			cout<<"Digite o valor do raio do circulo:"<<endl;
			cin >> r;
			perimetroCirculo(r);
			areaCirculo(r);
			break;

		case 5:

			cout<<"Digite o valor da area da base da piramide:"<<endl;
			cin >> ab;
			cout<<"Digite o valor da area lateral da piramide:"<<endl;
			cin >> l;
			cout<<"Digite o valor da altura da piramide:"<<endl;
			cin >> h;

			volumePiramide(ab,h);
			areaPiramide(b,l);
			break;

		case 6:

			cout<<"Digite o valor da aresta do cubo:"<<endl;
			cin >> ar;
			volumeCubo(ar);
			areaCubo(ar);
			break;
		
		case 7:

			cout<<"Digite o valor do primeiro par de aresta identia:"<<endl;
			cin >> ar1;
			cout<<"Digite o valor do segundo par de aresta identia:"<<endl;
			cin >> ar2;
			cout<<"Digite o valor do terceiro par de aresta identia:"<<endl;
			cin >> ar3;
			volumeParalelepipedo(ar1,ar2,ar3);
			areaParalelepipedo(ar1,ar2,ar3);
			break;
		case 8:

			cout<<"Digite o valor do raio:"<<endl;
			cin >> r;
			volumeEsfera(r);
			areaEsfera(r);
			break;
		case 0:
			return 0;
			break;

	}
	return 0;
}

#include <iostream>
#include <vector> 
#include <stdlib.h>
#include <GL/glut.h>

#include "Vector3.hh"


using namespace std;

float pseudoAngle(Vector3* v){

	float x = v->x;
	float y = v->y;

	if(y >= 0){

		if(x >= 0){

			if(x >= y){

				return y/x;
			}

			return 2 - (y/x);
		}

		if(-x <= y){

			return 2 + (-x)/y;

		}

		return 4 - y/(-x);

	}

	if(x < 0){

		if(-x >= -y){

			return 4 + (-y)/(-x);
		}

		return 6 - (-x)/(-y);

	}

	if(x <= -y){

		return 6 + x/(-y);

	}

	return 8 - (-y)/x;


}

float pseudoAngle2(Vector3* v1, Vector3* v2){

	Vector3* sub = v1->sub2D(v2);

	float pang = pseudoAngle(sub);

	delete sub;

	return pang;

}



int main(int argc, char** argv){

	system("clear");

	int option;
	

	cout << "Cálculo de pseudoângulo" << endl << endl;
	cout << "1. Um vetor" << endl;
	cout << "2. Dois vetores" << endl;
	cout << "3. Bateria de testes" << endl << endl;
	cout << "Escolha sua opção: ";
	cin >> option;

	system("clear");

	switch(option){

		case 1: {

				float x,y;

				cout << "Entre com as coordenadas do vetor " << endl;
				cout << "x: ";
				cin >> x;
				cout << "y: ";
				cin >> y;

				Vector3* v = new Vector3(x,y,1.0);

				float pang = pseudoAngle(v);

				cout << "Pseudoângulo do seu vetor é: " << pang << endl;

				delete v;

			}

			break;
		
		case 2: {

				float x1,x2,y1,y2;

				cout << "Entre com as coordenadas do vetor 1" << endl;
				cout << "x: ";
				cin >> x1;
				cout << "y: ";
				cin >> y1;

				Vector3* v1 = new Vector3(x1,y1,1.0);

				cout << "Entre com as coordenadas do vetor 2" << endl;
				cout << "x: ";
				cin >> x2;
				cout << "y: ";
				cin >> y2;

				Vector3* v2 = new Vector3(x2,y2,1.0);

				float pang = pseudoAngle2(v1,v2);

				cout << "Pseudoângulo entre os seus vetores é: " << pang << endl;

				delete v1;
				delete v2;

			}

			break;
		
		case 3: {

				cout << "Vetor nulo" << endl;

				Vector3* nulo = new Vector3(0.0,0.0,0.0);

				float nullpang = pseudoAngle(nulo);

				cout << "Pseudoângulo do vetor nulo é: " << nullpang << endl << endl;

				delete nulo;

				cout << "Vetores colineares (0.005,0.01) e (1,2)" << endl;

				Vector3* vt1 = new Vector3(0.005,0.01,1.0);
				Vector3* vt2 = new Vector3(1.0,2.0,1.0);

				float colpang = pseudoAngle2(vt1,vt2);

				cout << "O pseudoângulo é: " << colpang << endl;

				delete vt1;
				delete vt2;


			}

			break;

	}

	

	return 0;

}
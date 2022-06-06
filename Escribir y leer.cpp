#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	fstream archivo;
	
	archivo.open("Prueba.txt",ios::out);
	if (archivo.is_open()){
		
		archivo << "Uno" << endl;
		archivo << "2" << endl;
		
		archivo.close();
	}
	
	archivo.open("Prueba.txt",ios::app);
	if (archivo.is_open()){
		
		archivo << "Uno" << endl;
		archivo << "2" << endl;
		
		archivo.close();
	}

	archivo.open("Prueba.txt",ios::in);
	if (archivo.is_open()){
		string linea;
		while (getline(archivo,linea)){
			cout << linea << endl;
		}
		archivo.close();
	}


}
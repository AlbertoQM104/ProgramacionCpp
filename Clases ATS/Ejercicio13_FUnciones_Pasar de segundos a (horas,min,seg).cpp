/*Ejercicio13_Funciones

Escriba una función nombrada tiempo() que tenga un parámetro en 
número entero llamado totalSeg y tres parámetrps de referencia 
enteros nombrados horas, min y seg. La función es convertir el 
número de segundos transmitido en un número equivalente de 
horas, minutos y segundos.

*/

#include <iostream>
#include <locale>

using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	setlocale(LC_ALL,"");
	
	int totalSeg, hrs, min, seg;
	
	cout<<"Ingrese el total de segundos pasados: ";
	cin>>totalSeg;
	
	tiempo(totalSeg,hrs,min,seg);
	
	cout<<"-----------------\n";
	cout<<"Cantidad de horas   : "<<hrs<<endl;
	cout<<"Cantidad de minutos : "<<min<<endl;
	cout<<"Cantidad de segundos: "<<seg<<endl;
	cout<<"--------- "<< hrs <<" hrs "<< min<< " min "<<seg<< " seg ---------"<<endl;
	
	
	system("pause>nul");
	return 0;
}



void tiempo(int totalSeg, int& hrs, int& min, int& seg){
	
	hrs = totalSeg/3600;
	totalSeg = totalSeg%3600; 
	
	min = totalSeg/60;
	
	seg = totalSeg%60;
	
	
	
}

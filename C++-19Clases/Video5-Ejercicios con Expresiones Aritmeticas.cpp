#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
//	Sumatoria--
//	int n,res;
//	cout<<"Sumatoria de Numeros"<<endl;
//	cout<<"Ingreso hasta que numero quiere la sumatoria: "<<endl;
//	cin>>n;
//	res = n*(n+1)/2;
//	cout<<"El resultado de la sumatoria es: "<<res<<endl;
	
	
//	Conversión de temperatura
//	float c, k, f;
//	
//	cout<<"Programa que muesta las equivalencias de temperatura"<<endl;
//	cout<<"Inroduzca el valor de la temperatura en grados celsius: "<<endl;
//	cin>>c;
//	
//	k = c + 273.15;
//	f = c*(9/5)+ 32;
//	
//	cout<<"Los equivalentes de la temperatura "<<c<<" °C :"<<endl;
//	cout<<"Kelvin: "<<k<<endl;
//	cout<<"Fahrenheit: "<<f<<endl;


//  Calculo de la Fuerza
//	float m, resp;
//
//	cout<<"Calcular la Fuerza del Cuerpo"<<endl;	
//	cout<<"Ingrese la masa del cuerpo: ";
//	cin>>m;
//	
//	resp = m*9.81;
//	
//	cout<<"La fuerza/peso del cuerpo es: "<<resp<<endl;


//	Raíz de polinomios
	float a, b, c,x, resp1,resp2;
	
	cout<<"Hallr las raices de un Polinomio"<<endl;
	cout<<"Polinomio: ax^2 + bx + c"<<endl;
	cout<<"Ingrese el valor de 'a': ";
	cin>>a;
	cout<<"Ingrese el valor de 'b': ";
	cin>>b;
	cout<<"Ingrese el valor de 'c': ";
	cin>>c;
	
	x = (b*b)-(4*a*c);
	
	resp1 = (-b + sqrt(x))/(2*a);
	resp2 = (-b - sqrt(x))/(2*a);
	
	cout<<"La 1era raiz es: "<<resp1<<endl;
	cout<<"La 2da raiz es: "<<resp2<<endl;
	
	return 0;
}




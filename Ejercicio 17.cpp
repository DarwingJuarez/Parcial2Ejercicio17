//Desplegar enteros entre 50 y 80
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int num = 50;
	int numero = (-50);
	
	cout<<"NUMEROS ENTEROS ENTRE 50 Y 80:\n";
	
	while(num<80){
		num++;
		numero--;
		cout<<num<<"     "<<numero<<endl;
	}
	
	getch();
	return 0;
}

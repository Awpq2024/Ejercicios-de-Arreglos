#include <iostream>
using namespace std;

void eco(char cadena []){
	int n = 0;
	while (cadena[n]!= '\0'){
		n++;
	}
	for (int i=0;i<n;i++){
		while (cadena[i]==' '){
			i++;
		}
		if (cadena[i+1]!=' '){
			cout<<cadena[i];
		}else{
			cout<<cadena[i]<<endl;
			i++;
		}
	}
}

int main(){
	char miarray[100];
	cout<<"Ingrese una oracion: ";
	gets(miarray);
	eco(miarray);
	
	return 0;
}
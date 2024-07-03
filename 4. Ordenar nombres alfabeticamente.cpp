#include <iostream>
using namespace std;

void ordenarNombres(string nombres[],int n){
	string auxiliar;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(nombres[i]>nombres[j]){
				auxiliar=nombres[i];
				nombres[i]=nombres[j];
				nombres[j]=auxiliar;
			}
		}	
	}	
}

int main(){
	string nombres[100];
	int n;
	cout<<"Ingrese la cantidad de nombres a ingresar: ";
	cin>>n;
	cin.ignore();

	for(int i=0;i<n;i++){
		cout<<"Ingrese el nombres numero "<<i+1<<": ";
		getline(cin,nombres[i]);
	}
	ordenarNombres(nombres,n);
	
	cout<<"\nLos nombres ordenados alfabeticamente son: \n";
	for (int i=0;i<n;i++){
		cout<<nombres[i]<<endl;
	}
	
	return 0;
}
#include <iostream>
using namespace std;

void ordenamientoVector(int vector[], int n){
	int auxiliar=0;
    for(int i=0;i<n-1;++i){
        for (int j=0;j<n-i-1;++j){
            if (vector[j]>vector[j+1]){
                auxiliar=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=auxiliar;
            }
        }
    }
}

float calculoMedia(int vector[],int n){
	float suma=0;
	float resultado=0;
	float media=0;
	for(int i=0;i<n;++i){
		suma+=vector[i];
	}
	media=suma/n;
	
	return media;
}

float calculoMediana(int vector[],int n){
	ordenamientoVector(vector,n);
	float mediana=0;
	if(n%2==0){
		mediana=(vector[n/2-1]+vector[n/2])/2.0;
		return mediana;
	}else{
		mediana=vector[n/2];
		return mediana;
	}
}

int calculoModa(int  vector[], int n){
	int moda=-1;
	int maxFrecuencia=0;
	int frecuencia;
	for(int i=0;i<n;++i){
		frecuencia=1;
		for(int j=i+1;j<n;++j){
			if(vector[j]==vector[i]){
				frecuencia++;
			}
		}if(frecuencia>maxFrecuencia){
			maxFrecuencia=frecuencia;
			moda=vector[i];
		}	
	}if(maxFrecuencia==1){
		return -1;
	}
	return moda;
}
void generadorNumerosAleatorios(int vector[],int n){
	for(int i=0;i<n;i++){
		vector[i]=rand()%901+100;
	}
}

void vectorImpreso(int vector[],int n){
	for (int i=0;i<n;++i){
		cout<<vector[i]<<" ";
	}
}

int main(){
	int vector[30];
	int moda;
	float media,mediana;
	generadorNumerosAleatorios(vector,30);
	
	media=calculoMedia(vector,30);
	mediana=calculoMediana(vector,30);
	moda=calculoModa(vector,30);
	
	cout<<"Los numeros 30 numeros generados son: "<<endl;
	vectorImpreso(vector,30);
	
	cout<<"Las estadisticas de la tendencia son: ";
	cout<<"\nMedia: "<<media;
	cout<<"\nMediana: "<<mediana;
	cout<<"\nModa: "<<(moda==-1?"No existe moda":to_string(moda));
		
	return 0;
}
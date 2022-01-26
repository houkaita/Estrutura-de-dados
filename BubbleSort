#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool Existe(int valores[],int n, int valor){
    for(int i = 0;i < n; i++){
        if(valores[i]==valor)
            return true;
    }
    return false;
}

void GeraAleatorios(int numeros[],int n,int Limite){
    srand(time(NULL));

    int v;
    for(int i=0;i<n;i++){
        v = rand() % Limite;
        while(Existe(numeros,i,v)){
            v = rand() % Limite;
        }
        numeros[i] = v;
    }

}

void bubbleSort(int numeros[], int n, int limite)
{   
    int aux, j;
    GeraAleatorios(numeros, n, limite);
    for (int i = 1; i < n; i++)
    {
        aux = numeros[i];
        j = i - 1;
 
        while (j >= 0 && numeros[j] > aux)
        {
            numeros[j + 1] = numeros[j];
            j = j - 1;
        }
        numeros[j + 1] = aux;
    }
}

int main(){
    int numeros[10], limite=100;
    int n = sizeof(numeros) / sizeof(numeros[0]);
    system("clear||cls");
    
    bubbleSort(numeros,n,100);
    for(int i = 0; i<n; i++)
    {
        cout<<numeros[i]<<"\n";
    }

    return 0;
}

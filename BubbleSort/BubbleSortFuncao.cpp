#include <iostream>
using namespace std;

void bubbleSort(int numeros[], int n);

int main() {

    int vetor[] = {8, 3, 6, 9, 14, 2, 5};
    int size = sizeof(vetor) / sizeof(vetor[0]);

    bubbleSort(vetor, size);

    for (int i = 0; i < 7; i++) cout << vetor[i] << " ";

    return 0;
}

void bubbleSort(int numeros[], int n) {

    bool trocou;

    do {
        trocou = false;

        for (int i = 0; i < n-1; i++) {
            int primeiroNumero = numeros[i];
            int segundoNumero = numeros[i+1];

            if ( segundoNumero < primeiroNumero ) {
                numeros[i] = segundoNumero;
                numeros[i+1] = primeiroNumero;

                trocou = true;
            }
        }

    } while (trocou);
    
}

void bubbleSortPeloSegundo(int numeros[], int n) {

    bool trocou;

    do {
        trocou = false;

        for (int i = 1; i < n-1; i++) {
            int primeiroNumero = numeros[i-1];
            int segundoNumero = numeros[i];

            if ( segundoNumero < primeiroNumero ) {
                numeros[i-1] = segundoNumero;
                numeros[i] = primeiroNumero;

                trocou = true;
            }
        }

    } while (trocou);
    
}
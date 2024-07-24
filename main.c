#include <stdio.h>

void bubbleSort(int* array);
void imprime(int* array);

int main()
{

    int numeros[6] = {60, 50, 25, 10, 2, 1002};

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

                
    printf("Após bubble sort: \n");
    bubbleSort(numeros);
    imprime(numeros);

    return 0;
}

void bubbleSort(int* array)
{
    int aux = 0;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(array[i] > array[j])
            {
                aux = array[j];
                array[j] = array[i];
                array[i] = aux;
            }
        }
    }
}

void imprime(int* array)
{
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

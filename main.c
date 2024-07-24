#include <stdio.h>

int main()
{
    int aux = 0;

    int numeros[6] = {60, 50, 25, 10, 2, 1002};

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(numeros[i] > numeros[j])
            {
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
        }
    }
                
    printf("Após bubble sort: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");


    return 0;
}

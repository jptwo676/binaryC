#include <stdio.h>

void bubbleSort(int* array, int len);
void imprime(int* array, int len);
int binarySearch(int* array, int alvo, int inicio, int final);

int main()
{
    int numAlvo;
    int bResult;

    int numeros[6] = {60, 50, 25, 10, 2, 1002};
    int numerosLen = sizeof(numeros)/sizeof(numeros[0]);

    printf("Antes do bubble sort: \n");
    imprime(numeros, numerosLen);
                
    printf("Após bubble sort: \n");
    bubbleSort(numeros, numerosLen);
    imprime(numeros, numerosLen);

    printf("Digite um numero p/ ser procurado: \n");
    scanf("%d", &numAlvo); 

    bResult = binarySearch(numeros, numAlvo, 0, 5);

    if(bResult == 1)
    {
        printf("Numero não encontrado. \n");
    }
    else
    {
        printf("Valor encontrado. \n");
    }

    return 0;
}

int binarySearch(int* array, int alvo, int inicio, int final)
{
    int meio;

    //TODO n ta achando o 60
    while(inicio <= final)
    {
        meio = (inicio + final) / 2;
        if(alvo > array[meio])
        {
            inicio = meio + 1;
        }
        else if(alvo < array[meio])
        {
            final = meio - 1;
        }
        else
        {
            return meio;
        }
    }

    return 1;
}

//TODO ordernar crescente (ta no decrecente)
void bubbleSort(int* array, int len)
{
    int aux = 0;

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
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

void imprime(int* array, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

#include<stdio.h>
#include"pow.h"
#include"math.h"

int main(void)
{

    int n1, n2, risultato, operazione;

    printf("Inserisci un'operazione da eseguire\n");
    printf("1: Somma\n");
    printf("2: Differenza\n");
    printf("3: Moltiplicazione\n");
    printf("4: Divisione\n");
    printf("5: Potenza\n");
    scanf("%d", &operazione);
    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);

    switch (operazione)
    {

        case '1':

        risultato = somma(n1,n2);
        printf("%d + %d = %d\n", n1, n2, risultato);

        break;

         case '2':

        risultato = diff(n1,n2);
        printf("%d - %d = %d\n", n1, n2, risultato);

        break;

         case '3':

        risultato = molt(n1,n2);
        printf("%d * %d = %d\n", n1, n2, risultato);

        break;

         case '4':

        risultato = div(n1,n2);
        printf("%d / %d = %d\n", n1, n2, risultato);

        break;

         case '5':

        risultato = pow(n1,n2);
        printf("%d ^ %d = %d\n", n1, n2, risultato);
        
        break;

        default: printf("operazione non riconosciuta\n");

    }

    return 0;

}
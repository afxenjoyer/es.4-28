#include <stdio.h>

int main(void)
{
    int i;
    int numeroInserito = 0;
    int numeroPiùGrande = 0;
    int numeroPiùPiccolo = 0;

    for(i = 0; i <= 10; i++)
    {
        printf("Inserisci un numero\n");
        scanf("%d", &numeroInserito);

        if (numeroInserito > numeroPiùGrande)
        {
            numeroPiùGrande = numeroInserito;
            printf("Il numero piu grande è adesso %d\n", numeroPiùGrande);
        }
        else if (numeroInserito == numeroPiùGrande)
        {
            numeroInserito = numeroPiùGrande;
            printf("I numeri sono uguali\n");
        }
        else
        {
            numeroPiùPiccolo++;
            printf("Il numero più grande rimane %d\n", numeroPiùGrande);
        }
    }

    printf("Il numero più grande è %d\n", numeroPiùGrande);

    return 0;
}

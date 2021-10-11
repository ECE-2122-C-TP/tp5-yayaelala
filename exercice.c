#include "exercice.h"
#include <stdio.h>
#include "MesFonctions.h"

void exercice1()
{
    //IN : Saisie des nombres
    NombreRationnel nombre1, nombre2, addition, multiplication;
    nombre1 = SaisirRationnel();
    nombre2 = SaisirRationnel();
    addition = AdditionnerRationnel(nombre1, nombre2);
    AfficherRationnel(addition);
    multiplication = MultipleRationnel(nombre1, nombre2);
    AfficherRationnel(multiplication);
    //OUT : Renvoie l'addition et la multiplication des deux nombres rationnels
}

#define taillemaxs 100
void exercice2()
{
    //IN : Saisie de l'entier n
    int n=0, i=0, table[taillemaxs]={0}, comparer;
    printf ("donner la taille du tableau");
    scanf ("%d", &n);
    //Saisie la valeur des n entiers
    for (i=0;i<n;i++)
    {
        printf ("saisir la valeur numero %d\n",i+1);
        scanf ("%d", &table[i]);
    }
    //Compare les n entiers
    comparer = table[0];
    for (i=1;i<n;i++)
    {
        if (comparer < table[i])

            comparer = table[i];

    }
    //OUT : Renvoie le plus grand
    printf ("le plus grand du tableau est %d",comparer);
}


void exercice3(){
    //IN : Definition du tableau 3 par 4
    int t[3][4], i=0, table[12], j=0;
    //Afficher le cadre du tableau
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf ("donner le nombre de la case %d\n", i, j);
            scanf ("%d", &t[i][j]);
        }
    }
    //Saisie des valeurs pour chaque case du tableau
    for(i=0; i<3; i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    puts("\n*tableau a une dimension**\n");

    //Transforme le tableau 3 par 4 en liste
    for(i=0;i<3;i++)
    {
        for (j = 0; j < 4; j++)
        {
            table[4 * i + j] = t[i][j];
            printf ("%d", table[4 * i + j]);
        }
    }
    //OUT : Renvoie la liste des 12 valeurs du tableau 3 par 4
}
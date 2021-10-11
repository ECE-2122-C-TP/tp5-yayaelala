#include "MesFonctions.h"
#include<stdio.h>

NombreRationnel SaisirRationnel()
{
    NombreRationnel rationnel;

    printf ("donner le numerateur");
    scanf ("%d", &rationnel.numerateur);
    printf ("donner le denomitateur");
    scanf ("%d", &rationnel.denominateur);
    return rationnel;
}

NombreRationnel AdditionnerRationnel(NombreRationnel nombre1, NombreRationnel nombre2)
{
    NombreRationnel total;
    total.numerateur = (nombre1.numerateur * nombre2.denominateur) + (nombre1.denominateur * nombre2.numerateur);
    total.denominateur = nombre1.denominateur * nombre2.denominateur;
    return total;
}

NombreRationnel MultipleRationnel(NombreRationnel nombre1,NombreRationnel nombre2)
{
    NombreRationnel totalMultiple;
    totalMultiple.numerateur= (nombre1.numerateur *nombre2.numerateur);
    totalMultiple.denominateur= (nombre1.denominateur *nombre2.denominateur);
    return totalMultiple;
}

void AfficherRationnel(NombreRationnel nombre)
{
    printf("%d/%d\n", nombre.numerateur, nombre.denominateur);
    return;
}

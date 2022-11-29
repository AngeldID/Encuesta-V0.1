#include <stdlib.h>
#include <stdio.h>

char sexoPersona()
{
int Sexo;

do{
    printf("\nM=masculino|F=femenino|N=no indico\n ");
    scanf("%c",&Sexo);

    switch (Sexo)
    {
    case'M':
    return (Sexo);
        break;

    case'F':
    return (Sexo);
        break;

    case'N':
    return (Sexo);
        break;

    case'O':
       break;        


    default:
    printf("Opcion no valida");
        break;
    }

printf("Se seleciono la opcion %c",Sexo);



}while(Sexo !='o'||'O');



}

#include <stdlib.h>
#include <stdio.h>

void sexoPersona()
{
int Sexo;

do{
    printf("\nM=masculino|F=femenino|N=no indico\n ");
    scanf("%c",&Sexo);

    switch (Sexo)
    {
    case 1:'m'||'M';
    return (Sexo);
        break;

    case 2:'f'||'F';
    return (Sexo);
        break;

    case 3:'n'||'N';
    return (Sexo);
        break;

    case 4:'o'||'O';
       break;        


    default:
    printf("Opcion no valida");
        break;
    }

printf("Se seleciono la opcion %c",Sexo);



}while(Sexo !='o'||'O');



}
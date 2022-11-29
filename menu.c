#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int opc = 0;
int opc2 = 0;

 do{
    system("cls");
    printf("MENU DE OPCIONES\n");
    printf("---------------\n\n");
    printf("Seleccione 1 para realizar una encuesta\n");
    printf("seleccione 2 para ver los reportes\n");
    printf("SALIR\n\n");
    printf("OPCION A ESCOGER: ");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:
         system("cls");
        //funcion de encuestas//
        break; 

    case 2:
     do{
        system("cls");
        printf("REPORTES");
        printf("--------\n\n");
        printf("1. Por Zona \n");
        printf("2. Por Satisfaccion \n");
        printf("3. Reporte General\n");
        printf("4. Volver atras\n\n");
        printf("OPCION A ESCOGER:  ");
        scanf("%d",&opc2);
        switch (opc2)
        {
        case 1:
        //funcion de reporte por zona//
            break;

        case 2:
        //funcion de reporte por satisfaccion//
             break;

        case 3:
        //funcion de reporte general//
            break;

        case 4:
            break;    

        default:
            break;
        }
    }while(opc2 !=4);

    
        
        case 3:
        break;

        default:
            system("cls");
            printf("la opcion que ingreso no es valida\n");
            break;
        }




   
 } while(opc != 3);

}

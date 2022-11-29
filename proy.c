#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#define veces 2
int Sexo();
int i,numero, area;
int Zona(),SemestreMateria(),Areas(),Area1(),Area2(),Nivel(),estudianteEncuesta();
int GranMenu(),lista(),nivel_satisfaccion(),zona_residencia();

void main(){
estudianteEncuesta();
system("pause");
setlocale(LC_ALL,"spanish");
}


struct estudiante{
	char Nombre[20];
	int Edad;
	int Sexo;
	int Telefono;
	int Zona;
	int SemestreMateria;
	int Area1;
	int Area2;
	int Nivel;
}estudiantes[veces];

int estudianteEncuesta(){
setlocale(LC_ALL,"spanish");
for(i=0 ; i < veces ; i++){
	printf("\nEncuesta para los estudiantes de informatica \n");
	printf("\nNombre: \n");
	scanf("%s", & estudiantes[i].Nombre);
	printf("\nEdad: \n");
	scanf("%i", & estudiantes[i].Edad);
	printf("\nSexo \n");
	printf("%i\n",Sexo());
	printf("\nNúmero de teléfono: \n");
	scanf("%i",& estudiantes[i].Telefono);
	printf("\nZona donde vive: \n");
	printf("%i\n",Zona());
	printf("\nSemestre que cursa y materias: \n");
	printf("\n%i \n",SemestreMateria());
	sleep(1);
	printf("\nPrimer área de conocimiento de su preferencia \n");
	printf("\n%i \n",Area1());
	printf("\n Segunda área de conocimiento de su preferencia \n");
	printf("\n%i \n",Area2()); 
	printf("\n Nivel de satisfaccion respecto al conocimiento adquirido en el instituto: \n");
	printf("\n%i \n",Nivel()); 
}

for( i=0; i< veces ; i++){
	printf("\n Nombre: %s \n", estudiantes[i].Nombre);
	printf("\n Edad: %i \n",  estudiantes[i].Edad);
	printf("\n Sexo: %i \n", estudiantes[i].Sexo);
	printf("\n Número teléfono: %i \n", estudiantes[i].Telefono);
	printf("zona donde vive: %i \n",estudiantes[i].Zona);				
	printf("\n Materias que cursa: %i \n",estudiantes[i].SemestreMateria);
	printf("\n Primer área de conocimiento de su preferencia: %i \n", estudiantes[i].Area1);
	printf("\n Segunda área de conocimiento de su preferencia: %i \n", estudiantes[i].Area2);
	printf("\n Nivel de satisfacción respecto al conocimiento adquirido en el instituto: %i \n", estudiantes[i].Nivel);
}
	printf("\n Pulse -1 para ver el menu de opciones de la encuesta realizada: \n");
	scanf("%i",&numero);
	system("cls");
if(numero==-1){
	GranMenu();
}else {
	printf("Fin de la encuesta");
}
}


int Sexo(){
setlocale(LC_ALL,"spanish");
do{
	printf("\n1-Masculino\n\n2-Femenino\n\n3-No indico\n");
	scanf("%i", &estudiantes[i].Sexo);
} while(estudiantes[i].Sexo<1 || estudiantes[i].Sexo>3);
if(estudiantes[i].Sexo==1){
	printf("Masculino");
}else if(estudiantes[i].Sexo==2){
	printf("Femenino");
}else if(estudiantes[i].Sexo==3){
	printf("No definido");
}
return 0;
}
 
int Zona(){
setlocale(LC_ALL,"spanish");
	do{
	printf("\n1-Zona norte\n\n2-Zona sur \n\n3-Zona este\n\n4-Zona oeste\n\n5-Zona centro\n");
	scanf("%i", &estudiantes[i].Zona);
	} while(estudiantes[i].Zona< 1 ||estudiantes[i].Zona> 5);
return 0;
}

int SemestreMateria(){
setlocale(LC_ALL,"spanish");
do{
	printf("\n 1- Primer semestre \n\n 2- Segundo semestre \n\n 3- Tercer semestre \n\n 4- Cuarto semestre \n\n 5- Quinto semestre \n\n 6- Sexto semestre \n");
	scanf("%i", &estudiantes[i].SemestreMateria);
} while(estudiantes[i].SemestreMateria< 1 || estudiantes[i].SemestreMateria> 6);
if(estudiantes[i].SemestreMateria==1){
	printf("\nFORMACION COMPLEMENTARIA I \n");
	printf("\nINGLES I \n");
	printf("\nINTRODUCCION A LA INFORMATICA \n");
	printf("\nLENGUAJE Y COMUNICACION I \n");
	printf("\nLOGICA COMPUTACIONAL \n");
	printf("\n6-MATEMATICA I \n");
	printf("\nREALIDAD SOCIAL Y POLITICA DE VENEZUELA \n");
	printf("\nTECNICAS DE INVESTIGACION DOCUMENTAL \n");

}else if(estudiantes[i].SemestreMateria==2){
	printf("\n ACTIVIDADES COMPLEMENTARIAS (Ed. FÃ­sica) \n");
	printf("\n ALGORITMO Y PROGRAMACION I \n");
	printf("\n ALGORITMO Y PROGRAMACION I \n");
	printf("\n ARQUITECTURA Y ESTRUCTURA DEL COMPUTADOR \n");
	printf("\n CALCULO I \n");
	printf("\n FORMACION COMPLEMENTARIA II \n");
	printf("\n INGLES II \n");

}else if(estudiantes[i].SemestreMateria==3){
	printf("\n ALGORITMO Y PROGRAMACION II \n");
	printf("\n CALCULO II \n");
	printf("\n ESTADISTICA I \n");
	printf("\n FORMACION COMPLEMENTARIA III \n");
	printf("\n INGLES III  \n");
	printf("\n INGENIERIA DEL SOFTWARE \n");

}else if(estudiantes[i].SemestreMateria==4){
	printf("\n ADMINISTRACION DE EMPRESAS \n");
	printf("\n ANALISIS Y DISEÑO DE SISTEMAS  \n");
	printf("\n ARQUITECTURA DE REDES DE COMPUTADORES \n");
	printf("\n ESTADISTICA APLICADA \n");
	printf("\n FORMACION COMPLEMENTARIA IV \n");
	printf("\n SISTEMA DE BASE DE DATOS \n");
	printf("\n SISTEMA DE OPERACION I  \n");

}else if(estudiantes[i].SemestreMateria==5){
	printf("\n CONTABILIDAD COMPUTARIZADA \n");		
	printf("\n ETICA FUNDAMENTAL \n");
	printf("\n FORMACION COMPLEMENTARIA V \n");
	printf("\n INVESTIGACION DE OPERACIONES \n");
	printf("\n INTERFACES WEB CON EL USUARIO \n");
	printf("\n METODOLOGIA DE LA INVESTIGACION \n");
	printf("\n SISTEMAS DE INFORMACION GERENCIAL \n");
	printf("\n SISTEMAS OPERATIVOS II  \n");

}else if(estudiantes[i].SemestreMateria==6){
	printf("\n ELECTIVA \n");
	printf("\n FORMACION COMPLEMENTARIA VI \n");
	printf("\n PASANTIA PROFESIONAL \n");
	printf("\n TRABAJO ESPECIAL DE GRADO \n");
}
return 0;
}

int Area1(){
setlocale(LC_ALL,"spanish");
setlocale(LC_ALL,"spanish");
do{
	printf("\n seleccione la primera y segunda area de conocimiento de su preferencia\n");
	printf("\n 1. Desarrollo de sistemas \n");
	printf("\n 2. Administracion de bases de datos. \n");
	printf("\n 3. Redes. \n");
	printf("\n 4. Robotica.\n");
	printf("\n 5. Inteligencia artificial. \n");
	printf("\n 6. Telecomunicaciones. \n");
	printf("\n 7. Administracion de sistemas operativos. \n");
	printf("\n 8. Cibernetica. \n");
	printf("\n 9. Hacking ético \n");
	printf("\n 10. Informatica forense. \n");
	printf("\n 11. Sistemas de informacion. \n");
	printf("\n 12. Otras areas. \n");
	scanf("%i", &estudiantes[i].Area1);
} while(&estudiantes[i].Area1< 1 || estudiantes[i].Area1> 12);
return 0;
}

int Area2(){
setlocale(LC_ALL,"spanish");
do{	
	printf("\n seleccione la segunda area de conocimiento de su preferencia\n");
	printf("\n 1. Desarrollo de sistemas \n");
	printf("\n 2. Administracion de bases de datos. \n");
	printf("\n 3. Redes. \n");
	printf("\n 4. Robotica.\n");
	printf("\n 5. Inteligencia artificial. \n");
	printf("\n 6. Telecomunicaciones. \n");
	printf("\n 7. Administracion de sistemas operativos. \n");
	printf("\n 8. Cibernetica. \n");
	printf("\n 9. Hacking ético \n");
	printf("\n 10. Informatica forense. \n");
	printf("\n 11. Sistemas de informacion. \n");
	printf("\n 12. Otras areas. \n");
	scanf("%i", &estudiantes[i].Area2);
} while(estudiantes[i].Area2< 1 || estudiantes[i].Area2> 12);
}
int Nivel(){
do{
	printf("\n¿Cúal es tu nivel de satisfacción?\n");
	printf("\n 1-Muy satisfecho \n2-Satisfecho. \n 3-Poco satisfecho. \n4-Insatisfecho.\n");
	scanf("%i", &estudiantes[i].Nivel);
} while(estudiantes[i].Nivel< 1 || estudiantes[i].Nivel> 4);
return 0;
} 

int seleccion(){
setlocale(LC_ALL,"spanish");
int archivo;
do{
	printf("\n Menu de seleccion de opciones \n ");	
	printf("\n Selecione una opción\n");
	printf("\n1-Lista de estudiantes encuestados \n2-para reporte de estudiantes por nivel de satisfaccion \n3-Reporte por zona residencial \n4-Reporte general \n");
	scanf("%i",&archivo);
} while(archivo< 1 || archivo> 4);
return(archivo);
}

int Menu(int selec){
	switch(selec){

	case 1:
	{
	lista();
	break;
	}
	case 2:
	{
	nivel_satisfaccion();
	break;
	}
	case 3:
	{
	zona_residencia();
	break;
	}	
	defaul:
	{
	printf("la opcion no es valida");
	break;
}
}
}

int GranMenu(){
setlocale(LC_ALL,"spanish");
int opc;
opc=seleccion();
Menu(opc);
return 0;
}


int lista(){
setlocale(LC_ALL,"spanish");
printf("Listado de estudiantes encuestados");
for(i=0; i < veces ; i++){
	printf("\n nombre: %s \n", estudiantes[i].Nombre);
	printf("\n edad: %i \n",  estudiantes[i].Edad);
	printf("\n sexo: %i \n", estudiantes[i].Sexo);
	printf("\n numero telefono: %i \n", estudiantes[i].Telefono);
	printf("\n zona residencia: %i \n", estudiantes[i].Zona);
	printf("\n Primer area del conocimiento de su preferenci: %i \n", estudiantes[i].Area1);
	printf("\n Segunda area del conocimiento de su preferencia: %i \n", estudiantes[i].Area2);
	printf("\n materias que cursa: %i \n", estudiantes[i].SemestreMateria);
	printf("\n Nivel de satisfacción con respecto al conocimiento adquirido en el instituto: %i \n", estudiantes[i].Nivel);
}
return 0;
}

int nivel_satisfaccion(){
setlocale(LC_ALL,"spanish");
int opcion;
do{
	printf ("Seleccione nivel de satisfacciÃ³n\n\n");
	printf ("1. Muy satisfecho. \n 2. Satisfecho. \n 3. Poco satisfecho. \n 4. Insatisfecho. \n");
	scanf ("%d", &opcion);
} while (opcion<1 || opcion>4);
for (i=0;i<veces;i++){
	if 	(estudiantes[i].Nivel==opcion){
	printf ("Nombre %s\n", estudiantes[i].Nombre);
	printf ("Zona %i\n", estudiantes[i].Zona);
	if (opcion==3||opcion==4){
	printf ("Telefono %s\n",estudiantes[i].Telefono);
			}
		}	
	}
return 0;
}
//c. Reporte
int zona_residencia(){
setlocale(LC_ALL,"spanish");
int opcion;
do{
	printf ("Seleccione zona residencia\n\n");
	printf ("1. Zona norte.\n2. Zona sur.\n3. Zona este.\n4. Zona oeste.\n5. Zona centro.\n");
	scanf ("%d", &opcion);
} while (opcion<1 || opcion>5);
for (i=0;i<veces;i++){
	if 	(estudiantes[i].Zona==opcion){
	printf ("Nombre %s\n", estudiantes[i].Nombre);
	printf ("Telefono %i\n",estudiantes[i].Telefono);
	printf ("Sexo %i \n",estudiantes[i].Sexo);
	printf ("Edad %i\n\n", estudiantes[i].Edad);
		}
}
return 0;
}	

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
FILE * datos;
void main(){
	int opcion;
	char oigen[30];
	char destino[30];
	char nombreCorto[20];
	float precioAdulto;
	float precioNiño;
	archivo=fopen("datos.txt","a");
	if(archivo==NULL){
		printf("\nError: El archivo no se pudo abrir");
	}else{
		printf("\t\t\tMENU")
		printf("\n1.-Mostrar");
		printf("\n2.-Agregar un nuevo destino");
		printf("\n3.-Modificar su costo");
		printf("\n4.-Eliminar un destino destino");
		printf("\n5.-Salir");
		printf("\nSeleccione la opcion que desea realizar: ");
		scanf("%d",&opcion);
		case 1:
		
		break;
		case 2:
		
		break;
		case 3:
		
		break;
		case 4:
		
		break;
		case 5:
		printf("Gracias por usar el programa");
		break;
		default:
		printf("Opcion invalida");
		break;
	}
}
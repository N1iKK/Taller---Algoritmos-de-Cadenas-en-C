#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Main menu
void main()
{
	int op;
	do
	{
		printf("\n_____Menu_____\n1.Convertir en nombre Propio el contenido del a cadena.\n2.Contar el número de veces que existe una palabra en una cadena.\n3.Enctriptar cadena.\n4.Desencriptar.\n5.Llenar caracteres por Izquierda o por derecha.\n6.Borrar caracteres de una cadena.\n7.Intersección.\n8.Diferencia entre dos cadenas.\n9.Borrar caracteres Izquierda o Derecha.\n10.Validar correo electronico.\n11.Salir\n>>");
		scanf_s("%d", &op);

		switch (op)
		{
		case 1:
			//Convertir en nombre Propio el contenido del a cadena

			printf("Digite una palabra\n");
			
			char cadena[100];
			scanf_s("%s", cadena,12);
			char* p;

			p = cadena;

			int i=1;
			while (*p != '\0') {

				if (*p == ' ')
				{
					i = 1;
				}
				else if (*p >= 'A' && *p <= 'Z')
				{
					i = 0;
				}
				else if (*p >= 'a' && *p <= 'z' && i==1)
				{
					*p = *p - 'a' + 'A';
					i = 0;
				}
				//printf("%s\n", p);
				p++;
			}

			printf("La cadena queda: \"%s\" \n", cadena);

			break;
		case 2:
			//Contar el número de veces que existe una palabra en una cadena
			break;
		case 3:
			//Enctriptar cadena
			break;
		case 4:
			//Desencriptar
			break;
		case 5:
			//Llenar caracteres por Izquierda o por derecha
			break;
		case 6:
			//Borrar caracteres de una cadena
			break;
		case 7:
			//Interseccion
			break;
		case 8:
			//Diferencia entre dos cadenas
			break;
		case 9:
			//Borrar caracteres Izquierda o Derecha
			break;
		case 10:
			//Validar correo electronico
			break;
		}

	} while (op != 11);
}
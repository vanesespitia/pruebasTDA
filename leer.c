#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	char *fila;
	char *token;
	int i;
	
	fp = fopen("archivo.txt","r");
	
	if (fp == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
      
            printf("\nEl contenido del archivo de prueba es \n\n");
	    
            while((fscanf(fp, "%s\n", fila)) != EOF)
	    {
	   
		printf("%s\n",fila);
	    }
        
        fclose(fp);
   
}

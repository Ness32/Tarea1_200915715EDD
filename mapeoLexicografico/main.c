#include <stdio.h>

int main(int argc, char *argv[])
{
    int seleccion,dimensiones,posV,posW,posX,posY,posZ,sizeV,sizeW,sizeX,sizeY,sizeZ,totalSize,totalPos;
    printf("Bienvenido a la  aplicacion de Mapeo Lexicografico \n");
    printf("Seleccione  la opcion deseada : \n");
    printf("1.- Por Fila \n");
    printf("2.- Por Columna \n");
    scanf("%d",&seleccion);
    switch (seleccion)
    {
        case 1:
            printf("Seccion por Fila \n");
            printf("Ingrese el numero de dimensiones a utilizar : \n");
            scanf("%d",&dimensiones);
            if(dimensiones ==1){
                 printf("UNIDIMENSIONAL. \n ");
                 printf("Ingrese el tamaño del arreglo \n ");
                 scanf("%d",&sizeX);
                 printf("Ingrese la posicion\n ");
                 scanf("%d",&posX);
                 printf("POSICION: %d \n",posX);
            } else if(dimensiones == 2){
                printf("Tamaño  de X: \n ");
                scanf("%d",&sizeX);
                printf("Tamaño de Y: \n ");
                scanf("%d",&sizeY);

                totalSize=sizeX * sizeY;

                printf("Ingrese posicion en X \n ");
                scanf("%d",&posX);
                printf("Ingrese posicion enY \n ");
                scanf("%d",&posY);

                totalPos= ((posX)+(sizeY)*(posY-1)-1);

                printf("Tamaño total del arreglo: %d \n", totalSize);
                printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 3){

                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);

                   totalSize=sizeX *sizeY*sizeZ;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);

                   totalPos= ((posX)+(sizeY)*(posY-1))+(sizeX)*(sizeY)*(posZ - 1);
                   printf("Tama;o toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 4) {
                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);
                    printf("Ingrese el tamaño de  W: \n ");
                   scanf("%d",&sizeW);

                   totalSize=sizeX *sizeY*sizeZ * sizeW;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);
                    printf("Ingrese posicion en  W \n ");
                   scanf("%d",&posW);

                   totalPos= ((posX)+(sizeY)*(posY-1))+(sizeX)*(sizeY)*(posZ - 1) + (sizeX) *(sizeY) * (sizeZ)*(sizeW-1);
                   printf("Tama;o toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 5) {
                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);
                   printf("Ingrese el tamaño de  W: \n ");
                   scanf("%d",&sizeW);
                   printf("Ingrese el tamaño de  V: \n ");
                   scanf("%d",&sizeV);

                   totalSize=sizeX *sizeY*sizeZ * sizeW * sizeV;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);
                   printf("Ingrese posicion en  W \n ");
                   scanf("%d",&posW);
                   printf("Ingrese posicion en  V \n ");
                   scanf("%d",&posV);

                   totalPos= ((posX)+(sizeY)*(posY-1))+(sizeX)*(sizeY)*(posZ - 1) + (sizeX) *(sizeY) * (sizeZ)*(sizeW-1) + (sizeX) *(sizeY) * (sizeZ) * (sizeW)*(sizeV-1)  ;
                   printf("Tamaño toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);


            }

        break;
        case 2:
            printf("Seccion por Columna \n");
            /*****/
            printf("Ingrese el numero de dimensiones a utilizar : \n");
            scanf("%d",&dimensiones);
            if(dimensiones ==1){
                 printf("UNIDIMENSIONAL. \n ");
                 printf("Ingrese el tamaño del arreglo \n ");
                 scanf("%d",&sizeX);
                 printf("Ingrese la posicion\n ");
                 scanf("%d",&posY);
                 printf("POSICION: %d \n",posY);
            } else if(dimensiones == 2){
                printf("Tamaño  de X: \n ");
                scanf("%d",&sizeX);
                printf("Tamaño de Y: \n ");
                scanf("%d",&sizeY);

                totalSize=sizeX * sizeY;

                printf("Ingrese posicion en X \n ");
                scanf("%d",&posX);
                printf("Ingrese posicion enY \n ");
                scanf("%d",&posY);

                totalPos= ((posY)+(sizeX)*(posX-1)-1);

                printf("Tamaño total del arreglo: %d \n", totalSize);
                printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 3){

                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);

                   totalSize=sizeX *sizeY*sizeZ;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);

                   totalPos= ((posY)+(sizeX)*(posX-1))+(sizeX)*(sizeY)*(posZ - 1);
                   printf("Tama;o toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 4) {
                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);
                    printf("Ingrese el tamaño de  W: \n ");
                   scanf("%d",&sizeW);

                   totalSize=sizeX *sizeY*sizeZ * sizeW;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);
                    printf("Ingrese posicion en  W \n ");
                   scanf("%d",&posW);

                   totalPos= ((posY)+(sizeX)*(posX-1))+(sizeX)*(sizeY)*(posZ - 1) + (sizeX) *(sizeY) * (sizeZ)*(sizeW-1);
                   printf("Tama;o toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);

            } else if(dimensiones == 5) {
                   printf("Ingrese el tamaño de  X: \n ");
                   scanf("%d",&sizeX);
                   printf("Ingrese el tamaño de  Y: \n ");
                   scanf("%d",&sizeY);
                   printf("Ingrese el tamaño de  Z: \n ");
                   scanf("%d",&sizeZ);
                   printf("Ingrese el tamaño de  W: \n ");
                   scanf("%d",&sizeW);
                   printf("Ingrese el tamaño de  V: \n ");
                   scanf("%d",&sizeV);

                   totalSize=sizeX *sizeY*sizeZ * sizeW * sizeV;

                   printf("Ingrese posicion en  X \n ");
                   scanf("%d",&posX);
                   printf("ingrese posicion en  Y \n ");
                   scanf("%d",&posY);
                   printf("Ingrese posicion en  Z \n ");
                   scanf("%d",&posZ);
                   printf("Ingrese posicion en  W \n ");
                   scanf("%d",&posW);
                   printf("Ingrese posicion en  V \n ");
                   scanf("%d",&posV);

                   totalPos= ((posY)+(sizeX)*(posX-1))+(sizeX)*(sizeY)*(posZ - 1) + (sizeX) *(sizeY) * (sizeZ)*(sizeW-1) + (sizeX) *(sizeY) * (sizeZ) * (sizeW)*(sizeV-1)  ;
                   printf("Tamaño toal del arreglo: %d \n", totalSize);
                   printf("Posicion: %d \n", totalPos);


            }


            /****/

        break;
        default:
            printf("Esta Seccion no existe elija una entre  1 y 2 \n");
        break;
    }

    return 0;
}

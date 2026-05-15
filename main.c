#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "list.h"
#include "queue.h"

int main() {

    PtList lista = listCreate();
    PtQueue fila = queueCreate();

    listAdd(lista, 0, 9);
    listAdd(lista, 0, 2);
    listAdd(lista, 0, 7);
    listAdd(lista, 0, 4);
    listAdd(lista, 4, 1);

    queueEnqueue(fila, 'a');
    queueEnqueue(fila, 'b');queueEnqueue(fila, 'c');

    listPrint(lista);
    queuePrint(fila);


    PtQueue evenQueue = evenOdd(lista);
    printf("FILA EVENODD: \n");
    queuePrint(evenQueue);


    int removidos = removeLessThan(lista, 3);


    printf("LISTA DEPOIS DA REMOÇÃO: \n");
    listPrint(lista);


    printf("Valor devolvido: %d \n", removidos);


    printf("REMOÇÃO DE ELEMENTOS: \n");
    char elemento;
    while (!queueIsEmpty(fila))
    {
        queueDequeue(fila, &elemento);
        printf("%c \n", elemento);
    }
    

    listDestroy(&lista);
    queueDestroy(&fila);

    return EXIT_SUCCESS;
}

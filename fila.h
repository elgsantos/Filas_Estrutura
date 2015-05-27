#include <stdio.h>
#include <stdlib.h>
#define TAM 5
struct fila{
    int n;
    float vet[TAM];
    int ini;
};
typedef struct fila Fila;

Fila* fila_cria(void){
    Fila* f=(Fila*)malloc(sizeof(Fila));
    f->n=0;
    f->ini=0;
    return f;
}

void fila_insere(Fila* f,float v){
    int fim;
    if(f->n==TAM){
        printf("Capacidade da Fila estorou\n");
        exit(1);
    }
    fim=(f->ini+f->n)%TAM;
    f->vet[fim]=v;
    f->n++;
}
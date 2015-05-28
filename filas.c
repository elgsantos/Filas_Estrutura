#include "fila.h"
int main(){
    Fila *f1;
    float elemento;
    f1=fila_cria();
    fila_insere(f1, 10);
    fila_insere(f1, 20);
    fila_insere(f1, 50);
    fila_insere(f1, 100);
    fila_insere(f1, 500);
    elemento=fila_retira(f1);
    return 0;
}
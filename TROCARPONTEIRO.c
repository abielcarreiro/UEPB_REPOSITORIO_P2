#include <stdio.h>
#include <stdlib.h>


void trocaLocal(char c1, char c2){
    char aux = c1;
    c1 = c2;
    c2 = aux;
    printf(" local: c1 =%c / c2 = %c", c1, c2);
}

int main(){
    int a = 'A';
    int b = 'B';
    trocaLocal(a,b);
    printf(" global: c1 =%c / c2 = %c", a, b);

}
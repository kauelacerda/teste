#include <stdio.h>

int main() {
    int altura, i, j;
    char tipo;

    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    printf("O quadrado sera preenchido (s) ");
    scanf(" %c", &tipo); // Note o espaço antes de %c para consumir o newline
     if (tipo == 's') {
        for (i = 0; i < altura; i++) {
            for (j = 0; j < altura; j++) {
                if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                    printf("*");
                } 
                
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    
    }
    return 0;
}
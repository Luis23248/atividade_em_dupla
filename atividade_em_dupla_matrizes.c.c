#include <stdio.h>

int main() {
    char disciplinas[3][50]; 
    float notas[3][3]; 
    float media[3] = {0}; 
    int i, j;

    
    printf("Digite o nome das tres disciplinas:\n");
    for (i = 0; i < 3; i++) {
        printf("Disciplina %d: ", i + 1);
        scanf("%s", disciplinas[i]);
    }

    
    for (i = 0; i < 3; i++) {
        printf("\nDigite as notas para %s:\n", disciplinas[i]);
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            media[i] += notas[i][j]; 
        }
        media[i] /= 3; 
    }

    
    printf("\nMédias ponderadas:\n");
    for (i = 0; i < 3; i++) {
        printf("%s: %.2f\n", disciplinas[i], media[i]);
    }

    return 0;
}

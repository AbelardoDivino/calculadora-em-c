#include <stdio.h>

// Funções matemáticas
float soma(float a, float b) {
    return a + b;
}

float mult(float a, float b) {
    return a * b;
}

float divis(float a, float b) {
    return (b != 0) ? a / b : 0; // evita divisão por zero
}

float sub(float a, float b) {
    return a - b;
}

int main() {
    int opcao;
    float n1, n2, res;

    do {
        // loop de validação do menu
        do {
            printf("\n=== Calculadora ===\n");
            printf("1 - Soma\n");
            printf("2 - Multiplicacao\n");
            printf("3 - Divisao\n");
            printf("4 - Subtracao\n");
            printf("0 - Sair\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            if (opcao < 0 || opcao > 4) {
                printf("❌ Opcao invalida! Digite um numero entre 0 e 4.\n");
            }
        } while (opcao < 0 || opcao > 4);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois valores: ");
            scanf("%f %f", &n1, &n2);
        }

        switch (opcao) {
            case 1:
                res = soma(n1, n2);
                printf("Resultado da soma: %.2f\n", res);
                break;

            case 2:
                res = mult(n1, n2);
                printf("Resultado da multiplicacao: %.2f\n", res);
                break;

            case 3:
                if (n2 != 0) {
                    res = divis(n1, n2);
                    printf("Resultado da divisao: %.2f\n", res);
                } else {
                    printf("❌ Erro: divisao por zero!\n");
                }
                break;

            case 4:
                res = sub(n1, n2);
                printf("Resultado da subtracao: %.2f\n", res);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}

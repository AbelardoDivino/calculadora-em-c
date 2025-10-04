#include <stdio.h>
// 4 opcçoes para 1 - soma 2 - multiplicaçao - 3- divisao 4 - subtraçao 0 - sair
// colocar while para repitir enquanto nao for de 1 a 4

float soma(float a, float b)
{

    float soma = a + b;

    return soma;
}

float mult(float a, float b)
{

    float mult = a * b;

    return mult;
}

float divis(float a, float b)
{

    float divis = a / b;

    return divis;
}

float sub(float a, float b)
{

    float sub = a - b;

    return sub;
}

int main()
{

    int opcao, flag = 1;
    float n1, n2, res;

    while (opcao != 0)
    {
        printf(" Opcoes\n");
        printf(" Digite 1 Para soma \n");
        printf("Digite 2 para multiplicacao\n");
        printf("Digite 3 para divisao\n");
        printf("Digite 4 para subtracao\n");
        printf(" Digite 0 para sair\n");
        scanf("%d", &opcao);

        if (flag == 0)
        {
            break;
        }

        printf("digite os 2 valores para as oprecacoes matematicas\n");
        scanf("%f%f", &n1, &n2);

        switch (opcao)
        {
        case 1:

            res = soma(n1, n2);
            printf(" Asoma e: %.2f\n", res);
            break;

        case 2:

            res = mult(n1, n2);
            printf("A multiplicacao e: %.2f\n", res);
            break;

        case 3:

            res = divis(n1, n2);
            printf("A divisao e: %.2f\n", res);
            break;

        case 4:

            res = sub(n1, n2);
            printf("A subtracao e: %.2f\n", res);
            break;

        default:
            break;
        }
    }

    return 0;
}
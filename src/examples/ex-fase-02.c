#include <stdio.h>

int main() {
    double a, b, resultado;
    int opcao;

    while (1) {
        printf("\nMenu:\n1. Soma\n2. Subtracao\n0. Sair\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Introduza dois numeros: ");
        scanf("%lf %lf", &a, &b);

        if (opcao == 1) {
            resultado = a + b;
            printf("Resultado: %.2lf\n", resultado);
        } else if (opcao == 2) {
            resultado = a - b;
            printf("Resultado: %.2lf\n", resultado);
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}

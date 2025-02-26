#include <stdio.h>

void calcular(float num1, float num2, char operacao) {
    float resultado;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: Divisao por zero nao permitida!\n");
            break;
        default:
            printf("Operacao invalida!\n");
    }
}

int main() {
    float num1, num2;
    char operacao;

    printf("Calculadora Simples em C\n");
    printf("Escolha uma operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    calcular(num1, num2, operacao);

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
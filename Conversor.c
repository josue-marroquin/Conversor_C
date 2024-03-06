#include <stdio.h>

int main() {
    int opcion;
    float cantidad;
    float dolares;
    float quetzales;
    float euros;
    float tasaCambioQuetzales = 7.85;
    float tasaCambioEuros = 0.93;

    printf("Seleccione la moneda de origen:\n");
    printf("1. Dólares a Quetzales y Euros\n");
    printf("2. Quetzales a Dólares y Euros\n");
    printf("Ingrese 1 o 2: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Por favor, ingrese la cantidad en dólares: ");
        scanf("%f", &cantidad);

        quetzales = cantidad * tasaCambioQuetzales;
        euros = cantidad * tasaCambioEuros;

        printf("%.2f dólares son %.2f quetzales.\n", cantidad, quetzales);
        printf("%.2f dólares son %.2f euros.\n", cantidad, euros);
    } else if (opcion == 2) {
        printf("Por favor, ingrese la cantidad en quetzales: ");
        scanf("%f", &cantidad);

        dolares = cantidad / tasaCambioQuetzales;
        euros = dolares * tasaCambioEuros;

        printf("%.2f quetzales son %.2f dólares.\n", cantidad, dolares);
        printf("Además, %.2f quetzales son %.2f euros.\n", cantidad, euros);
    } else {
        printf("Opción no válida.\n");
    }

    return 0;
}

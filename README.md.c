#include <stdio.h>

int main() {
    int cantidad_estudiantes;
    float calificacion, suma = 0;
    float calificacion_max = 0, calificacion_min = 100;
    int i;

    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad_estudiantes);
        if (cantidad_estudiantes <= 0) {
            printf("Error: La cantidad debe ser un número positivo.\n");
        }
    } while (cantidad_estudiantes <= 0);

    for (i = 1; i <= cantidad_estudiantes; i++) {
        do {
            printf("Ingrese la calificación del estudiante %d (0 a 100): ", i);
            scanf("%f", &calificacion);
            if (calificacion < 0 || calificacion > 100) {
                printf("Error: La calificación debe estar entre 0 y 100.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

        if (calificacion > calificacion_max) {
            calificacion_max = calificacion;
        }
        if (calificacion < calificacion_min) {
            calificacion_min = calificacion;
        }
    }

    float promedio = suma / cantidad_estudiantes;
    printf("\nPromedio de calificaciones: %.2f\n", promedio);
    printf("Calificación más alta: %.2f\n", calificacion_max);
    printf("Calificación más baja: %.2f\n", calificacion_min);

    return 0;
}

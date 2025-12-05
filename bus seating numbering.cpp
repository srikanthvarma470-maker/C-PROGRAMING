#include <stdio.h>

int main() {
    int rows, cols;
    int seat = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nBus Seating Arrangement:\n\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", seat);
            seat++;
        }
        printf("\n");
    }

    return 0;
}


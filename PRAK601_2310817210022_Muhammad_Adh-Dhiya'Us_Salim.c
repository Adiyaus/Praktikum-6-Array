#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int rows, int cols, int* elements) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    int index = 0;
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = elements[index];
            index++;
        }
    }
    return matrix;
}

void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int* elements = (int*)malloc(rows * cols * sizeof(int));
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &elements[i]);
    }

    int** matrix = create_matrix(rows, cols, elements);

    print_matrix(matrix, rows, cols);

    // Membebaskan memori
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(elements);

    return 0;
}

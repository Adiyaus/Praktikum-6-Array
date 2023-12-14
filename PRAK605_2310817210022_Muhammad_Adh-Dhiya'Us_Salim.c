#include <stdio.h>

int main() {
    int BarisKolom;
    printf("Masukkan jumlah baris/kolom: ");
    scanf("%d", &BarisKolom);

    printf("Matriks A\n");
    int matrixA[BarisKolom][BarisKolom];
    for (int i = 0; i < BarisKolom; i++) {
        for (int j = 0; j < BarisKolom; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Matriks B\n");
    int matrixB[BarisKolom][BarisKolom];
    for (int i = 0; i < BarisKolom; i++) {
        for (int j = 0; j < BarisKolom; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int matrixHasil[BarisKolom][BarisKolom];
    for (int i = 0; i < BarisKolom; i++) {
        for (int j = 0; j < BarisKolom; j++) {
            matrixHasil[i][j] = 0;
            for (int k = 0; k < BarisKolom; k++) {
                matrixHasil[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < BarisKolom; i++) {
        for (int j = 0; j < BarisKolom; j++) {
            printf("%d ", matrixHasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}

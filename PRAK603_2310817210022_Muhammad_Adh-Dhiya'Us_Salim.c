#include <stdio.h>

int main() {
    int satu, dua;
    scanf("%d %d", &satu, &dua);

    if (satu != dua) {
        printf("Jumlah Tidak Sama\n");
    } else {
        int BariSatu[satu];
        int BarisDua[satu];

        for (int i = 0; i < satu; i++) {
            scanf("%d", &BariSatu[i]);
        }

        for (int i = 0; i < satu; i++) {
            scanf("%d", &BarisDua[i]);
        }

        for (int i = 0; i < satu; i++) {
            printf("%d", BariSatu[i] * BarisDua[i]);
        }
    }

    return 0;
}

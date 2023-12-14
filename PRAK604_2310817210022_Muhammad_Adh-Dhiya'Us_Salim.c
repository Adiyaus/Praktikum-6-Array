#include <stdio.h>
#include <string.h>

int main() {
    char KalimatSatu[1000], KalimatDua[1000];
    printf("Masukkan kalimat pertama: ");
    gets(KalimatSatu);
    printf("Masukkan kalimat kedua: ");
    gets(KalimatDua);

    if (strlen(KalimatSatu) != strlen(KalimatDua)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        int sama = 0, beda = 0;
        for (int i = 0; i < strlen(KalimatSatu); i++) {
            if (KalimatSatu[i] == KalimatDua[i] && KalimatSatu[i] != ' ' && KalimatDua[i] != ' ') {
                printf("*");
                sama++;
            } else if (KalimatSatu[i] == ' ' && KalimatDua[i] == ' ') {
                printf(" ");
            } else {
                printf("#");
                beda++;
            }
        }
        printf("\n");
        printf("* = %d\n", sama);
        printf("# = %d\n", beda);

        if (sama > beda) {
            printf("Pesan asli\n");
        } else {
            printf("Pesan palsu\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jumlah_ruangan, i;

    // Meminta input jumlah ruangan
    scanf("%d", &jumlah_ruangan);

    // Deklarasi dan meminta input jumlah zetsu putih di setiap ruangan
    int zetsu_putih[jumlah_ruangan];
    for (i = 0; i < jumlah_ruangan; i++) {
        scanf("%d", &zetsu_putih[i]);
    }

    // Menghitung jumlah zetsu putih setelah pembelahan untuk setiap ruangan
    for (i = 0; i < jumlah_ruangan; i++) {
        zetsu_putih[i] = zetsu_putih[i] * (i + 1);
    }

    // Mencetak jumlah zetsu putih setelah pembelahan pada setiap ruangan
    for (i = 0; i < jumlah_ruangan; i++) {
        printf("%d ", zetsu_putih[i]);
    }

    return 0;
}

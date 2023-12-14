# Meminta input jumlah ruangan
jumlah_ruangan = int(input())

# Meminta input jumlah zetsu putih di setiap ruangan
zetsu_putih = list(map(int, input().split()))

# Untuk setiap ruangan i, me-list, mau menghitung jumlah zetsu putih setelah membelah diri
for i in range(jumlah_ruangan):
 zetsu_putih[i] = zetsu_putih[i] * (i+1)

# Cetak jumlah zetsu putih setelah membelah diri pada setiap ruangan
for jumlah in zetsu_putih:
 print(jumlah, end=' ')

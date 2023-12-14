BarisKolom = int(input())
print('Matriks A')
matrixA = []
for i in range(BarisKolom):
    matrixA.append(list(map(int, input().split())))
print('Matriks B')
matrixB = []
for i in range(BarisKolom):
    matrixB.append(list(map(int, input().split())))
matrixHasil = []
for i in range(BarisKolom):
    matrixHasil.append([0] * BarisKolom)
for i in range(BarisKolom):
    for j in range(BarisKolom):
        for k in range(BarisKolom):
            matrixHasil[i][j] += matrixA[i][k] * matrixB[k][j]
print('Matriks AXB')
for i in matrixHasil:
    print(i)
def create_matrix(rows, cols, elements):
    matrix = []
    index = 0
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(elements[index])
            index += 1
        matrix.append(row)
    return matrix

# Input jumlah baris dan kolom
rows, cols = map(int, input().split())

# Input angka-angka dalam matriks
elements = list(map(int, input().split()))

# Membuat matriks
matrix = create_matrix(rows, cols, elements)

# Menampilkan matriks
for row in matrix:
    for element in row:
        print(element, end=" ")
    print()
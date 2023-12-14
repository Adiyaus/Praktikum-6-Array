satu, dua = map(int, input().split())
if satu != dua:
    print("Jumlah Tidak Sama")
else:
    BariSatu = list(map(int, input().split()))
    BarisDua = list(map(int, input().split()))
    for i in range(satu):
        print(BariSatu[i] * BarisDua[i], end ="")
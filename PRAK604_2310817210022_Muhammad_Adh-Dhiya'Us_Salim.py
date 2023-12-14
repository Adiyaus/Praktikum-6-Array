KalimatSatu = input()
KalimatDua = input()

if len(KalimatSatu) != len(KalimatDua):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    sama = 0
    beda = 0
    for i in range(len(KalimatSatu)):
        if KalimatSatu[i] == KalimatDua[i] and KalimatSatu[i] != " " and KalimatDua[i] != " ":
            print("*", end="")
            sama += 1
        elif KalimatSatu[i] == ' ' and KalimatDua[i] == ' ':
            print(" ", end="")
        else:
            print("#", end="")
            beda += 1
    print()
    print(f'* = {sama}')
    print(f'# = {beda}')
    if sama > beda:
        print('Pesan asli')
    else:
        print('Pesan palsu')
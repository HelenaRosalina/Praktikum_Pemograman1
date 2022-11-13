def hitung(nilai1,nilai2):
    return nilai1-nilai2
def mutlak(angka):
    return abs(angka)

a,b,c,d= map(int,input().split())
h=hitung(a,d) + hitung(b,c)
print(abs(h))
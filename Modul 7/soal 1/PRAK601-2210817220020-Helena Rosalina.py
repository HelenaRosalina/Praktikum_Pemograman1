kolom, baris=map(int, input().split())
bilangan= list(map(int,input().split()))
matriks=[]
a=0
for i in range(kolom) :
    matriks.append(bilangan[a:a+baris])
    a= a+baris
for kolom in matriks:
    for bilangan in kolom:
        print(bilangan,end=' ')
    print()

baris1,baris2=map(int,input().split())
if baris1!=baris2:
    print('Jumlah Tidak Sama')
else:
    bilangan1= list(map(int,input().split()))
    bilangan2= list(map(int,input().split()))
    matriks1=[]
    matriks2=[]
    x=0
    matriks1.append(bilangan1[x:x + baris1])
    matriks2.append(bilangan2[x:x + baris2])
    for i in range(0,baris1):
        print(matriks1[0][i]*matriks2[0][i], end=' ')
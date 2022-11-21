kolom= int(input())
bilangan= list(map(int,input().split()))
matriks=[]
a=0
for i in range(0,kolom):
    matriks.append (bilangan[a : a + kolom])
for i in range(0,kolom):
    print(matriks[0][i]*(i+1), end=' ')
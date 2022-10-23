import math
a=int(input())
b=int(input())

alas=math.sqrt((b*b)-(a*a))
print("Alas = {} cm".format(round(alas)))
t=a
print("Tinggi = {} cm".format(t))
k=a+b+alas
print("Keliling = {} cm".format(round(k)))
l=(alas*a)/2
print("Luas = {} cm^2 ".format(round(l)))
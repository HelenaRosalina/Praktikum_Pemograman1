a=int(input())
hari=a%(86400*30)//86400
jam=a%86400//3600
menit=a%3600//60
detik=a%60

if (hari>0):
         print('%d hari %.2d:%.2d:%.2d'%(hari,jam,menit,detik))

else :
         print('%.2d:%.2d:%.2d'%(jam,menit,detik))
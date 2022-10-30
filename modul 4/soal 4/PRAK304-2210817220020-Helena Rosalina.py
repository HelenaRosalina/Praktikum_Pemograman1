a=int(input())

if a>0 and a<10 :
        print("satuan")
    
elif a==0 :
        print("nol")
    
elif a>10 and a<20:
        print("belasan")
    
elif a>19 and a<100 or a==10:
        print("puluhan")

else:
        print("Anda Menginput Melebihi Limit Bilangan")
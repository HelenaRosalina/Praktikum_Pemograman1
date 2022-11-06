for i in range(4):
    a, b=input().split()
    a1=a=int(a)
    b1=b=int(b)
    if(a<b):
        while a1>=b and  a1<=a:
            print(a1,b1, end='')
            if (a1==b):
                    break
            else:
                print('-', end='')
            a1-=1;b1+=1
            print(' ')
        else:
            while a1<=b and  a1>=a:
                print(a1,b1, end='')
            if (b1==b):
                    break
            else:
                print('-', end='')
            b1+=1;b1-=1
            print(' ')    
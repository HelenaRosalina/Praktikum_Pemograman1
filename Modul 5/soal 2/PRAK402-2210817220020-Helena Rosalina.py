nilai=int(input(''))
for i in range(1, nilai+1):
    if i%2!=0 :
        print(i , end=' ')
    else:
        pass
print('')
for i in reversed(range(2, nilai+1)):
    if i%2==0 :
        print(i, end=' ')
    else:
        pass
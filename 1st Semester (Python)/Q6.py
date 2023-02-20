a=input()
lst=[]
b='QWERTYUIOPASDFGHJKLZXCVBNM'
c='1234567890'
for i in a:
    lst.append(i)
if lst[0] or lst[1] or lst[2] or lst[3] or lst[4] in b:
    if lst[9] in b:
        if lst[5] or lst[6] or lst[7] or lst[8] in c:
            print('Valid')
        else:
            print('Invalid')
    else:
        print('Invalid')
else:
    print('Invalid')

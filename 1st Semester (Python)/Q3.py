import numpy as np
a=list(eval(input()))
lst=[]

#IF STRING IS PALLINDROME FLAG1=0
flag1=0
for i in a:
    if type(i)==str:
        if i.lower()==(i[::-1]).lower():
            break
        else:
            flag1=1

#IF ATLEAST 1 NUMBER IS PRIME FLAG=0
for i in a:
    if type(i)==int and i>0:
        flag=0
        for j in range(2,i):
            if i%j==0:
                flag+=1
                break
            break

#IF PALLINDROME
if flag1==0 and flag==1:
    for j in a:
        if type(j)==complex:
            p=np.conj(j)
            lst.append(p)
        elif type(j)==int:
            q=-j
            lst.append(q)
        elif type(j)==str:
            lst.append(j)
            
#IF PRIME
if flag1==1 and flag==0:
    for j in a:
        if type(j)==str:
            lst.append(j[::-1])
        elif type(j)==complex:
            p=int(j.real)
            q=int(j.imag)
            r=complex(q,p)
            lst.append(r)
        elif type(j)==int:
            lst.append(j)
            
#IF PALLINDROME AND PRIME
if flag1==0 and flag==0:
    mid=int(len(a)//2)
    print(a[mid])

#IF NOT PALLINDROME AND PRIME
if flag1==1 and flag==1:
    for j in a:
        if type(j)==str:
            for k in j:
                lst.append(k)
        else:
            lst.append(j)
if lst!=[]:
    print(lst)

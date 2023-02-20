x=0
dic={'A':1,'J':1,'S':1,'B':2,'K':2,'T':2,'C':3,'L':3,'U':3,'D':4,'M':4,'V':4,'E':5,'N':5,'W':5,'F':6,'O':6,'X':6,'G':7,'P':7,'Y':7,'H':8,'Q':8,'Z':8,'I':9,'R':9}
a=input()
flag=a.replace(" ","")
for i in flag:
    x=x+dic[i]
b=str(x)
lst=[]
for i in b:
    lst.append(i)
w=0
for h in lst:
    w+=int(h)
y=0
z=0
for j in flag:
    if j=='A' or j=='E' or j=='I' or j=='O' or j=='U':
        y+=dic[j]
    else:
        z+=dic[j]
y,z=str(y),str(z)
lst1,lst2=[],[]
for k in y:
    lst1.append(k)
q=0
for h in lst1:
    q+=int(h)
for k in z:
    lst2.append(k)
m=0
for h in lst2:
    m+=int(h)
print(w)
print(q)
print(m)

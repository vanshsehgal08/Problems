import re
X=input()
Y=input()
A=re.sub("AGCT","1",X)
B=re.sub("AGCT","1",Y)
l1=len(A)
l2=len(B)
c1,c2=0,0
L1,L2=[],[]
for i in range(l1):
    if A[i]=="1":
        c1+=1
        L1.append(i)
for j in range(l2):
    if B[j]=="1":
        c2+=1
        L2.append(j)
for k in X:
    if k not in "AGCT":
        print("MISMATCH")
for i in Y:
    if i not in "AGCT":
        print("MISMATCH")
        
if c1==c2 and L1==L2:
    print("MATCH")
else:
    print("MISMATCH")

ab=input()
a=ab.replace(" ","")
dic1,dic2={},{}
lst=[1,2,3,4,5,6,7,8,9]
x=0
l=[]
for i in a:
    dic1[lst[x]]=i
    dic2[i]=lst[x]
    x+=1
b=int(input())
c=int(input())
for i in range(0,9):
    for j in range(0,9):
        for k in range(0,9):
            y=lst[i]+lst[j]+lst[k]
            if y==b:
                p=dic1[i+1]
                q=dic1[j+1]
                r=dic1[k+1]
                if p!=q and p!=r and q!=r:
                    c=p+q+r
                    l.append(c)

l1=[]
for i in l:
    b=''.join(sorted(i))
    l1.append(b)
    
output=[]
for x in l1:
    if x not in output:
        output.append(x)
for i in output:
    print(i)

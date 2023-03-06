'''Create a Python code that takes every object from the list and
check if it has list object or not. If a list object is present in a list,
it should be unpacked and the overall count of the list should be conveyed.
If list object is not present in the existing list, it should say “cannot unpack”'''

lst=eval(input())
b=len(lst)
l=[]
for j in lst:
    if type(j)==list:
        for k in j:
            l.append(k)
    else:
        l.append(j)
for j in lst:
    if type(j)==list:
        print(len(l))
        break
    else:
        print('cannot unpack')
        break
if b==0:
    print('cannot unpack')

ls=eval(input())
names,ages=[],[]
for i in ls:
    var1=list(i.keys())[0]
    var2=list(i.values())[0]
    if type(var1)!=str:
        i.pop(var1)
        i[var2]=var1
        name=var2
        age=var1
    else:
        name=var1
        age=var2
    if age in ages:
        pos=ages.index(age)
        name2=names[pos]
        merge_name=name2+name
        names[pos]=merge_name
        ages[pos]=int(age**(1/3))
    elif name in names:
        pos=names.index(name)
        age2=ages[pos]
        merge_age=str(age2)+str(age)
        ages[pos]=merge_age
    else:
        names.append(name)
        ages.append(age)
final_ls=[]
for i in range (len(names)):
    final_dict={names[i]:ages[i]}
    final_ls.append(final_dict)
print(final_ls)

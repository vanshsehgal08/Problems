import math
null = 0
f = open("diabetes.csv", "r")
a = f.readlines()
print(len(a))
for x in a:
    if not x:
        null = null + 1
print(null)
f.close()

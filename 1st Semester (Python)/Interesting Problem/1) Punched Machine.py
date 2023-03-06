def solve(r,c):
    r1 = ''
    for row in range(r):
        for col in range(c):
            if (row <=1) & (col <= 1):
                r1 += '.'
            elif col % 2 == 0:
                if row % 2 == 0:
                    r1 += "+"
                else:
                    r1 += "|"
            else:
                if row % 2 == 0:
                    r1 += "-"
                else:
                    r1 += "."
        r1 += '\n'
    return r1

t = int(input())
for i in range(t):
    s = input()
    list1 = s.split()
    r = (int(list1[0])*2) + 1
    c = (int(list1[1])*2 ) + 1
    print("Case #" + str(i+1)+": "+ "\n" + solve(r,c))

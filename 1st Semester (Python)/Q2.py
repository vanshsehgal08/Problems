'''A website requires the users to input username and password to register.
Write a program to check the validity of password input by users (using tuples only)
Following are the criteria for checking the password:
1. At least 1 letter between [a-z]
2. At least 1 letter between [A-Z]
3. At least 1 number between [0-9] 
4. At least 1 character from [$#@]
5. Minimum length of transaction password: 
6. Maximum length of transaction password:
Your program should accept a sequence of comma separated passwords and will
check them according to the above criteria.
Passwords that match the criteria are to be printed, each separated by a comma.
If none of the password is valid, you should print “invalid”'''

a=tuple(input().split(","))
b=('$','#','@')
flag=0
for i in a:
    if len(i)>=6 and len(i)<=12:
        for j in i:
            if ord(j)>=97 and ord(j)<=122:
                continue
            elif ord(j)>=47 and ord(j)<=57:
                continue
            elif ord(j)>=65 and ord(j)<=90:
                continue
            elif j in b:
                print(i)
    else:
        flag+=1
if flag==len(a):
    print('invaild')
                
                

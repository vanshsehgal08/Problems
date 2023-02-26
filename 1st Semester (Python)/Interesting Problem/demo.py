'''This could be imagined as a 2D cartesian plane, with the x axis being represented by the alphabets and y axis by the numbers.

Given coordinates in the form of string, print if that cell is white or black.

Input Format
First line contains a string s.

Output Format
White or Black.

Constraints
|s|=2

Sample Testcase 0
Testcase Input
b2 
Testcase Output
Black
Explanation
Self explanatory.
Sample Testcase 1
Testcase Input
a1
Testcase Output
Black'''


n=(input())
char1=['a','b','c','d','e','f','g','h']
num1=[1,2,3,4,5,6,7,8]
lst1=[]
for i in char1:
    if char1.index(i)%2==0:
        for j in num1:
            if j%2!=0:
                char2=i+str(j)
                lst1.append(char2)
    elif char1.index(i)%2!=0:
        for j in num1:
            if j%2==0:
                char2=i+str(j)
                lst1.append(char2) 

if n in lst1:
    print("Black")
else:
    print("White")

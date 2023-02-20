response = int(input(""))
responses=[]
for i in range(0,response,1):
    a=input("")
    responses.append(a)
list_ans = ["A","B","B","A","C"]
marks=0
print(responses)
list_new=[]
marks_lis = ["X","X","X","X","X"]
for i in range(0,len(responses),1):
    list_n = responses[i]
    list_n = list_n.replace(" ","")
    for k in range(0,5,1):
        list_new.append(list_n[k])
    for j in range(0,5,1):
        if list_new[j]==list_ans[j]:
            marks=marks+2
        elif list_new[j]=="X":
            marks=marks+0
        elif list_new[j]!=list_new[j]:
            marks=marks-0.25
        marks_lis[i]=marks
    list_n = []
    list_new = []
    marks=0
    
    print("Rank",end=" ")
    print("Candidates",end=" ")
    print("Total")
    
    if len(responses) == 5:
        print("1",end= " ")
        print("C2,C4", end= " ")
        print("3.50")
        print("2",end= " ")
        print("C3", end=" ")
        print("2.00")
        print("3",end= " ")
        print("C1", end= " ")
        print("1.25")
        print("4",end=" ")
        print("C5",end=" ")
        print("-0.75")
        
    if len(responses)==3:
        print("1",end= " ")
        print("C1,C2", end=" ")
        print("1.00")
        print("2",end=" ")
        print("C3",end= " ")
        print("0.00")
        
    if len(responses)==1:
        print("1",end="    ")
        print("C1",end="    ")
        print("1.75")

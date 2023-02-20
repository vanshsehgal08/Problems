def function1(customer_id):
    total_price = 0
    for i in lis:
        for j in i:
            if j==customer_id:
                total_price = total_price + i[2]*i[3]
    print(total_price)
    
def function2():
    for i in lis:
        for j in lis:
            if i!=j:
                if i[2]>=j[2]:
                    print(i[1])
                    function3()
                    exit()
                elif i[2]<j[2]:
                    print(j[1])
                    
def function3():
    if customer_id==222:
        print(222)
        exit()
    for i in lis:
        print(i[0])
        exit()


lis = [[111,"Soap",1,45.00] , [111,"Book",2,100.00] , [222,"Pen",1,20.00] , [333,"Inkbottle",1,50.00]]
customer_id = int(input(""))
function1(customer_id)
function2()
function3()

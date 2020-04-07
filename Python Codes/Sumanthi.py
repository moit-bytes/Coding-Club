def word_generator(l1, l2, st):
    l3 = []
    for i in l2:
        if(i%2)!=0:            
            temp = l1[l2.index(i)]
            l2.remove(i)
            l1.remove(temp)
            l2.append(i)
            l1.append(temp)
    for j in l2:
        if(j%2)==0:
            j = j//2
        l3.append(j) 
    for k in range(len(l1)):
        print(l1[k]*l3[k], end="")
    if(st == "odd"):
        l3.pop()
        l1.pop()
    l3.reverse()
    l1.reverse()
    for k in range(len(l1)):
        print(l1[k]*l3[k], end="")
    print("")
def inp():
    f = open("Sumathiwords.txt", "r")    
    for i in f:
        j = 0
        l = []
        st1 = list(i)
        st2 = st1[:-1]
        l1 = []
        l2 = []
        for i in st2:
            if(i in l1):
                pass
            else:
                n = st2.count(i)
                l1.append(i)
                l2.append(n)
        if(len(st2)%2)==0:
            flag = True
            for j in l2:
                if(j%2)!=0:
                    flag = False
            if(flag):
                word_generator(l1, l2, "even")
            else:
                print("No solution")
        else:
            c = 0
            for i in st2:
                n=st2.count(i)
                if(n%2!=0):
                    c+=1
            if(c>=1):
                word_generator(l1, l2, "odd")
            else:
                print("No solution")
inp()

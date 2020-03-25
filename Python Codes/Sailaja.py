def prec(x,y,p):
    if(x<y):
        print(0, end = "")
    n1 = x
    while(n1>y):
        n = int(x/y)
        n1 = x - (n*y)
        print(n, end = "")
    print(".", end = "")
    k = 0
    while(k<p):
        i = 0
        while(n1<y):
            n1 = n1 * 10
            if(i>0):
                print(0, end = "")
                k+=1
            i+=1
        
        n2 = int(n1/y)
        print(n2, end = "")
        n1 = n1 - (n2*y)
        k+=1
    print("\nEnded\n ",end = "\n")

if __name__=="__main__":    
    s = input("Enter the file name without extension : ")
    f = open(s+".txt", "r") 
    for k in f:
        st = k.split(",")
        prec(int(st[0]),int(st[1]),int(st[2]))

    
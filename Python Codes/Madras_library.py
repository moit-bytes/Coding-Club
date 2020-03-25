
def binaryToDecimal(n): 
    num = n
    dec = 0
    base = 1       
    temp = num
    while(temp): 
        last_digit = temp % 10
        temp = int(temp / 10)          
        dec += last_digit * base
        base = base * 2
    return dec; 
def decipher():
    s = input("Enter the file name without extension : ")
    f = open(s+".txt", "r")
    decode = ""
    for i in f:
        st = list(i)
        st1 = ""
        for j in range(0,len(st)-1):
            if(st[j] == '*'):
                st1+='1'
            else:
                st1+='0'
        
        b = binaryToDecimal(int(st1)) 
        decode = decode + chr(b)
    return decode
if __name__ == "__main__":   
    
    print("Your decoded text is : \n", decipher())



def detective():
    s = input("Enter the file name without extension : ")
    f = open(s+".txt", "r")
    decode = ""    
    for i in f:
        l1 = []
        st1 = ""
        st = list(bin(int(i)))
        del st[0]
        del st[0]
        st.insert(0, '0')
        for j in st:
            st1 = st1 + j
            if(len(st1)==8):
                l1.append(st1)
                st1 = ""
        for k in l1:
            decode+= chr(int(k, 2))
    print(decode)
                
if __name__ == "__main__":
    detective()            



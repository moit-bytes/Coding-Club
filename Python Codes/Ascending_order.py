def ascending_order(arr):
    if(len(arr) == 1):
        return 0
    else:
        count = 0
        for i in range(0, len(arr)-1):
            if(arr[i+1]<arr[i]):
                diff = arr[i] - arr[i+1]
                arr[i+1]+=diff
                count+=diff
        return count
if __name__=="__main__":    
    n = int(input())
    arr = [int(i) for i in input().split(" ")][:n]
    print(ascending_order(arr))
    
    
def bubble_sort(arr):
    n = len(arr)
    

    for i in range(n):
        swap = False 
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j] , arr[j+1] = arr[j+1] , arr[j]
                swap = True 
        if not swap:
            break
    return arr 
    
arr = [9,8,6,5,4]
bubble_sort(arr)

for i in range(len(arr)):
    print(arr[i])
def partition(arr,l,h):
    # Note for finding the pivot element and placing the pivot element in middle
    #  start from initial index and then increase one pointer j to teh last greatest element
    #   if small element is found swap small element with bigger that is pointed by the j pointer
    #
    pivot = arr[h]
    j=l
    for i in range(l,h):
        if(arr[i]<pivot):
            arr[i],arr[j]=arr[j],arr[i]
            j=j+1
    arr[j],arr[h]=arr[h],arr[j]
    return  j

def quick_sort(arr,l,h):
    if(l<h):
        pivot = partition(arr,l,h)
        quick_sort(arr,l,pivot-1)
        quick_sort(arr,pivot+1,h)


if __name__ =='__main__':
    arr = [150,4,9,26,8,100,80,12]
    n= len(arr)
    quick_sort(arr,0,n-1)
    print (arr)

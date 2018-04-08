

def merge_sort(sor):
    mid = len(sor)//2
    if(len(sor)<=1):
        return sor


    left =merge_sort(sor[0:mid])
    right = merge_sort(sor[mid:])
    i=j=0
    tar =0
    while(i<len(left) and j<len(right)):
        if(left[i]<right[j]):
            sor[tar]=left[i]
            i = i+1
        else:
            sor[tar] =right[j]
            j=j+1
        tar =tar+1
    while(i<len(left)):
        sor[tar] =left[i]
        i =i +1
        tar=tar+1
    while(j<len(right)):
        sor[tar]= right[j]
        j=j+1
        tar =tar+1

    return sor


if __name__ =='__main__':
    arr = [150,4,9,26,1,5,65,2,12,1,1]
    final =merge_sort(arr)
    print (final)

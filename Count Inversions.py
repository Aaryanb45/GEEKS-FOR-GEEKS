class Solution:
    #User function Template for python3
    #Function to count inversions in the array.
    def inversionCount(self, arr):
        # Your Code Here
        def merge(arr,temp,left,mid,right):
            i=left
            j=mid+1
            k=left
            count=0
            while i<=mid and j<=right:
                if arr[i] <=arr[j]:
                    temp[k]=arr[i]
                    k+=1
                    i+=1
                else:
                    temp[k]=arr[j]
                    count+=(mid-i+1)
                    k+=1
                    j+=1
            while i<=mid:
                temp[k]=arr[i]
                k+=1
                i+=1
            while j<=right:
                temp[k]=arr[j]
                k+=1
                j+=1
            
            for x in range(left,right+1):
                arr[x]=temp[x]
            return count
        def mergeSort(arr,temp,left,right):
            count=0
            if left< right:
                mid=(left + right) //2
                count+=mergeSort(arr,temp,left,mid)
                count+=mergeSort(arr,temp,mid+1,right)
                count+=merge(arr,temp,left,mid,right)
            return count
        n=len(arr)
        temp=[0] * n
        return mergeSort(arr,temp,0,n-1)
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        a = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.inversionCount(a))
        print("~")

# } Driver Code Ends

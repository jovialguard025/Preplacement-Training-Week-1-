class Solution:
    def pushZerosToEnd(self, arr):
        non_zero = 0
        n = len(arr)
        for i in range(n):
            if arr[i] != 0:
                if i != non_zero:
                    arr[i], arr[non_zero] = arr[non_zero], arr[i]
                non_zero += 1
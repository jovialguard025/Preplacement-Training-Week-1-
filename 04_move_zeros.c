void pushZerosToEnd(int arr[], int n) {
    int non_zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (i != non_zero) {
                int temp = arr[i];
                arr[i] = arr[non_zero];
                arr[non_zero] = temp;
            }
            non_zero++;
        }
    }
}

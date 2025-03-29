int kthSmallest(int arr[], int n, int k) {
    if (k <= 0 || k > n)
        return -1;

    // Simple selection sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // Return the (k-1)th element after sorting
    return arr[k - 1];
}
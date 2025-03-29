// int binarySearch(int arr[],int n,int target){
//     printf("%d",arr[1]);
// }

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;  // Found, return index
        else if (arr[mid] < target)
            left = mid + 1;  // Move right
        else
            right = mid - 1; // Move left
    }

    return -1; // Not found
}

// Global Trend Programming Profile Assessment Questions
// Question 5
void rotateArray(int arr[],int n,int k) {
    k = k % n; 
    reverseArray(arr,0, n-1);
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
}
void reverseArray(int arr[],int start,int end) {
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

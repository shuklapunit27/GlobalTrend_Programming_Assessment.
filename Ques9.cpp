// Global Trend Programming Profile Assessment Questions
// Question 9
int maxDifference(int arr[], int n) {
    int max=arr[0];
    int min=arr[0];
    for (int i=1;i<;i++) {
        if (arr[i]>max) {
            max=arr[i];
        } else if(arr[i]<min) {
            min=arr[i];
        }
    }
    return max-min;
}

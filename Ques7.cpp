// Global Trend Programming Profile Assessment Questions
// Question 7
int sumOfDigits(int n) {
    int sum=0;
    while (n!=0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

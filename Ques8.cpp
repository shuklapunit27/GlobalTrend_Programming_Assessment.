// Global Trend Programming Profile Assessment Questions
// Question 8
int gcd(int a,int b){
    int temp;
    while (b!=0) {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

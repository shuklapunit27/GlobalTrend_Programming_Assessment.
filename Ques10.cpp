// Global Trend Programming Profile Assessment Questions
// Question 10 
bool isAlphabetic(const string &str) {
    for (char c:str) {
        if (!isalpha(c)) {
            return false;
        }
     }
    return true;
}

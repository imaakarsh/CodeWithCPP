class Solution {
public:
    string checkNumberSign(int num) {
        // Implement the logic to check if the number is positive, negative, or zero
        if (num<0){
            return "Negative";
        }
        if (num == 0){
            return "Zero";
        }
        if (num > 0){
            return "Positive";
        }
    }
};
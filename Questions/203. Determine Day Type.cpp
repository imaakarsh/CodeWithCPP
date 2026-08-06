class Solution {
public:
    string determineDayType(int day) {
        // Implement the if-else-if ladder logic to determine if it's a weekday or weekend
         switch (day) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                return "Weekday";

            case 6:
            case 7:
                return "Weekend";

            default:
                return "Invalid";
        }
    }
};
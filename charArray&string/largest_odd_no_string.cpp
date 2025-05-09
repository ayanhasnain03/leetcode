class Solution {
 public:
     // Function to return the largest odd-numbered substring from the input string
     string largestOddNumber(string num) {
         int n = num.length();  // Get the length of the string

         // Iterate from the last character to the first
         for (int i = n - 1; i >= 0; i--) {
             // Convert character to digit and check if it's odd
             if ((num[i] - '0') % 2 != 0) {
                 // If odd, return substring from start to current position (inclusive)
                 return num.substr(0, i + 1);
             }
         }

         // If no odd digit found, return an empty string
         return "";
     }
 };

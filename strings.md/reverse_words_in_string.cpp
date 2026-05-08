// Problem: Reverse Words in a String
// Approach: Traverse from end, extract words, and build result

class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = s.size() - 1;

        while (i >= 0) {

            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) break;

            // Mark end of the word
            int end = i;

            // Move i to the start of the word
            while (i >= 0 && s[i] != ' ') {
                i--;
            }

            // Add space between words (not before first word)
            if (!result.empty()) {
                result += " ";
            }

            // Extract word and append
            result += s.substr(i + 1, end - i);
        }

        return result;
    }
};

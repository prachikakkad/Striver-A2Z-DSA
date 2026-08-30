class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }
        string temp = cleaned;
        int left = 0, right = cleaned.length()-1;
        while(left < right){
            swap(cleaned[left], cleaned[right]);
            right--;
            left++;
        }
        if(cleaned == temp){
            return true;
        }
        else{
            return false;
        }
    }
};
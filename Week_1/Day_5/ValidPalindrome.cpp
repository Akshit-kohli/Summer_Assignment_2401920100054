class Solution {
public:
    bool isPalindrome(string s) {
       string clean = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            clean += s[i];
        else if(s[i] >= 'A' && s[i] <= 'Z')
            clean += s[i] + 32;  
        else if(s[i] >= '0' && s[i] <= '9')
            clean += s[i];
    }

    string rev = "";
    for(int i = clean.size()-1; i >= 0; i--)
        rev += clean[i];

    if(clean == rev)
        return true;
    else
        return false; 
    }
}
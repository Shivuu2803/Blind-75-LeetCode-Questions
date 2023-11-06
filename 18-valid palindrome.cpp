class Solution 
{
public:
    bool isPalindrome(string str) 
    {
        int left = 0;
    int right = str.length() - 1;

    while (left < right) 
    {
        while (left < right && !isalnum(str[left]))  //isalnum is a function used to check whether given character is is a alphanumeric or not.
        {
            left++;
        }
        while (left < right && !isalnum(str[right])) 
        {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) 
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
    }
};

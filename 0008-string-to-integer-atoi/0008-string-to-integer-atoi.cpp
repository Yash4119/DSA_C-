class Solution {
public:
    int myAtoi(string s) {
        int n = s.size(), i=0;
        while(i<n && s[i] == ' ') i++;
        bool is_neg = false;
        if(s[i] == '-'){
            is_neg = true;
            i++;
        }
        else if(s[i] == '+') i++;
        string str;
        for(int j=i;j<n;j++){
            if(s[j]<48 || s[j]>57) break;
            str+=s[j];
        }
        int num = 0;
        for(int j=0;j<str.size();j++){
            if(num > INT_MAX/10 || (num == INT_MAX/10 && (str[j]-'0') > 7)) {
                if(is_neg) return INT_MIN;
                return INT_MAX;
            }
            num = num*10 + (str[j] - '0');
        }
        if(is_neg) num=-num;
        return num;
    }
};
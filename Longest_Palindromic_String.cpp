<<<<<<< HEAD
class Solution {
public:
        bool check(string &s, int i, int j){
            while(i<j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int max_len = 0;

        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(check(s,i,j)){
                    if(j-i+1 >max_len){
                        max_len = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,max_len);
    }
=======
class Solution {
public:
        bool check(string &s, int i, int j){
            while(i<j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int max_len = 0;

        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(check(s,i,j)){
                    if(j-i+1 >max_len){
                        max_len = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,max_len);
    }
>>>>>>> 00b0fa39de026e2ea6cc98d517f009d9b1a76392
};
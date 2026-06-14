class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }

        string pre_str = countAndSay(n-1);

        string result;
        char cur_char = pre_str[0];
        int count = 1;
        for(int i=1 ; i<pre_str.size() ; i++){
            if(cur_char == pre_str[i]){
                count++;
            }else{
                result += to_string(count) + cur_char;
                count = 1;
                cur_char = pre_str[i];
            }
        }
        result += to_string(count) + cur_char;

        return result;
    }
};

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string current = "1";
        
        for(int i=2 ; i<=n ; i++){
            string next = "";
            int j = 0;
            while(j<current.size()){
                int count = 1;
                while(j+1<current.size() && current[j]==current[j+1]){
                    count++;
                    j++;
                }
                next += to_string(count) + current[j];
                j++;
            }
            current = next;
        }

        return current;
    }
};


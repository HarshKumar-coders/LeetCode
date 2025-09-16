class Solution {
    private:
    void solve(string digits,int i,vector<string>& ans, string output , string map[]){
        // base case
        if(i>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[i]-'0';
        string value= map[number];

        for(int j=0;j<value.length();j++){
            output.push_back(value[j]);
            solve(digits, i+1, ans, output, map);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
       vector<string>ans;
    if(digits.length()==0){
        return ans;
    }
        string output="";
       int i=0;
       
       
       string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     solve(digits, i, ans, output, map);
       
       return ans;

    }
};
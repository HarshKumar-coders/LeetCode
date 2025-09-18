class Solution {
    private:
    void flip(vector<char>& s,int st,int e){
        if(st>e){
            return ;
        }

        swap(s[st],s[e]);
        st++;
        e--;
         flip(s,st,e);
    }
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        flip(s,0,n-1);
        
    }
    };
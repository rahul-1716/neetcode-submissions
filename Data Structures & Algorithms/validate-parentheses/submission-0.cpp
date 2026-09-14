class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char,char> hashmap = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
        for(char C : s){
            if(hashmap.count(C)){
                if(!stack.empty() && stack.top() == hashmap[C]){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(C);
            }
        }
        return stack.empty();
    }
};

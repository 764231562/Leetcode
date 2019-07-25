class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        map<int,int> a;
        
        for (int i = 0; i < num.size(); i++){
            if (a.count(target-num[i])>0) {
                return {a[target-num[i]],i};
            }
            a[num[i]] = i;
        }
            
        return {};
    }
};

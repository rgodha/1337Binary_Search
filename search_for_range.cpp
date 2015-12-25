class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l, r, m; 
        int p, q;
        vector<int> v;
        r = nums.size() -1;
        l = 0;
        bool flag=false;

        while(l <= r) {
            m = (l+r)/2;
            //cout << nums[m] << " ";
            if(nums[m] == target) {
                flag = true;
                p = l; q = r;

                while(nums[p] != target) p++; 
                while(nums[q] != target) q--;
                v.push_back(p); v.push_back(q);
                break;
            }

            if(nums[m] < target) {
                l = m+1;
            }

            if(nums[m] > target) {
                r = m-1;
            }

        }
        if(flag == false) {
            return {-1,-1};
        } else {
            return v;
        }
    }
};

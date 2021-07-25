class Solution {

public:

   vector<int> twoSum(vector<int>& nums, int target) {

       map<int, int> mp;

       int i;

       for(i=0; i<nums.size(); i++)

       {

           int d = target - nums[i];

           if(mp.find(d) != mp.end())

           {

               return vector<int> {i, mp[d]};

           }

           mp.insert({nums[i], i});

       }

       return vector<int> {0,1};

   }

};

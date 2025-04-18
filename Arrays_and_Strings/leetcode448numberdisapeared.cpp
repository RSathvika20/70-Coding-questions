//BF
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            int n=nums.size();
           
            for(int i=0;i<n;i++){
                while(a[a[i]-1]!=a[i]){
                    swap(a[i],)
                }
                int flag=0;
                for(int j=0;j<n;j++){
                    if(nums[j]==i){
                        flag=1;
                        break;
                    }
                    
                }
                if(!flag){
                    t.push_back(i);
                }
            }
            return t;
            
            
        }
    };
//optimised1(convert to negative)
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            int n=nums.size();
            vector<int>t;
            for(int i:nums){
                int ind=abs(i)-1;
                nums[ind]=-abs(nums[ind]);
            }
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    t.push_back(i+1);
                }
            }
            return t;
           
            
        }
    };
//Optimised2(swaping elements)
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& a) {
            int n=a.size();
           vector<int>ans;
            for(int i=0;i<n;i++){
                while(a[a[i]-1]!=a[i]){
                    swap(a[i],a[a[i]-1]);
                }
            }
            for(int i=0;i<n;i++){
                if(a[i]!=i+1){
                    ans.push_back(i+1);
                }
            }
            return ans;
    
            
            
        }
    };
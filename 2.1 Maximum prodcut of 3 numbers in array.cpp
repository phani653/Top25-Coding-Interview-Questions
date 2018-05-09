int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int maxA=INT_MIN, maxB=INT_MIN, maxC= INT_MIN;
        int minA=INT_MAX, minB=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>maxA){
                maxC=maxB; maxB=maxA; maxA=nums[i];
            }
            else if(nums[i]>maxB){
                maxC=maxB; maxB=nums[i];
            }
            else if(nums[i]>maxC) maxC=nums[i];
            if(nums[i]<minA) {
                minB=minA; minA=nums[i];
            }
            else if (nums[i] <  minB) minB= nums[i];
        }
        return max(maxA*maxB*maxC, maxA*minA*minB);
    }

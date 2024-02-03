class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int maxl=0, maxr=0;
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i=0;i<n;i++){
            maxl=max(height[i], maxl);
            left[i]=maxl;
        }
        for(int i=n-1;i>=0;i--){
            maxr=max(height[i], maxr);
            right[i]=maxr;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        return ans;
    }
};

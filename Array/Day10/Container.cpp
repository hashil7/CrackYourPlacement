//LINK: https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,n=height.size();
        int j=n-1,maxi=0;
        while(i<j){
            maxi=max(maxi,(j-i)*min(height[j],height[i]));
            if(height[i]<height[j]){
                i++;
            }else {
                j--;
            }
        }
        
        return maxi;
    }
};

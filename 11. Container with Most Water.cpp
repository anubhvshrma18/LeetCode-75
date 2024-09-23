class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0 , right = n-1;

        int maxWater = 0;

        while(left < right) {

            int width = right -left;

            int heightOfContainer = min(height[left], height[right]);

            maxWater = max(maxWater, width*heightOfContainer);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};

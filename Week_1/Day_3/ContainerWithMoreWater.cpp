class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxWater = 0;
    int size = height.size();
    int i = 0, j = size - 1;

    while(i < j){
        int water = min(height[i], height[j]) * (j - i);
        if(water > maxWater)
            maxWater = water;

        if(height[i] < height[j])
            i++;
        else
            j--;
    }

    return maxWater;
}
}
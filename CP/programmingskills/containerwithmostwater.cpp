class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int solution = 0, lefti = 0, righti = height.size()-1;
        while (lefti < righti)
        {
            solution = max(solution, min(height[lefti], height[righti]) * (righti - lefti));

            (height[lefti] < height[righti]) ? ++lefti : --righti;
        }

        return solution;
    }
};

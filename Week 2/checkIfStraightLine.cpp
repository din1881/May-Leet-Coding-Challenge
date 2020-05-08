class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        float slope = float(coordinates[1][1] - coordinates[0][1]) / float(coordinates[1][0] - coordinates[0][0]);

        for (int i = 1; i < coordinates.size(); i++)
        {
            float slope2 = float(coordinates[i][1] - coordinates[i - 1][1]) / float(coordinates[i][0] - coordinates[i - 1][0]);
            if (slope2 != slope) return false;
        }
        return true;
    }
};
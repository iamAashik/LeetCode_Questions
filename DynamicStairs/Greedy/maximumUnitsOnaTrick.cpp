bool compare(vector<int>& a, vector<int>& b) { return a[1] > b[1]; }

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int result = 0;

        for (auto& boxType : boxTypes) {
            if (truckSize >= boxType[0]) {
                result += (boxType[0] * boxType[1]);
                truckSize -= boxType[0];
            } else {
                result += (truckSize * boxType[1]);
                return result;
            }
        }

        return result;
    }
};
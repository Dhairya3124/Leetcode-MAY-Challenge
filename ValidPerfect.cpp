class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 2)
            return true;
        double m1 = ((double)coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
            for(int i=1; i<coordinates.size()-1; i++){
            double m2 = ( (double)coordinates[i+1][1] - coordinates[i][1] ) / ( coordinates[i+1][0] - coordinates[i][0] );
            if(m2 != m1)
                return false;
        }
        return true;
    }
};

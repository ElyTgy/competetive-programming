#include <vector>
using std::vector;


class SubrectangleQueries {
public:
    vector<vector<int>> vec;

    SubrectangleQueries(vector<vector<int>>& rectangle) : vec(rectangle)
    {}

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; ++i)
        {
            for (int j = col1; j <= col2; ++j)
            {
                vec[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col)
    {
        return vec[row][col];
    }
};
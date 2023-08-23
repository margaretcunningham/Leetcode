class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i<grid.size();i++) {
            for (int j = 0;j<grid[0].size();j++)
                if (grid[i][j]== '1') {
                    count++;
                
                queue<vector<int>> q;
                vector<int> temp1 = {i,j};
                q.push(temp1);
                while(!q.empty()) {
                    vector<int> curr = q.front();
                    q.pop();
                    if (grid[curr[0]][curr[1]] != '1') {
                        continue;
                    }
                    grid[curr[0]][curr[1]] = '2';
                    if (curr[0]-1>=0) {
                        vector<int> temp1 = {curr[0]-1, curr[1]};
                        q.push(temp1);
                    }
                    if (curr[0]+1<grid.size()) {
                        vector<int> temp1 = {curr[0]+1, curr[1]};
                        q.push(temp1);
                    }
                    if (curr[1]-1>=0) {
                        vector<int> temp1 = {curr[0], curr[1]-1};
                        q.push(temp1);
                    }
                    if (curr[1]+1<grid[0].size()) {
                        vector<int> temp1 = {curr[0], curr[1]+1};
                        q.push(temp1);
                    }
                }
            }
        }
        return count;
    }
};

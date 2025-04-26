class Solution {
  public:
    void solve(int x, int y, vector<vector<int>>& maze, int n, vector<string>& ans, string path, vector<vector<int>>& visited) {
        // Base case: destination reached
        if (x == n-1 && y == n-1) {
            ans.push_back(path);
            return;
        }
        
        // Mark the cell as visited
        visited[x][y] = 1;
        
        // Possible movements: Down, Left, Right, Up
        int dx[] = {1, 0, 0, -1};
        int dy[] = {0, -1, 1, 0};
        char move[] = {'D', 'L', 'R', 'U'};
        
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            
            // Check if the move is safe
            if (newX >= 0 && newY >= 0 && newX < n && newY < n &&
                maze[newX][newY] == 1 && visited[newX][newY] == 0) {
                solve(newX, newY, maze, n, ans, path + move[i], visited);
            }
        }
        
        // Backtrack: Unmark the cell
        visited[x][y] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        
        // Only start if starting cell is 1
        if (maze[0][0] == 1) {
            solve(0, 0, maze, n, ans, "", visited);
        }
        
        return ans;
    }
};

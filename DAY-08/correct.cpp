class Solution {
  public:
   bool isSafe(vector<vector<int>> &maze, vector<vector<int>> &vis,int x,int y,int& n){
    if(x <= n-1 && y<=n-1 && x >= 0 && y >= 0 && vis[x][y] == 0 && maze[x][y] == 1){
        //inside maze and not visited and open way
        return true;
    }else{
       return false;
    }
}
void solve(vector<vector<int>> &maze, vector<vector<int>> &vis, vector<string>& res, string dirn, int x, int y,int& n){
    // base case
    if (x == n - 1 && y == n - 1 )
    {
        res.push_back(dirn);
        return;
    }
    vis[x][y] = 1;
    //Recursive Relation
    //DOWN
    if (isSafe(maze,vis,x+1,y,n)){
        dirn.push_back('D');
        solve(maze,vis,res,dirn,x+1,y,n);
        dirn.pop_back();
    }
     //LEFT
    if (isSafe(maze,vis,x,y-1,n)){
        dirn.push_back('L');
        solve(maze,vis,res,dirn,x,y-1,n);
        dirn.pop_back();
    }
     //RIGHT
    if (isSafe(maze,vis,x,y+1,n)){
        dirn.push_back('R');
        solve(maze,vis,res,dirn,x,y+1,n);
        dirn.pop_back();
    }
     //UP
    if (isSafe(maze,vis,x-1,y,n)){
        dirn.push_back('U');
        solve(maze,vis,res,dirn,x-1,y,n);
        dirn.pop_back();
    }
    //backtracking
    vis[x][y] = 0;
}
vector<string> ratInMaze(vector<vector<int>> &maze){
    // code here
    int n = maze.size();
    vector<string> res;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    string dirn = "";
    int x = 0, y = 0;
    if(maze[0][0] == 0){
        return res;
    }
    solve(maze, vis, res, dirn, x, y,n);
    return res;
}
};
//TC->O(4^(n*n))
//SC->o(n*n)
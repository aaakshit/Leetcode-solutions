class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return recurse(grid, 0, 0, n);
    }

    Node* recurse(vector<vector<int>>& grid, int x, int y, int len){
        Node* root = new Node();

        if(areEqual(grid, x, y, len)) {
            root->isLeaf = true;
            root->val = grid[y][x];
        } else {
            int half = len/2;
            root->topLeft = recurse(grid, x, y, half);
            root->topRight = recurse(grid, x+half, y, half);
            root->bottomLeft = recurse(grid, x, y+half, half);
            root->bottomRight = recurse(grid, x+half, y+half, half);
        }
        return root;
    }

    bool areEqual(vector<vector<int>>& grid, int x, int y, int len){
        bool check = grid[y][x];
        for(int i = y; i < y+len; i++){
            for(int j = x; j < x+len; j++){
                if(grid[i][j] != check) return false;
            }
        }
        return true;
    }
};
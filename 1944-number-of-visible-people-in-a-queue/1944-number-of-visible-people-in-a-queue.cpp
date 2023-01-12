class Solution {
public:
   vector<int> canSeePersonsCount(vector<int>& heights) {
    vector<int> mono;
    for (int i = heights.size() - 1; i >= 0; --i) {
        int h = heights[i], cnt = 0;
        for (; !mono.empty() && mono.back() < h; ++cnt)
            mono.pop_back();
        heights[i] = cnt + !mono.empty();
        mono.push_back(h);
    }
    return heights;
}
};
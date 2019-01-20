class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>Ve;
        
        int Len = A.size();
        for(int i=0;i<Len;i++){
            Ve.push_back(A[i]*A[i]);
        }
        sort(Ve.begin(),Ve.end());
        return Ve;
    }
};
//https://leetcode.com/contest/weekly-contest-120/problems/squares-of-a-sorted-array/
//简单排序
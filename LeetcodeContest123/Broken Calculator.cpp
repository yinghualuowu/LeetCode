class Solution {
public:
    int brokenCalc(int X, int Y) {
        int cnt=0;
        if(X>=Y){
            return X-Y;
        }
        while(X!=Y){
            if(Y<X)Y++;
            else if(Y%2){
                Y++;
            }else{
                Y/=2;
            }
            //cout<<Y<<endl;
            cnt++;
        }
        return cnt;
    }
};
//https://leetcode.com/contest/weekly-contest-123/problems/broken-calculator/
//CF原题，我们反过来看，Y是偶数就/2，奇数就加1，到了比X小就再加
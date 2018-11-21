///////////////////////////////////////////////////////////////
//  实现 int sqrt(int x) 函数。
//  计算并返回 x 的平方根，其中 x 是非负整数。
//  由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
///////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/sqrtx/description/
///////////////////////////////////////////////////////////////

class Solution
{
    public:
    
    int mySqrt(int x) 
    {
        if (x == 0) return 0;
        if (x == 1) return 1;
        
        int left = 0, right = x;
        
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            
            if (x / mid >= mid)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        
        return left - 1;
    }
};

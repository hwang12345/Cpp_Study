/////////////////////////////////////////////////////////////////////////////
//  给定一个整数 n，返回 n! 结果尾数中零的数量。
/////////////////////////////////////////////////////////////////////////////
//  https://leetcode-cn.com/problems/factorial-trailing-zeroes/description/
/////////////////////////////////////////////////////////////////////////////

class Solution 
{
    public:
    
    int trailingZeroes(int n) 
    {
        int count = 0;
        
        while (n)
        {
            n /= 5;
            count += n;
        }
        
        return count;
    }
};
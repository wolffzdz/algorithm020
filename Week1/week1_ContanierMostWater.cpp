class Solution {
public:
    int maxArea(vector<int>& a) {
        int maxArea = 0;
        int i= 0;
        int j = a.size()-1;
        //int minHeight = 0;
        while( i < j )
        {
            int minHeight = (a[i] < a[j])? a[i++]: a[j--];
            maxArea = max( minHeight*(j-i+1) , maxArea );
        }
        // for(int i = 0, j = a.size()-1; i< j; )
        // {
        //     int  minHeight = (a[i] < a[j])? a[i++]: a[j--];
        //     maxArea = (maxArea < (j-i+1)*minHeight)? (j-i+1)*minHeight: maxArea;  // 56ms
        //     maxArea = max(maxArea, (j-i+1)*minHeight);      // 40ms
        // }
        return maxArea;
    }
};
//# 双指针/双下标--> 双夹逼方法


// solution #1 
/*
    暴力解法：
    > left x,  right y,  Container = (y - x )*height_diff

    > time: O(n^2)

    class Solution {
public:
    int maxArea(vector<int>& a) {
        int maxArea = 0;
        for(int i = 0; i< a.size() -1; ++i)
        {
            for(int j= i+1; j< a.size(); ++j)
            {
                int area = (j-i)*min(a[i],a[j]);
                maxArea = max( maxArea, area);
            }
        }
        return maxArea;
    }
};
    
    // 超出时间限制
*/
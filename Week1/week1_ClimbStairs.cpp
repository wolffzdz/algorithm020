//C++
class Solution {
public:
    int climbStairs(int n) {
        int f1 = 1;
        int f2 = 2;
        int f3 = 3;
        switch( n )
        {
            case 1:
            return f1;
            break;
            case 2:
            return f2;
            break;
            default:
            {
                for( int i = 3; i<=n; ++i)
                {
                    f3 = f2+ f1;
                    f1 = f2;
                    f2 = f3;
                }
                return f3;
                break;
            }
        }
        
    }
};
// time: O(n)

// solution #1  , silly weird solution, N/A time
/*
    n = 1, f = 1;
    n = 2, f = 2;
    n = 3, f(3) = f(2) + f(1);
    f(n) = f(n-1) + f(n-2);

    // diretct recursion
class Solution {
public:
    int climbStairs(int n) {
        if( n <= 2)
        return n;
        return climbStairs(n-1)+climbStairs(n-2);
    }
};
// time : O(n^2)
*/
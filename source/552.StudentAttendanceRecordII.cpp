
//解法一：动态规划
//https://leetcode.com/problems/student-attendance-record-ii/discuss/101643/Share-my-O(n)-C%2B%2B-DP-solution-with-thinking-process-and-explanation
class Solution {
public:
    int checkRecord(int n) {
        int m = 1000000007;
        int *A = new int [n];
        int *P = new int [n];
        int *L = new int [n];
        
        P[0] = 1;
        L[0] = 1;
        L[1] = 3;
        A[0] = 1;
        A[1] = 2;
        A[2] = 4;
        
        if(n == 1) return 3;
        
        for(int i = 1; i < n; i++)
        {
            A[i - 1] %= m;
            P[i - 1] %= m;
            L[i - 1] %= m;
            
            P[i] = ((A[i - 1] + P[i - 1]) % m + L[i - 1]) % m;
            
            if(i > 1) L[i] = ((A[i - 1] + P[i - 1]) % m + (A[i - 2] + P[i - 2]) % m) % m;
            
            if(i > 2) A[i] = ((A[i - 1] + A[i - 2]) % m + A[i - 3]) % m;
        }
        
        return ((A[n - 1] % m + P[n - 1] % m) % m + L[n - 1] % m) % m;
    }
};

//解法二:https://leetcode.com/problems/student-attendance-record-ii/discuss/222633/C%2B%2B-O(log(n))-beats-100-with-explanation-(matrix-pow)

class Solution {
public:
    const int prime = 1000000007;

    struct Mat6 {
        int m[6][6];
    };

    const Mat6 identityMatrix = {
        {{1, 0, 0, 0, 0, 0},
         {0, 1, 0, 0, 0, 0},
         {0, 0, 1, 0, 0, 0},
         {0, 0, 0, 1, 0, 0},
         {0, 0, 0, 0, 1, 0},
         {0, 0, 0, 0, 0, 1}}
    };

    const Mat6 recurrenceMatrix = {
        {{1, 1, 1, 1, 1, 1},
         {1, 0, 0, 0, 0, 0},
         {0, 1, 0, 0, 0, 0},
         {0, 0, 0, 1, 1, 1},
         {0, 0, 0, 1, 0, 0},
         {0, 0, 0, 0, 1, 0}}
    };

    Mat6 mul(const Mat6& a, const Mat6& b) {
        Mat6 c;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                long long x = 0;
                for (int k = 0; k < 6; k++) {
                    x += (static_cast<long long>(a.m[i][k]) * b.m[k][j]) % prime;
                }
                c.m[i][j] = static_cast<int>(x % prime);
            }
        }
        return c;
    }

    void pow(Mat6& a, int n) {
        auto r = identityMatrix;
        while (n != 0) {
            if ((n % 2) == 0) {
                a = mul(a, a);
                n /= 2;
            }
            else {
                r = mul(r, a);
                n--;
            }
        }
        a = r;
    }

    int checkRecord(int n) {
        auto a = recurrenceMatrix;
        pow(a, n + 1);
        return a.m[0][3];
    }
};
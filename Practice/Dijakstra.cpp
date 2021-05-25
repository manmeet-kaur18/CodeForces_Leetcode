class Solution{
  public:
    static bool comp(vector<int> &v1, vector<int> &v2) {
        return v1[2] > v2[2];
    }
    
    
    long long maxTip(int a[], int b[], int n, int x, int y) {
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++) {
            vector<int> vv(3);
            vv[0] = a[i], vv[1] = b[i], vv[2] = abs(a[i] - b[i]);
    
            v[i] = vv;
        }
        sort(v.begin(), v.end(), comp);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (x == 0) {
                ans += v[i][1];
            } else if (y == 0) {
                ans += v[i][0];
            } else {
                if (v[i][0] > v[i][1]) {
                    ans += v[i][0];
                    x--;
                } else {
                    ans += v[i][1];
                    y--;
                }
            }
        }
        return ans;
    }
};


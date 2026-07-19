class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (s.length() <= 1)
            return s;
        int mxlen = 1, st, en, i, j, x = 0;
        for (i = 0; i < n - 1; i++)
        {
            st = i, en = i;
            while (st >= 0 && en < n && s[st] == s[en])
            {
                st--;
                en++;
            }
            if (en - st - 1 > mxlen)
            {
                mxlen = en - st - 1;
                x = st + 1;
            }
            if (s[i] == s[i + 1])
            {
                st = i, en = i + 1;
                while (st >= 0 && en < n && s[st] == s[en])
                {
                    st--;
                    en++;
                }
                if (en - st - 1 > mxlen)
                {
                    mxlen = en - st - 1;
                    x = st + 1;
                }
            }
        }
        return s.substr(x, mxlen);
    }
};
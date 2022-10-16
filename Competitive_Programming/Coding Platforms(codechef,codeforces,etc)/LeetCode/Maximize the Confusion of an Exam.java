class Solution {
    public int maxConsecutiveAnswers(String answerKey, int k)
    {
        int n = answerKey.length();
        int cnt = 0;
        int l = 0;
        char ch[] = answerKey.toCharArray();

        int max_len = 0;
        for (int i = 0; i < n; i++) {
            if (ch[i] == 'T')
                cnt++;
            while (cnt > k) {
                if (ch[l] == 'T')
                    cnt--;
                l++;
            }

            max_len = Math.max(max_len, i - l + 1);
        }

        cnt = 0;
        l = 0;
        for (int i = 0; i < n; i++) {
            if (ch[i] == 'F')
                cnt++;
            while (cnt > k) {
                if (ch[l] == 'F')
                    cnt--;
                l++;
            }

            max_len = Math.max(max_len, i - l + 1);
        }

        return max_len;
    }
}

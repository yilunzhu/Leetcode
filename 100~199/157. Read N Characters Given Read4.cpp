/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int res = 0;
        while (n > 0) {
            int l = min(read4(buf), n);
            buf += l;
            res += l;
            n -= l;
            if (l < 4)
                break;
        }
        return res;
    }
};

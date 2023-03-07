class Bits{

    int isPowerOf2 (int x) { return (x && !(x & (x - 1))); }
    int getBit (int n, int i) {
        int mask = (1 << (i - 1));
        return (n & mask) > 0 ? 1 : 0;
    }
    void setBit (int& n, int i) {
        int mask = (1 << (i - 1));
        n |= mask;
    }
    void clearBit (int& n, int i) {
        int mask = ~(1 << (i - 1));
        n &= mask;
    }
    void flibBit (int& n, int i) {
        int mask = (1 << (i - 1));
        n ^= mask;
    }
    void modifyBit (int& n, int i, int bit) {
        clearBit(n, i);
        int mask = (bit << (i - 1));
        n |= mask;
    }
    int leastBit (int n) {
        return (n & (-n));
    }
    void clearRange (int& n, int i, int j) {
        int a = (1 << j), b = (1 << (i - 1)) - 1;
        int mask = a | b;
        n &= mask;
    }
    void coutBits(int n) { cout << bitset<31>(n) << '\n'; }
};
class MakeProblemsPolygon{
    int main() {
        int idx = 3;
        char x[] = "out00000000000000000000000000000000.txt";
        for (int ii = 0; ii < 100; ii++) {
            if (x[idx] == '9')
                idx++;
            freopen(x, "w", stdout);
            x[idx]++;

            int t;
            t = rand() % 100 + 1;
            cout << t << ln;
            while (t--) {
                int n = rand() % 2 + 1;
                int xx = rand() % 100 + 1;

                cout << n << " " << xx << ln;
            }
        }

        return 0;
    }
};
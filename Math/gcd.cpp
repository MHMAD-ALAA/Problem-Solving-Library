    int d,x,y; //if we need to find 1/c mod(m) so a will be c and b will be m and the returned used
//variable is x which will be ((x + m ) % m) will be the result
    void extended_euclid(int a, int b){
        if(b==0){
            d = a;
            x = 1;
            y = 0;
        }
        else{
            extended_euclid(b, a%b);
            int tmp = x;
            x = y;
            y = tmp - (a/b) * y;
        }
    }

    int gcd (int a, int b) {
        if (b == 0) return a;
        else return gcd(b, a % b);
    }
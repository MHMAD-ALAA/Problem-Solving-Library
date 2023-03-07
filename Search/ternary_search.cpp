class TernarySearch{
    ll TS(){
        ll lo=0, hi=1e9+9, mid_1, mid_2, f1, f2;

        while(lo <= hi){
            mid_1 = lo + (hi-lo)/3;
            mid_2 = hi - (hi-lo)/3;
            f1 = calc(mid_1);
            f2 = calc(mid_2);
            if(f1 >= f2){
                lo = mid_1 + 1;
            }
            else{
                hi = mid_2 - 1;
            }
        }
        return f1;
    }
};
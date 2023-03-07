class InteractiveProblems{
    ///interactive problems
    int l=1, r=n, mid;
    while(l<r){
        mid = l + (r-l+1)/2;
        cout << mid << endl;
        cout.flush();

        string s; cin>>s;
        if(s=="<") r = mid-1;
        else l = mid;
    }
    cout << "! " << l;
    cout.flush();
};
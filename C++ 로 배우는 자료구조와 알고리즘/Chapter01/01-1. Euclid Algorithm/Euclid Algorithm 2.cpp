int get_gcd_2(int u,int v){    
    int t;
    
    while(v){
        t = u%v;
        u = v;
        v = t;
    }
    return u;
}

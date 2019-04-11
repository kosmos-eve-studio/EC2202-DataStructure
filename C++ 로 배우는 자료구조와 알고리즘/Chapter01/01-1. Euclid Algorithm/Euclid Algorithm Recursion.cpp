int get_gcd_recursion(int u,int v){
    if(v) return get_gcd_recursion(v,u%v);
    else return u;
}

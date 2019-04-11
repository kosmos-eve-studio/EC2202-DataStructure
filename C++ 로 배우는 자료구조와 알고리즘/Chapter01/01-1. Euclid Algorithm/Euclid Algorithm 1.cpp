int get_gcd(int u,int v){
    
    int t; //temp
    
    while (u){  //while u!=1
        if (u<v){ //v가 더 크면 순서 변환
            t=u; u=v; v=t; // 순서변환
        }
        u = u-v; //유클리드법
    }
    return v;
}

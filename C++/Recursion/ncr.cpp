#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}

int cf(int n , int r){
    int t1, t2;
    t1 = fact(n);
    t2= fact(r)*fact(n-r);
    
    return t1/t2;
}
int cr(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    else
    {
        return cr(n-1, r-1) + cr(n-1,r);
    }
    
}


int main(){
    cout<<cf(5,2)<<endl;
    cout<<cr(5,2);

    return 0;
}
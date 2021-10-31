#include <iostream>
using namespace std;
// o(n)
int fib(int n){
    int t0=0, t1=1,s,i;
    if(n<=1){
        return n;
    }
    for ( i = 2; i <=n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;

    }
    return s;
    

}
// excessive recursion o(n^2)
int rfib(int n){
    if(n<=1){
        return n;

    }
    return rfib(n-2)+ rfib(n-1);
}

// memoization o(n)
int F[10];
int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=mfib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=mfib(n-1);
        }
        return F[n-2] + F[n-1];
    }
}
    

int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        F[i]=-1;
    }
    

    cout<<fib(10);
    cout<<rfib(10);
    cout<<mfib(10);

    return 0;
}
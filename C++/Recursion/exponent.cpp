#include <iostream>
using namespace std;
int expo(int m,int n){
    if(n==0)
        return 1;
    else
    {
        return expo(m,n-1)*m;
    }
        
}
int pow(int m,int n){
    if(n==0){
        return 1;
    } 
    else if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return pow(m*m,(n-1)/2)*m;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<expo(m,n)<<endl;
    cout<<pow(m,n)<<endl;

return 0;
}
#include <iostream>
using namespace std;
int sum(int n){
    // if (n==0){
    //     return 0;

        

    // }else
    // {
    //     return sum(n-1) + n;
    // }

    return n*(n+1)/2;
    

}

    
    


int main(){
    int n;
    cin>>n;
    // p =sum(n);
    cout<<sum(n)<<endl;


return 0;
}
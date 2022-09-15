#include<iostream>
using namespace std;
int fact(int x){
    if(x==1){
        return 1; // Terminate condition
    }
    else{
        return x*fact(x-1);   // Base condition
    }
}
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n+sum(n-1));
    }
}
int fibonacci(int n){
    if(n<=1){
        return n; 
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    // RECURSION
        //cout<<fact(5)<<endl;
                // factorial
        
        //cout<<sum(5)<<endl;
                // sum

        // for(int i=0;i<6;i++){
        //     cout<<fibonacci(i)<<" ";
        // }
                    // fibonacci

                                        // COMPLEXITY OF RECURSIVE FUNCTION WILL BE DENOTED IN T(n) terms
                                        
                                        
        return 0;
}

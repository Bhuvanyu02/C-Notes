#include<iostream>
using namespace std;
void Test (int n){
    if (n>0)
    {
        cout<<n;
        Test(n-1);
    }
    // T(n) -> Reccurence Relation
    //          1 for n=0
    //          T(n-1)+1  for n>0

}
int main()
{
             //   RECURRENCE TREE / TRACING TREE

                        // Recurrence Relation Methods:-  (CANNOT APPLY ALL METHODS ON A QUESTION) 
                            //     i) Tree Method  


                            //    ii) Substitution Method (Backwards Substitution )
                                        //  T(n)=T(n-1)+1;
                                        // T(n-1)=T(n-2)+1;

                                        // T(n) = {T(n-2)+1} + 1;     replacing T(n-1) by its value
                                        // T(n)=T(n-3)+3;
                                        //  Running loop for K times -> T(n)=T(n-k)+k;
                                        //  when will loop finish =>   N-K=0
                                        //    when k=n => T(0)+n => n+1 is the complexity
                            
                            //    iii) Master Theroem / Formulae Method / Division Method 
                                      
    return 0;
}

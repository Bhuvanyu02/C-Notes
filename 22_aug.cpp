#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1{1,2,3};
    int n=3;
    vector<int>v2(n,10);
    //cout<<"Initial size "<<v2.size()<<endl;
    v2.push_back(12); // we can add or delete more elements
    //          (size,value for all the elements)
    
    
            //      DISPLAY FUNCTIONS
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     //cout<<v2[i]<<" ";
    // }
    // vector<int>::iterator i; // pointer for vector
    // for (i=v2.begin(); i != v2.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    //  cout<<v2.at(0)<<endl;  
    // for (auto i = v1.begin(); i !=v1.end(); i++)
    // {
    //     *i+=1;
    // }
    // for (auto i = v1.begin(); i !=v1.end(); i++)
    // {
    //   cout<<*i<<" ";
    // }
         
            // we can use CBEGIN() and CEND() only to display the elements of the vector; 
            // we can use RBEGIN() and REND() to display reverse   &&   reverse(v1.begin(),v1.end())

//cout<<"New Size after Addition "<<v2.size()<<endl;
    

                            // COPYING METHODS
             // vector<int>v2(v1.begin(),v1.end());   &&&       v2=v1;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    
     vector<int>::iterator i=v1.begin();
      vector<int>::iterator i2=v1.end();                       // pointer for vector
        for ( i; i!=i2; i++)
        {
                    v1.insert(i,100);
        }
    for (auto i3=v1.begin() ; i3 != v1.end(); i3++)
    {
        cout<<*i3<<" ";
    }
    

    return 0;
}

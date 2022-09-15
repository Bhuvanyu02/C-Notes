#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    //  Q1
    // int n;
    // cin>>n;
    // map<int,int>m;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin>>a;
    //     m[a]++;
    // }
    // map<int,int>::iterator i;
    // cout<<"NON -REPEATING NUMBERS : ";
    // for ( i = m.begin(); i != m.end(); i++)
    // {
    //     if (i->second==1)
    //     {
    //         cout<<i->first<<" ";
    //     }
    // }
    // cout<<endl;

    // Q2
    // int n;
    // cin>>n;
    // map<int,int>m;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin>>a;
    //     m[a]++;
    // }
    //  map<int,int>::iterator i;
    //  for ( i = m.begin(); i != m.end(); i++)
    //  {
    //     if (i->second >=2)
    //     {
    //         cout<<i->first<<" "<<i->second<<endl;
    //     }
    //  }

    // SET-2
    // Q1
// int n;
// cout << "ENTER TOTAL NUMBER OF STUDENT-GRADE PAIRS" << endl;
// cin >> n;
// vector<string> name;
// vector<long> grade;
// map<int,int>m;
// int arr[n];
// long long sum = 0;
// for (int i = 0; i < n; i++)
// {
//     string name1 = "";
//     long marks = 0;
//     cout << "Enter Name of " << i + 1 << " th Student" << endl;
//     cin >> name1;
//     name.push_back(name1);
//     cout << "Enter Marks of " << i + 1 << " th Student" << endl;
//     cin >> marks;
//     m[marks]++;
//     grade.push_back(marks);
//     sum+=marks;
//     arr[i]=marks;
// }
// cout << "MEAN OF GRADES = " << (sum / n) << endl;
// map<int,int>::iterator j;
// int count=0;
// for ( j = m.begin(); j !=m.end(); j++)
// {
//     if(j->second>count){
//         count=j->second;
//     }
// }

// sort(arr,arr+n);

// if(n%2==0){
//     cout<<"Median of Grades is "<<arr[n/2]<<endl;
// }
// else{
//     cout<<"Median of Grades is "<<((arr[(n+1)/2])+(arr[(n-1)/2]))/2<<endl;
// }

// cout<<"Mode of Grades is ";
// for ( j = m.begin(); j !=m.end(); j++)
// {
//     if(j->second==count){
//         cout<<j->first<<" ";
//         int ans=j->first;
//         for(int i=0;i<n;i++){
//             if(grade[i]==ans){
//                 cout<<name[i]<<" ";
//             }
//         }
//         cout<<"    ";
//     }
// }
// cout<<endl;



// Q2
        // int n;
        // cout<<"Enter Total Number of elements"<<endl;
        // cin>>n;
        // unordered_map<int,int>m;
        // map<int,int>m1;
        // for (int i = 0; i < n; i++)
        // {
        //     int a;
        //     cin>>a;
        //     m[a]++;
        // }
        // unordered_map<int,int>::iterator i;
        // for ( i = m.begin(); i != m.end(); i++)
        // {
        //     cout<<i->first<<" "<<i->second<<endl;
        // }
        
        


                // SET-3
    //Q1
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // int count=0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(count==0){
    //         if(arr[i]<arr[i+1]){
    //             count++;
    //             continue;
                
                
    //         }
    //         else{
    //                 int t=arr[i];
    //                 arr[i]=arr[i+1];
    //                 arr[i+1]=t;
    //                 count++;
    //             }
            
    //     }
    //     else{
    //             if(arr[i]>arr[i+1]){
    //                 count--;
    //                 continue;
    //             }
    //             else{
    //                     int t=arr[i];
    //                 arr[i]=arr[i+1];
    //                 arr[i+1]=t;
    //                 count--;    
    //             }
                
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    

    //Q2
//     int n;
//     cout<<"ENTER TOTAL NUMBER OF ELEMENTS IN ARRAY"<<endl;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i <n; i++)
//     {
//         cin>>arr[i];
//     }
//     int t;
//     cout<<"Enter Desired Target"<<endl;
//     cin>>t;
//     bool check=false;
//    for (int i = 0; i < n-1; i++){
//     for (int j = i+1; j<n; j++)
//         if(arr[i]+arr[j]==t){
//             cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
//             check=true;
//         }
//     }
//     if (check==false)
//     {
//         cout<<"Pair not found"<<endl;
//     }
    

    return 0;
}

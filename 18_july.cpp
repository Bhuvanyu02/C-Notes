#include <iostream>
#include <string>
using namespace std;
int main()
{
    // float a[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<"ELEMENTS OF THE ARRAY ARE : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // int n;
    // cout<<"TOTAL NUMBER OF STUDENTS"<<endl;
    // cin>>n;
    // string arr[n];
    // int M[n];
    // int s[n];
    // int sst[n];
    // int e[n];
    // for (int i = 0; i < n; i++)
    // {
    //     int sum=0;
    //     cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
    //     getline(cin,arr[i]);
    //     cout<<"ENTER MARKS "<<endl;
    //     cin>>M[i]>>s[i]>>sst[i]>>e[i];
    //     sum=sum+M[i]+s[i]+sst[i]+e[i];
    //     cout<<"AVERAGE = "<<sum/4;
    // }

    // ENTER NAME OF STUDENT AND MARKS IN SUBJECT : ENG,MATH,SCIENCE,SST , DISPLAY AVERAGE-MARKS ALONG WITH FULL NAME

    // int n;
    // cout<<"ENTER TOTAL NUMBER OF ELEMENTS IN ARRAY"<<endl;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    //     // cout<<"ENTER NUMBER TO SEARCH"<<endl;
    // int s;
    // cin>>s;
    // int c=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s==arr[i])
    //     {
    //         cout<<"ELEMENT "<<s<<" found at "<<i<<" th Position"<<endl;
    //         c++;
    //         i=5;
    //     }
    //     else if(i==n-1 && c==0){
    //         cout<<"ELEMENT NOT PRESENT IN ARRAY"<<endl;
    //     }
    // }

    // LINEAR SEARCH

    // int n;
    // cout<<"ENTER TOTAL NUMBER OF ELEMENTS IN ARRAY"<<endl;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // int min;
    // int max;
    // min=max=arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i]<min)
    //     {
    //         min=arr[i];
    //     }
    //     else if (arr[i]>max){
    //         max=arr[i];
    //     }

    // }
    // cout<<"MIN IS "<<min<<" AND MAX IS "<<max<<endl;
    //  MIN AND MAX IN ARRAY

    // int n;
    // cout<<"ENTER TOTAL NUMBER OF ELEMENTS IN ARRAY"<<endl;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j< i; j++)
    //     {
    //         if (arr[j]>arr[i])
    //         {
    //             int t=arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=t;
    //         }

    //     }

    // }
    // cout<<"SORTED ARRAY IS ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // TO SORT ELEMENTS IN ARRAY EITHER ASCENDING

    //     int n;
    //     cout<<"ENTER TOTAL NUMBER OF ELEMENTS IN ARRAY"<<endl;
    //     cin>>n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin>>arr[i];
    //     }
    //    for (int i = n-1; i >=0; i--)
    //    {
    //         for (int j = n-1; j > i; j--)
    //         {
    //             if (arr[j]>arr[i])
    //             {
    //                 int t=arr[j];
    //                 arr[j]=arr[i];
    //                 arr[i]=t;
    //             }

    //         }
    //    }
    //        cout<<"SORTED ARRAY IS ";
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
    // REVERSE SORT

    int r, c;
    cout << "ENTER NUMBER OF ROWS AND COLUMNS" << endl;
    cin >> r >> c;
    int arr[r][c];
    int arr2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "ENTER VALUE FOR " << i << " ROW AND " << j << " COLUMN" << endl;
            cin >> arr[i][j];
        }
    }
    // cout << "ENTER FOR THE SECOND ARRAY" << endl;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << "ENTER VALUE FOR " << i << " ROW AND " << j << " COLUMN" << endl;
    //         cin >> arr2[i][j];
    //     }
    // }
    cout << "DISPLAYING ARRAY 1:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "ENTER THE OPERATION YOU WANT TO PERFORM  1: ADDITION     2:SUBTRACTION    3: DIAGONAL ELEMENTS" << endl;
    int ad;
    cin >> ad;
    if (ad == 1)
    {
        int sum[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                sum[i][j] = arr[i][j] + arr2[i][j];
            }
        }
        cout << "DISPLAYING SUM ARRAY :" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (ad == 2)
    {
        int dif[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                dif[i][j] = arr[i][j] - arr2[i][j];
            }
        }
        cout << "DISPLAYING DIFFERENCE ARRAY :" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << dif[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if(ad==3){
        cout<<"MAJOR DIAGONAL ELEMENTS : ";
        for (int i = 0,j=0; i < r,j<c; i++,j++)
        {
                if (i==j)
                {
                    cout<<arr[i][j]<<" ";
                }
            
        }
        cout<<"MINOR DIAGONALS ELEMENTS : ";
        int i=0,j=c-1;
        while (i!=r+1 && j!=-1)
        {
            cout<<arr[i][j]<<" ";
            i++;j--;
        }
        
        
    }

    //  DISPLAY THE MATRIX   ADD AND SUBTRACT
    return 0;
}

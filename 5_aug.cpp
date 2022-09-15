#include <iostream>
#include <string>
using namespace std;
int main()
{
    /// **** Cannot Create a OBJECT OF A ABSTRACT Class ****
    string h;
    cout << "ENTER THE STRING " << endl;
    getline(cin, h);
    string rev = "";
    int l = h.length();
    // for (int i = l - 1; i >= 0; i--)
    // {
    //     rev += h[i];
    // }
    // cout << "REVERSE IS " << rev << endl;

                                                          // 1) reverse a string

    // string next = "";
    // for (int i = 0; i < l; i++)
    // {

    //     if (char(h[i]) == ' ')
    //     {
    //         next += " ";
    //         continue;
    //     }
    //     else
    //     {
    //         next += h[i] + 1;
    //     }
    // }
    // cout << endl;
    // cout << "NEXT LETTER OF EACH ALPHABET IS " << next << endl;
                                                // 2)  replace every letter in string with next alphabet letter

    // string first = "";
    // first = h;
    // for (int i = 0; i < l - 1; i++)
    // {
    //     if (i == 0)
    //     {
    //         first[i] -= 32;
    //     }
    //     if (char(first[i - 1]) == ' ')
    //     {
    //         first[i] -= 32;
    //     }
    // }
    // cout << endl;
    // cout << "CAPITAL FIRST LETTER OF EACH WORD IS " << first << endl;
    // cout << endl;

                                  // 3)  capitalize the first letter of each word , seperated with a space

    int count = 0;
    int countarr[100];
    int carr = 0;
    int max = 0;
    string newmax="";
    for (int i = 0; i <= l; i++)
    {
        if (char(h[i]) == ' ' || i == l)
        {
            countarr[carr] = count;
            carr++;
            count = 0;
        }
        else
        {
            count++;
        }
    }
    for (int i = 0; i <= carr - 1; i++)
    {
        if (countarr[i] > max)
        {
            max = countarr[i];
        }
    }
    cout << "MAX NUMBER OF ALPHABETS IN A WORD IS " << max << endl;

    cout << endl;
                          // 4) largest word in the string

    // int countvowel = 0;
    // for (int i = 0; i < l; i++)
    // {
    //     if (h[i] == 'a' || h[i] == 'e' || h[i] == 'i' || h[i] == 'o' || h[i] == 'u' || h[i] == 'A' || h[i] == 'E' || h[i] == 'I' || h[i] == 'O' || h[i] == 'U')
    //     {
    //         countvowel++;
    //     }
    // }
    // cout << endl;
    // cout << "TOTAL NUMBER OF VOWELS ARE " << countvowel << endl;
    // cout << endl;

                      // 5) count all vowels in the string

    // if (rev == h)
    // {
    //     cout << "STRING IS PALINDROME" << endl;
    // }
    // else
    // {
    //     cout << "STRING IS NOT A PALINDROME" << endl;
    // }
    // cout << endl;
                // 6)  palindrome or not

        
                 // 7)  find a word in given string with highest repeated letters

    // string newh = h;
    // for (int i = 0; i < l; i++)
    // {
    //     int ascii = int(newh[i]);
    //     if (ascii <= 90 && ascii >= 65)
    //     {
    //         newh[i] = ascii + 32;
    //     }
    //     else
    //     {
    //         newh[i] -= 32;
    //     }
    // }
    // cout << "New string after changing Uppercase to Lowercase and vice-versa:" << endl;
    // cout << newh << endl;
    //     // 65-90 A-Z
        //  difference 32
         // 97-122 a-z
                        // 8) change uppercase to lowercase and vice-versa

    // string substr="abc";
    // bool check=false;
    // for (int i = 0; i < l-1; i++)
    // {
    //     for (int i1 = i+1; i1 < l; i1++)
    //     {
    //         string sub=h.substr(i,i1);
    //         if (sub==substr)
    //         {
    //             check=true;
    //             cout<<"YES STRING CONTAINS THIS SUBSTRING"<<endl;
    //         }
    //     }
        
    // }
    // if (check ==false)
    // {
    //     cout<<"NO SUBSTRING IS NOT A PART OF THE STRING"<<endl;
    // }
    
            // 9) whether a substring is part of a given string or not
    return 0;
}

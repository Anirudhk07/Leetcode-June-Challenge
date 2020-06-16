#include <iostream>
#include<cstring>
#define MAX 256 
using namespace std;

bool compare(char arr1[], char arr2[])  
{  
    for (int i=0; i<MAX; i++)  
        if (arr1[i] != arr2[i])  
            return false;  
    return true;  
}  
  
  
bool search(string pat, string txt)  
{  
    int M = pat.length(), N = txt.length();  
  
  
    char countP[MAX] = {0}, countTW[MAX] = {0};  
    for (int i = 0; i < M; i++)  
    {  
        (countP[pat[i]])++;  
        (countTW[txt[i]])++;  
    }  
  

    for (int i = M; i < N; i++)  
    {  

        if (compare(countP, countTW))  
           return true; 
  
        
        (countTW[txt[i]])++;  
  
       
        countTW[txt[i-M]]--;  
    }  
  

    if (compare(countP, countTW))  
        return true; 
        return false; 
}  
int main()  
{  
    string pat ,txt;
    cin>>pat>>txt;
    if (search(pat, txt)) 
       cout << "true"; 
    else
       cout << "false";
    cout<<endl;
    return 0;  
}
/*
Correct Answer.
Execution Time:0.08

Link: https://practice.geeksforgeeks.org/problems/reorganize-the-array/0

*/



#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

void fix(int A[],int len) 
{ 
    for (int i = 0; i < len; i++)  
    { 
        if (A[i] != -1 && A[i] != i)  
        { 
            int x = A[i]; 
  
            // check if desired place 
            // is not vacate 
            while (A[x] != -1 && A[x] != x)         //remove 2nd condition & check
            { 
                // store the value from 
                // desired place 
                int y = A[x]; 
  
                // place the x to its correct 
                // position 
                A[x] = x; 
  
                // now y will become x, now 
                // search the place for x 
                x = y; 
            } 
  
            // place the x to its correct 
            // position 
            A[x] = x;       //in case A[x] == -1;
  
            // check if while loop hasn't 
            // set the correct value at A[i] 
            if (A[i] != i)      //if u execute the above statement...
            { 
  
                // if not then put -1 at 
                // the vacated place 
                A[i] = -1;      //...it means u r exchanging places with -1
            } 
        } 
    } 
} 





int main() 
{ 

ios_base::sync_with_stdio(false);
cin.tie(NULL);   

int no_of_inputs,n;
cin >> no_of_inputs;

for (int i =0; i<no_of_inputs;i++)
{
    cin >> n;
    int arr[n];
    
    //cin >> r;
    //r %= n;

    for (int j =0; j<n;j++)
    {
        cin >> arr[j];
    
    }
    
    fix(arr,n);

    
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    
    
    cout << "\n";
}


return 0;     
}







/*
Correct Answer.
Execution Time:0.1

Link: https://practice.geeksforgeeks.org/problems/quick-left-rotation/0
*/


#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

void leftRotate(unsigned long long int arr[], unsigned long long int n,unsigned long long int r)
{
    for (unsigned long long int i = 0;i<n;i++)
    {
        r%=n;
        cout << arr[r] << " ";
        r++;
        
    }
    cout << "\n";
}




int main() 
{ 

ios_base::sync_with_stdio(false);
cin.tie(NULL);   

unsigned long long int no_of_inputs,n,r;
cin >> no_of_inputs;

for (unsigned long long int i =0; i<no_of_inputs;i++)
{
    cin >> n;
    unsigned long long int arr[n];
    
    cin >> r;
    //r %= n;

    for (unsigned long long int j =0; j<n;j++)
    {
        cin >> arr[j];
    
    }
    
    leftRotate(arr,n,r);
    
}

return 0;     
}

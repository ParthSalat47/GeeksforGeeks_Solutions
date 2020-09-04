/*
Correct Answer.
Execution Time:0.14

Link: https://practice.geeksforgeeks.org/problems/rotation/0
*/

#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int findPivot(unsigned long long int arr[], unsigned long long int n,unsigned long long int l,unsigned long long int r)
{
    
    if(l<=r)
    {
        unsigned long long int mid = l + (r-l)/2;
        
        if (arr[mid]>arr[mid+1])
            return mid+1;
        
        
        if (arr[r]<arr[mid])
        {
            return findPivot(arr,n,mid,r);
        }
        if (arr[mid]<arr[r])
        {
            return findPivot(arr,n,0,mid);
        }
    
        //to handle duplicates
        if (r!=0 && arr[r]<arr[r-1])
        {
            return r;
        }
        //else
            r-=1;
            return findPivot(arr,n,0,r);
    
    }
    
    return -1;
}







int main() 
{ 

ios_base::sync_with_stdio(false);
cin.tie(NULL);   

unsigned long long int no_of_inputs,n;
cin >> no_of_inputs;

for (unsigned long long int i =0; i<no_of_inputs;i++)
{
    cin >> n;
    unsigned long long int arr[n];
    

    for (unsigned long long int j =0; j<n;j++)
    {
        cin >> arr[j];
    
    }
    
    if (findPivot(arr,n,0,n-1) == -1)
        {                
            cout << "0" << "\n";
        }
    else
        cout << findPivot(arr,n,0,n-1) << "\n";

}
return 0;     
}

//Execution Time:0.19sec

#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[],int l,int r, int x)
{
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        
        if (arr[mid] == x)
            return 1;
            
        if (arr[mid] > x)
            r = mid -1;
            
        else 
            l = mid + 1;
        
    }
    
    return -1;

}





int main() 
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);   

int no_of_times;


cin >> no_of_times;

for (int i =0; i <no_of_times; i++)
{
     
    
	int n,r;
    cin >> n;
    cin >> r;
    
    int arr[n];

    for (int j = 0;j<n;j++)
    {
        cin >> arr[j];
    }
	
    cout << binarySearch(arr,0,n-1,r) << "\n";
    
    
    

}




return 0;     
}







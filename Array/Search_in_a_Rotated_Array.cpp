//Execution Time:0.1sec

#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 



int search(int arr[], int l, int r, int x)
{
    //if key not present
    if (l>r)
    {
        //cout<<"caught\n";
        return -1;
    }    
    int mid = (r+l)/2;
    
    if (arr[mid] == x)
        return mid;
        
    //if left subarray is sorted
    if (arr[l] <= arr[mid])
    {
        //find x in here
        if (x>=arr[l] && x<=arr[mid])
        {
            //printArray(arr,r);
            return search(arr,l,mid-1,x);       //don't forget to write return here
        }
        //find x in the right unsorted subarray
        else 
        {
            //printArray(arr,r);
            return search(arr,mid+1,r,x);   //don't forget to write return here
        }
    
    }
    
      //if right subarray is sorted
    else //(arr[r] > arr[mid])
    {
        //find x in here
        if (x>=arr[mid] && x<=arr[r])
        {
            //printArray(arr,r);
            return search(arr,mid+1,r,x);   //don't forget to write return here
        }
        //find x in the left unsorted subarray
        else 
        {
            //printArray(arr,r);
            return search(arr,l,mid-1,x);   //don't forget to write return here
        }
    
    }
    
    //cout << "last";
    return -1;
}





/*
1
9
5 6 7 8 9 10 1 2 3
10
*/












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
    
    
    int arr[n];

    for (int j = 0;j<n;j++)
    {
        cin >> arr[j];
    }
	cin >> r;
    
    
    cout << search(arr,0,n-1,r) << "\n";
    
    
    

}




return 0;     
}







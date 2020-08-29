// C++ program to rotate an array by 
// 1 element 
#include <bits/stdc++.h> 
using namespace std; 

void reverseArray(int arr[], int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


/*Function to right rotate arr[] of size n by 1*/
void rightRotate(int arr[], int d, int n) 
{ 
	//reverseArray(arr,0,d-1);
    reverseArray(arr,0,n-2);
    reverseArray(arr,0,n-1);
} 

/* utility function to print an array */
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
        
    cout << "\n";
} 

/* Driver program to test above functions */
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
/*	
    cin >> r;
    r= r%n;
*/  
    // Function calling 
	rightRotate(arr, 1, n); 
	printArray(arr, n); 
    

}
	return 0; 
} 

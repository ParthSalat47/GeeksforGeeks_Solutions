#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a,int b)
{
    if (b==0)
        return a;
    
    else 
        return gcd(b,a%b);

}

void leftRotate(int *arr, int r,int n)
{
    int gcd_value = gcd(n,r);
    
    for (int i = 0; i<gcd_value;i++)
    {
        int temp = arr[i];
        int j=i;
        int k;
        
        while(1)
        {
            k = j+r;
            
            if (k>=n)
                k-=n;   //so we can check the below condition
                
            if (k == i)     //all (j+d)'s  have been relocated except j - it'll be done just after break
                break;
            
            arr[j] = arr[k];
            j=k;
        
        }
    
        arr[j] = temp;
    
    }
  
}


void printArray(int *arr, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }

    cout<<"\n";

}



int main() 
{ 
    
ios_base::sync_with_stdio(false);
cin.tie(NULL);   

int no_of_times,n,r;
cin >> no_of_times;

for (int q = 0; q < no_of_times; q++)
{
        cin>>n;
        cin>>r;
        int arr[n];
        
        r%=n;   //to reduce iterations for r>n
        
        for ( int w = 0; w<n;w++)
        {
            cin >> arr[w];
        }
        
        
        leftRotate(arr,r,n);
        printArray(arr,n);
        
}

return 0;     
}








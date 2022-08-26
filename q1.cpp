//  Divyaamsh Bharat Verma
//  2010991538
//  Test 04
//  QUESTION 1

#include <bits/stdc++.h>
using namespace std;
 

void Repeating(int arr[], int n)
{
     
   
    int k = 0;
 
    
    int max = n;
    for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
 
    int a[max + 1] = {};
 

    int b[max + 1] = {};
 
    for (int i = 0; i < n; i++)
    {
     
       
        if (a[arr[i]])
        {
            b[arr[i]] = 1;
            k = 1;
            continue;
        }
        else
            
            a[arr[i]] = i+1;
    }
 
    if (k == 0)
        cout << "Invalid Input" << endl;
    else
    {
        int min = max + 1;
       
       
        for (int i = 0; i < max + 1; i++)
            if (a[i] && min > a[i] && b[i])
                min = a[i];
        cout << "The minimum index of the repeating element is "<< arr[min-1] << endl;
    }
    cout << endl;

}
 

int main()
{
    int n;
    cin >> n; 
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    
    try {
      if (n < 0)
      {
        throw n;
      }
   }
      catch (int p ) {
        cout << "Exception Caught \n";
        return 0;
   }

    Repeating(arr, n);
    return 0; 

}


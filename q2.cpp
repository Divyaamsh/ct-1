//  Divyaamsh Bharat Verma
//  2010991538
//  Test 04
//  QUESTION 2


#include <iostream>
#include <algorithm>
using namespace std;

int repeating(int *arr,int n){
             for(int i=0; i<n-1; i++){
                if(arr[i] == arr[i+1]){
                    return arr[i];
                }
             }
}

int main(){
        int n;
        cin>>n;
        int *arr = new int[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr,arr+n);
        int start = arr[0];

        int flag = 0;
        int repeat = 0;
        for(int i=0; i<n; i++){
            if(arr[i] != start){
               flag = 1;
               repeat = repeating(arr,n);
               break; 
            }
        }

        if(flag == 0){
            cout << "The array contain consecutive integers from " << arr[0] << " to " << arr[n-1] << endl;
        }
        else{
            cout << "The array does not contain consecutive integers as element " << repeat << "is repeated" << endl;
        }

         return 0;
}
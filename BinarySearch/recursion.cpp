/* find the specified number using the binary search technique inside the recursion method. */  
#include <iostream>  
using namespace std;  
// define a function  
int binary_search (int [], int, int, int);  
int main ()  
{  
    // declaration of the variables  
    int i, arr[100], tgt, num, ind, st, end;  
    cout << " Define the size of an array: ";  
    cin >> num;     
    cout << " Enter " << num << " elements in ascending order: " << endl;  
    // use for loop to ieterate the number  
    for ( i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
    // define the element to be search  
    cout << " \n Enter an element to be searched in ascending array: ";  
    cin >> tgt;     
    // ind define the index number  
    ind = binary_search (arr, 0, num - 1, tgt);   
    // check for existemce of the specified element  
    if (ind == 0)  
        cout << tgt << " is not available in the array-list";     
    else  
        cout << tgt << " is available at position " << ind << endl;  
    return 0;  
}  
// function defnition  
int binary_search (int arr[], int st, int end, int tgt)  
{  
    int mid;  
    // check st is greater than end  
    if (st > end)  
    {  
        return 0;  
    }  
    mid = (st + end) / 2; // get middle value of the sorted array  
      
    // check middle value is equal to target number  
    if (arr[mid] == tgt)  
    {  
        return (mid + 1);  
    }  
    // check mid is greater than target number  
    else if (arr[mid] > tgt)  
    {  
        binary_search (arr, st, mid - 1, tgt);  
    }  
    // check mid is less than target number  
    else if (arr [mid] < tgt)  
    {  
        binary_search (arr, mid + 1, end, tgt);  
    }  
}  
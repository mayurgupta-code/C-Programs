// Name: Mansi garg
// Roll no.: 195066
#include "bits:stdc++.h"
#include <iostream>

using namespace std;

int main()
{
    int size, n_request,position;
    cout << "Enter the Size of Disk\n";
    cin >> size;
    
    cout << "Enter the Number of request\n";
    cin >> n_request;
    
    vector <int> arr1(n_request) , arr2; 
    cout << "Enter the Requests\n";
    
    for(int i =0 ; i< n_request; i++)
    {
        cin >> arr1[i];
    }
    
    cout << "Enter the head position:\n";
    cin >> position;
    

    arr1.push_back(position);
    sort(arr1.begin() ,arr1.end());
    
    int j =0;
    for(j = 0;  j < arr1.size() ; j++ )
    {
        if(position == arr1[j])
        {
            break;
        }
    }
    
    int k = j;
    string dir; 
    cout << "Enter the direction : Right or Left \n";
    cin >> dir;
    
    if(dir == "Right") // Moving Upward In the Disk
    {
        for( j = k;  j < arr1.size() ; j++)
        {
            arr2.push_back(arr1[j]);
        }
        
        for(j = 0;  j < k; j++)
        {
            arr2.push_back(arr1[j]);
        }
    }
    
    else if(dir == "Left") // Moving Downward in the disk
    {
        for( j = k;  j >= 0 ; j--)
        {
            arr2.push_back(arr1[j]);
        }
        
        for(j = arr1.size() -1;  j >k; j--)
        {
            arr2.push_back(arr1[j]);
        }
        
    }
    else {
        cout << "Choose Correct Direction\n";
    }
    
    
    int temp_pos = arr2[0];
    cout << temp_pos ;
    int sum = 0;
    
    for(int i =1;  i< arr2.size(); i++ )
    {
        cout << "->" << arr2[i] << " ";
        sum+= abs(arr2[i] - temp_pos);
        temp_pos = arr2[i];
        
    }
    
    cout << "\n";
    cout << "Total head movements "<< sum << "\n";
    return 0;
    
}
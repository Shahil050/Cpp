//  LINEAR SEARCH   METHOD-I

#include<iostream>
using namespace std;

int main(){
    int arr[20],size,key,i,index;
    cout<<"Number of elements in the list:";
    cin>>size;
    cout<<"Enter elements of the list:";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Enter the elements to search i.e key elements:";
    cin>>key;
    for(index=0;index<size;index++)
    if(arr[index]==key)
    break;
    if(index<size)
    cout<<"key element found at index"<< index;
    else
    cout<<"key element not found;";
    return 0;
}
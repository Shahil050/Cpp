//QUICKSHORT ALGORITHM
#include<iostream>
using namespace std;
void print_aray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
        cout<<"\t";
    }
}
int partition(int A[],int low,int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    do{ 
        while(A[i]<=pivot){
            i++;
        }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    }
    while(i<j);


    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quicksort(int A[],int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(A,low,high);
        quicksort(A,low,partitionIndex-1);//sort left subarray
        quicksort(A,partitionIndex+1,high);//sort right subarray
        
    }
}
int main(){
    int A[]={9,4,4,8,7,5,6};
    int n=7;
    cout<<"Before sorting array elements:-"<<endl;
    print_aray(A,n);
    cout<<endl;
    cout<<"Array sorting in decending order"<<endl;
    quicksort(A,0,n-1);
    print_aray(A,n);
    return 0;
}
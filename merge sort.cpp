//MERGE SORT BY RECURSSION AND CALCULATING SORTING TIME

#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;


    int L[n1], R[n2];


    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    int i = 0;


    int j = 0;


    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}


void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}


int main()
{
   int n;
cout<<"Enter the size of array-";
cin>>n;
int arr[n];
    srand(time(0));
for(int i=0;i<n;i++){
    arr[i]=rand()%n;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
auto start = std::chrono::system_clock::now();
    mergeSort(arr, 0, n-1);
auto end = std::chrono::system_clock::now();
 auto elapsed = end - start;
    cout << "\nSorted array is \n";
    printArray(arr,n);
    cout<<endl;
std::cout <<"time taken is "<< elapsed.count() << '\n';
    return 0;
}

//INSERTION SORT BY RECURSSION AND CALCULATE SORTING TIME

#include <bits/stdc++.h>
#include<chrono>
using namespace std;
  using namespace std::chrono;

void insertionSortRecursive(int arr[], int n)
{
    if (n <= 1)
        return;


    insertionSortRecursive( arr, n-1 );


    int last = arr[n-1];
    int j = n-2;


    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
        cout << arr[i] <<" ";
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
    insertionSortRecursive(arr, n);
    auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end - start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(end);
   cout<< "Sorted array is-";
    printArray(arr, n);
cout<<endl;
    std::cout<< "Time taken : " << elapsed_seconds.count() << "s\n";
    return 0;
}


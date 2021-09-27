// BUBBLE SORT BY RECURSION
#include<bits/stdc++.h>
#include<chrono>
 using namespace std;
 using namespace std::chrono;


 void bubblesort(int a[], int len){
 int i;

 if(len==1){
    return;}

 for(i=0;i<len-1;i++){
   if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
 }
 bubblesort(a,len-1);
 }

 void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
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
bubblesort(arr,n);
auto end = std::chrono::system_clock::now();

std::chrono::duration<double> elapsed_seconds = end - start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(end);

cout<< "Sorted array is-";
    printArray(arr, n);

    std::cout<< "Time taken : " << elapsed_seconds.count() << "s\n";

    return 0;
}



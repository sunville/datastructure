#include <iostream>

using namespace std;

void swap(int*arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int* arr, int start, int end, int pivot_index){
	/*take the last one as pivot*/
	swap(arr,pivot_index,end);
	int pivot = arr[end];
	int i=start - 1;
	for(int j=start;j<end;j++){
		if(arr[j] <= pivot){
			i++;
			swap(arr,i,j);
		}
	}
	i++;
	swap(arr,i,end);
	return i;
}

void qsort(int* arr, int start, int end){
	if(start < end){
		int pivot_index = (start + end)/2;
		int pi = partition(arr,start,end,pivot_index);

		qsort(arr,start,pi-1);
		qsort(arr,pi+1,end);
	}
}

void printarray(int* arr,int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}	

int main(int argc, char const *argv[])
{
	int array[] = {4,42,5,7,2,61,21,41,52,25};
	qsort(array,0,9);
	printarray(array,10);
	return 0;
}
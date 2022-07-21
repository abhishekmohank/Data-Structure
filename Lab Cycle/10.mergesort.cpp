#include <iostream>
using namespace std;

void merge(int* array,int begin,int mid,int end)
{
	int i,j,k;
	int sortedArray[end];
	i = begin;
	j = mid+1;
	k = begin;
	while (i<=mid and j<=end){
		if (array[i]<=array[j]){
			sortedArray[k] = array[i];
			i++;
		}
		else{
			sortedArray[k] = array[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<=end){
			sortedArray[k] = array[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			sortedArray[k] = array[i];
			i++;
			k++;
		}
	}
	for (int var = begin; var <= end; ++var)
     {
		array[var] = sortedArray[var];
	}
}


void mergeSort(int* array,int begin,int end)
{
	if(begin==end){
		return;
	}
	int mid = (begin+end)/2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid+1, end);
	merge(array,begin,mid,end);
}


void printArray(int* data,int length)
{
	for (int var = 0; var < length; ++var) 
    {
		cout<<data[var]<<" ";
	}
	cout<<endl;
}

int main() {
	int array[] = {65,51,7,2,8,71,1};
	int length = sizeof(array)/sizeof(array[0]);
	mergeSort(array, 0,length-1);
	printArray(array,length);
	return 0;
}

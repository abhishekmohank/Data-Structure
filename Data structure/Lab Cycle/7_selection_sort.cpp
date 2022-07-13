#include<iostream>
using namespace std;
void selection_sort(int arr[],int no_element)
{
    int temp;
    for(int i=0;i<no_element-1;i++)
    {
        for(int j=i+1;j<no_element;j++)
        {
            if (arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<no_element;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int array[7]={3,2,8,1,7,17,20};
    cout<<"Before selection sort : "<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"After selection sort : "<<endl;
    selection_sort(array,7);
    return 0; 
}
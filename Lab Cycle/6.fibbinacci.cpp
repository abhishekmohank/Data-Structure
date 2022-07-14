#include<iostream>
using namespace std;

int fibb(int arr[], int n, int item)
{
    int loc = 0;
	int f2 = 0, f1 = 1;
	int fb = f1 + f2;
    int offset = -1;

    // cout<<"data : \n";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
	
	while(fb < n)
    {
		f2 = f1;
		f1 = fb;
		fb = f1 + f2;
        //cout<<fb<<" ";
	}
	
	while(fb > 1){
        int i = offset + f2;
        if(arr[i] < item){
            //cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";
            fb = f1;
            f1 = f2;
            f2 = fb - f1;
            offset = i;

        }
        
        else if(arr[i] > item){
            cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";
            fb = f2;
            f1 = f1 - f2;
            f2 = fb - f1;
            //cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";
        }
        else{
            //loc = i;
            return i;

        }
    }

    if(fb == 1 && arr[offset + 1] == item){
        loc = offset + 1;
        return loc;
    }

    loc = -1;
    return loc;
	
}


int main(){
	
	int n, item;
    
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"DATA : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element to be searched : ";
    cin>>item;
    cout<<"\nITEM : "<<item;

    cout<<"\nResult : "<<fibb(arr,n,item) + 1;
	
	
	return 0;
	

}
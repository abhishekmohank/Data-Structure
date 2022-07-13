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
	
	while(fb < n){
		f2 = f1;
		f1 = fb;
		fb = f1 + f2;

        //cout<<fb<<" ";

	}
	
	while(fb > 1)
    {
        int i = offset + f2;
        if(arr[i] < item)
        {

            //cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";

            fb = f1;
            f1 = f2;
            f2 = fb - f1;
            offset = i;

        }
        
        else if(arr[i] > item)
        {
            
            //cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";

            fb = f2;
            f1 = f1 - f2;
            f2 = fb - f1;

            //cout<<fb<<"  "<<f1<<" "<<f2<<" "<<i<<"\n";

        }
        else
        {

            //loc = i;

            return i;

        }
    }

    if(fb == 1 && arr[offset + 1] == item)
    {
        loc = offset + 1;
        return loc;
    }

    loc = -1;
    return loc;
	
}


int main()
{
	
	int n = 12, item;
	int arr[12] = {1, 2, 3, 4, 5, 60, 70, 82, 95, 100, 110, 125};
	
	cout<<"\nEnter the searching element : ";
	cin>>item;

    cout<<"Result : "<<fibb(arr,n,item);
	
	
	return 0;
	

}
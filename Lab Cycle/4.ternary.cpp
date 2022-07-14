#include <iostream>
using namespace std;

void ternarySearch(int DATA[], int n){

    int ITEM, LOC, BEG, END, MID1, MID2;

    cout << "Enter the searching element : ";
    cin >> ITEM;

    BEG = 0;
    END = n-1;
    LOC = -1;

    while(BEG<=END)
    {
        MID1 = (END - BEG)/3 + BEG;
        MID2 = (2*(END - BEG)/3) + BEG;

        if(ITEM == DATA[MID1])
        {
            LOC = MID1;
            cout << "\nItem found at position " << MID1 + 1;
            break;
        }
        else if(ITEM == DATA[MID2])
        {
            LOC = MID2;
            cout << "\nItem found at position "<< MID2 + 1;
            break;
        }
        else if(ITEM < DATA[MID1])
        {
            END = END -1;
        }
        else if(ITEM > DATA[MID2])
        {
            BEG = MID2 +1;
        }
        else{
            BEG = MID1+1;
            END = MID2-1;
        }

    }
    
    if(LOC==-1)
    {
        cout<<"\nItem not found";
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;
    int* DATA = new int [n];
    cout << "Entert the elememnts\n";
    for(int i=0; i<n; i++)
    {
        cin >> DATA[i];
    }

    ternarySearch(DATA,n);
    
    return 0;
}
#include<iostream>
using namespace std;
class matrix
{
    int **p;
    int row,col,num_values;
public:
    matrix()
    {}
    void input_matrix(void)
    {
        cout<<"Enter the elements of the "<<row<<"*"<<col<<" matrix : "<<endl;
        for(int i=1;i<num_values;i++)
        {
            for(int j=1;j<col;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    void display_matrix(void)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix(int r,int c,int num_values)
    {
        row=r,col=c;
        p=new int *[num_values+1];
        for(int i=0;i<row;i++)
        {
            p[i]=new int [3];
        }
        p[0][0]=row;
        p[0][1]=col;
        p[]

    }
};
int main()
{
    return 0;
}
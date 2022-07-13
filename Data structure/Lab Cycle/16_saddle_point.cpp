#include<iostream>
using namespace std;

//Saddle Point = row min and column max

class matrix
{
    int col,row;
    int **p;
public:
    matrix()
    {}
    matrix(int r,int c)
    {
        row=r;
        col=c;
        p=new int* [row];
        for(int i=0;i<row;i++)
        {
            p[i]=new int [col];
        }
    }
    void input_element(void)
    {
        cout<<"The matrix is a "<<row<<"x"<<col<<endl;
        cout<<"Enter the elements of matrix : "<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    void display(void)
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
    void saddle_point(void)
    {
        int x_co=0,y_co=0;
        for(int i=0;i<row;i++)
        {
            int r_min=p[i][0];
            for(int j=0;j<col;j++)
            {
                if(p[i][j]<r_min)
                {
                    r_min=p[i][j];
                    y_co=j;
                }
            }
            int col_max=p[0][y_co];
            for(int k=0;k<row;k++)
            {
                if(p[k][y_co]>col_max)
                {
                    col_max=p[k][y_co];
                    x_co=k;
                }
            }
            if(col_max==r_min)
            {
                cout<<"The element found at ("<<x_co<<","<<y_co<<") and element is "<<col_max<<endl;
                return;
            }
        }
    }
};

int main()
{
    
    matrix A(3,3);
    cout<<endl;
    A.input_element();
    A.display();
    A.saddle_point();
    return 0;

}
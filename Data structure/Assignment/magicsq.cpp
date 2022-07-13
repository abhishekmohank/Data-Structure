#include<iostream>
using namespace std;
class matrix{
    int **p;
    int row,column;
    public:
    matrix(){}
    matrix(int d1,int d2){
        row=d1;
        column=d2;
        p=new int*[d1];
        for(int i=0;i<d1;i++){
            p[i]=new int[d2];
        }
    }
    void get_element(void){
        int temp;
        cout<<"Enter the elements : "<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cin>>temp;
                p[i][j]=temp;
            }
        }
    }
    void show_matrix(void){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void magic_odd(){
        matrix temp(3,3);
        int r=1;
        int c=2;
        int i=1;
        int count=9;
        while(i<=count){
            cout<<"Time "<<i<<endl;
            cout<<"1 : "<<"r = "<<r<<" c = "<<c<<endl;
            if(i!=1){
                r=r-1;
                c=c+1;
            }
            if(c>=3 and r<0){
                r=r+1;
                c=c-2;
            }
            if(c>=3){
                c=c-3;
            }
            if(r<0){
                r=3+r;
            }
            cout<<"2 : "<<"r = "<<r<<" c = "<<c<<endl;
            temp.p[r][c]=i;
            i=i+1;
            
        } 
        temp.show_matrix();
    }
};
int main(){
    matrix magic,a(3,3);
    // a.get_element();
    a.magic_odd();
    return 0;
}
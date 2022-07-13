#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node* left_link;
    node* right_link;
    node()
    {
        info=0;
        left_link=NULL;
        right_link=NULL;
    }
    node(int num)
    {
        info=num;
        left_link=NULL;
        right_link=NULL;
    }
};
class linked_list
{
    node* start;
    node* end;
    node* header=new node();
public:
    linked_list()
    {
        start=header;
        end=header;
    }
    void insert_node(int value)
    {
        node* new_node=new node(value);

        // cout<<"Constructed";

        if(header->right_link and header->left_link ==NULL)
        {
            header=new_node;
            return;
        }
        node* ptr=header;
        while (ptr->right_link!=NULL)
        {
            ptr=ptr->right_link;
        }

        ptr->right_link=new_node;
        new_node->left_link=ptr;
        new_node->right_link=NULL;
    }

};
int main()
{

    return 0;
}
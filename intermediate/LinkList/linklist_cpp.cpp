#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL,*ptr,*cur;
//Insertion of Element in the beginning
void insert_begin(int n)
{
    ptr= new node;
    ptr->data=n;
    ptr->next=NULL;

    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
}
//Insertion of element in the end
void insert_end(int n)
{
    ptr= new node;
    ptr->data=n;
    ptr->next=NULL;

    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
    {
        while(cur->next!=NULL)
            cur=cur->next;

        cur->next=ptr;
        cur=ptr;
    }
}
//Insertion of element at a given position
void insert_mid(int n,int pos)
{
    ptr=new node;
    ptr->data=n;
    ptr->next=NULL;

    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        cur=top;
        int i=1;
        while(i+1!=pos)
        {
            cur=cur->next;
            i++;
        }
        ptr->next=cur->next;
        cur->next=ptr;
    }
}
//Delete element at the beginning
void delete_begin()
{
    if(top==NULL)
        cout<<"\nLIST IS EMPTY";
    else
    {
        ptr=top;
        top=top->next;
        delete ptr;
    }
}
//Delete a element at the end
void delete_end()
{
    if(top==NULL)
        cout<<"\nLIST IS EMPTY";
    else
    {
        cur=top;
        while(cur->next->next!=NULL)
        {
            cur=cur->next;
        }
        ptr=cur->next->next;
        cur->next=NULL;
        delete ptr;
    }
}
//Delete element at a given position
void delete_mid(int pos)
{
    if(top==NULL)
        cout<<"\nLIST IS EMPTY";
    else
    {
        cur=top;
        int i=1;
        while(i+1!=pos)
        {
            cur=cur->next;
            i++;
        }
        ptr=cur->next;
        cur->next=ptr->next;
        delete ptr;
    }
}
//Print at elements of Link
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
//Reverse Existing LinkList
void reverse_list()
{
    node *ptr1,*var;
    ptr=top;
    var=NULL;

    while(ptr!=NULL)
    {
        ptr1=var;
        var=ptr;
        ptr=ptr->next;
        var->next=ptr1;
    }
    top=var;
}
//Sort LinkList
void sort_bubble()
{
    node *ptr1,*ptr2;
    ptr1=top;
    while(ptr1!=NULL)
    {
        ptr2=ptr1;
        while(ptr2!=NULL)
        {
            if(ptr1->data>ptr2->data)
            {
                int temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}

int main()
{
   int ch,n,pos;
   char choi;
   do
   {
       cout<<"1.Insert data in beginning";
       cout<<"\n2.Insert data in end";
       cout<<"\n3.Insert data in middle";
       cout<<"\n4.Delete data beginning";
       cout<<"\n5.Delete data end";
       cout<<"\n6.Delete data from middle";
       cout<<"\n7.Bubble sort data";
       cout<<"\n8.Reverse";
       cout<<"\n9.Display\n";
       cin>>ch;
       if(ch==1)
       {
           cout<<"Enter data->";
           cin>>n;
           insert_begin(n);
       }
       else if(ch==2)
       {
           cout<<"Enter data->";
           cin>>n;
           insert_end(n);
       }
       else if(ch==3)
       {
           cout<<"Enter data & position->";
           cin>>n>>pos;
           insert_mid(n,pos);
       }
       else if(ch==4)
       {
           delete_begin();
       }
       else if(ch==5)
       {
           delete_end();
       }
       else if(ch==6)
       {
           cout<<"Enter position to delete data->";
           cin>>pos;
           delete_mid(pos);
       }
       else if(ch==7)
       {
           sort_bubble();
       }
       else if(ch==8)
       {
           reverse_list();
       }
       else if(ch==9)
       {
           display();
       }
       cout<<"\nDo you want to contd(y/n)->";
       cin>>choi;
   }while(choi=='y');

   return 0;
}

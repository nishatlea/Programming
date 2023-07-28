#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* link;
};

node* head = NULL ,*temp ;

int insertion(int item)
{
    node *ptr = new node();
    ptr->data = item;
    ptr->link = NULL;

    if(head == NULL)
        {head = ptr;
         temp = ptr;
        }
    else
    { temp->link = ptr;
      temp = ptr;

    }


}

int main()
{
    int n,i,data;
cout<<"Enter Data : "<<endl;
cin>>n ;
for(i=0;i<n;i++)
{
    cin>>data;
    insertion(data);
}


node *str, *check ;
str = head;
while(str!= NULL )
{
    cout<<str->data<<endl;
    str = str->link;
}

}

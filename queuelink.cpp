#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class List
{
    private:
        struct node *fro, *rer;
    public:
        List()
        {
            fro=NULL;
            rer=NULL;
        }
        node* cnode(int num)
        {
            struct node *temp;
            temp=new (struct node);
            temp->data=num;
            temp->next=NULL;
            return temp;
        }
        void enqueue(int num)
        {
            struct node *temp;
            temp=cnode(num);
            if(rer==NULL)
            {
            	fro=temp;
            	rer=temp;
            }
            else
            {
                rer->next=temp;
                rer=rer->next;
            }
        }

        void dequeue(int num)
        {
        	struct node *a, *b;
  			fro=fro->next;

        }

        void display()
        {
            struct node *temp;
            temp=fro;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main()
{
    List l;
    int ch,a;
    while(1)
    {
    cout<<"Enter the choice \n 1. Enqueue \n 2. Dequeue \n 3. Display the elements \n";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	cout<<"Enter the element to insert \n";
    	cin>>a;
    	l.enqueue(a);
    	break;
    	case 2:
    	l.dequeue(a);
    	break;
    	case 3:
    	l.display();
    	break;
    	default:
    	return 0;
    }
	}
}

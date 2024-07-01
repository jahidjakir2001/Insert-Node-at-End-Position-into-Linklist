

                               /********************************************************************************
                                * *   IN THE NAME OF ALLAH  ,  BISMILLAHIR RAHMANIR RAHIM**
                                *********************************************************************************/
            /**.....................................আল্লাহ্ ব্যাতিত কোন মাবুদ নাই.......................**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s="abcdefghijklmnopqrstuvwxyz";
struct node
{
      int data;
      struct node *next;
};
void Traverse(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
//Insert New Node at End Position
struct node *InsrtNodeatEnd(struct node *head,int value)
{
      struct node *ptr=NULL,*p=NULL;
      ptr=(struct node *)malloc(sizeof(struct node));
      p=(struct node *)malloc(sizeof(struct node));
      ptr=head;
      while(ptr->next!=NULL)
      {
            ptr=ptr->next;
      }
      p->data=value;
      p->next=NULL;
      ptr->next=p;
      return head;
}
int main()
{
     struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
     //Dynamic memory allocation
     head=(struct node *)malloc(sizeof(struct node));
     first=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     //Value assign and  Create link List
     head->data=10;
     head->next=first;
     first->data=20;
     first->next=second;
     second->data=30;
     second->next=third;
     third->data=40;
     third->next=NULL;
     //Traverse Node Left to Right
     cout<<"Traverse node before insert new Node:"<<endl;
     Traverse(head);
     head=InsrtNodeatEnd(head,60);
     cout<<"Traverse node after insert new Node at End:"<<endl;
     Traverse(head);
}



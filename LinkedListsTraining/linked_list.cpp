#include "linked_list.hpp"

linked_list::linked_list(int A[],int n){
        int i;
        length = n;
        Node *t, *last;
        first = new Node;
        
        //assigning class note to be data point 0 and no next nod yet (null)
        first->data=A[0];
        first->next=NULL;
        
        last = first;
        for(i=1;i<n;i++){
            t=new Node;
            t->data=A[i]; 
            t->next=NULL;
            last->next=t;
            last=t;
        }
    }

linked_list::~linked_list()
{
}

void linked_list::display(){
    Node *p = first;
    while (p != NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

double linked_list::sum(){
    Node *p = first;
    double nsum{0};
    while (p != NULL){
        nsum+= p->data;
        p=p->next;
    }
    return nsum;
}

void linked_list::insert(int position, int number){
    if (position < 0 || position > length){
        return;
    }
    Node *instd, *p = first;
    instd = new Node;
    instd->data = number;
    instd->next = NULL;
    
    if(position == 0){
        instd->next = p->next;
        first = instd;
    }
    else{
        for(int i{0};i<position-1;i++){
            p=p->next;
        }
        instd->next = p->next;
        p->next = instd;
    }
}

void linked_list::ndelete(int position){
    if (position < 0 || position > length){
        return;
    }
    Node *del, *p = first;
    del = new Node;
    if (position == 0){
        p=p->next;
        first = p;
        delete p;
    }
    else{
        for(int i{0};i<position;i++){
            del=p;
            p = p->next;
//            cout<<p->data<<del->data<<"AND";
        }
        del->next = p->next ;
        delete del;
    }
}
void linked_list::remove_dups(){
    Node *p = first;
    Node *g = first;
    while(p!=NULL){
        int x = 0;
        g = new Node;
        g = first;
        Node *remove = first;
        while (g!=NULL){
            if(p->data == g->data){
                x++;
            }
            
            if(x>1){
                remove = new Node;
                remove = p;
                p = p->next;
                remove->next = p->next;
                delete remove;
                x--;
            }
            g = g->next;
        }
        p = p->next;
    }
}
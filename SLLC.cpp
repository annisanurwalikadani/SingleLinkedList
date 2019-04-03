#include <iostream>
#include <stdlib.h>
using namespace std;

struct data{
	int x;
	struct data* next;
} *head=NULL, *baru, *tail;

//tambahDepan
void tambahDepan(int x){
    baru= (struct data*) malloc (sizeof(struct data));
    baru->x = x;
    if (head==NULL){
        head=tail=baru;
    }else{
    baru->next = head;
    head=baru;
    }
    tail->next = NULL;
}

//tambahbelakang
void tambahBelakang(int x){
	baru= (struct data*) malloc(sizeof(struct data));
	baru->x=x;
	if(head==null){
		head=tail=baru;
	}else{
		tail->next=baru;
		tail=baru;
	}
	tail->next=null;
}
//hapusdepan
void hapusDepan(int x){
    if (head!=NULL){
        if (head==tail){
            free(head);
            head=NULL;
        }else{
            baru=head;
            head=head->next;
            free(baru);
        }
    }
}


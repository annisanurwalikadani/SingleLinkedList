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

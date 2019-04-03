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
//tambahNodeTertentu

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
//hapusBelakang
void hapusBelakang(int x){
	if (head!=NULL){
		if(head==tail){
			free(head);
			head=NULL;
		}
		else{
			baru=head;
			while(baru->next!=tail){
				baru=baru->next;
			}
			free(tail);
			tail=baru;
			tail->next=NULL;
		}
	}
}

//hapusNodeTertentu

//MenampilkanData

int main(){
	
    hapusDepan(7);
	
	
	
	
	
	
	
	
	cout<<"          ================================================="<<endl;
	cout<<"          =.........Tugas Pemrograman Terstruktur.........="<<endl;
	cout<<"          ================================================="<<endl;
	cout<<"          =                                                ="<<endl;
	cout<<"          =  Nama :  Suci Hikmawati        (1817051033)    ="<<endl;
	cout<<"          =          Annisa Nurwalikadani  (1817051037)    ="<<endl;
	cout<<"          =          Syela Septania        (1817051058)    ="<<endl;
	cout<<"          =          Rika Ningtias Azhari  (1817051073)    ="<<endl;
	cout<<"          =                                                ="<<endl;
	cout<<"          =================================================="<<endl;
	cout<<endl<<endl<<endl<<endl;
    
    
    lihatLL();
    return 0;
}

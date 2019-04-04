#include <iostream>
#include <stdlib.h>
using namespace std;

struct data{
	int x;
	struct data* next;
} *head=NULL, *baru, *tail,new node;

//tambahDepan
void tambahDepan(int x){
    baru= (struct data*) malloc (sizeof(struct data));
    baru->x = x;
    if (head==NULL){
        head=tail=baru;
    }
	else{
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
	}
	else{
		tail->next=baru;
		tail=baru;
	}
	tail->next=null;
}

//tambahTengah
void tambahTengah(int dataBaru, int dataSebelum){
	data *nodeBaru, *bantu, *batas;
	int cek = 1;
	nodeBaru = new data;
	nodeBaru->x = dataBaru;
	nodeBaru->next = nodeBaru;
	bantu = head;
	if(head->x==dataSebelum){
		nodeBaru->next = head;
		head = nodeBaru;
		tail->next = head;
		cout << "Data Baru Masuk\n";
	}
	else{
		while((bantu->next)->x!=dataSebelum){
			bantu = bantu->next;
			if(bantu==tail){
				cek = 0;
				break;
			}
		}
		if(cek==0)
			cout << "data tidak ditemukan\n";
		else{
			batas = bantu->next;
			bantu->next = nodeBaru;
			nodeBaru->next = batas;
		}
	}
}

//hapusdepan
void hapusDepan(int x){
    if (head!=NULL){
        if (head==tail){
            free(head);
            head=NULL;
        }
	    else{
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
	
//hapusTengah
void hapusTengah(int x){
	data *hapus = new data;
	data *bantu = new data;
	hapus = head;
	for(int i=1; i<x; i++){
		bantu = hapus;
		hapus = hapus->next;
	}
	bantu->next = hapus->next;
}

//MenampilkanData
void lihatLL(){
    baru=head;
    while(baru!=NULL){
        cout<<baru->x;
        baru=baru->next;
    }
    cout<<"\n";
}

int main(){
	tambahDepan(7);
    	tambahDepan(6);
    	tambahBelakang(8);
    	tambahDepan(5);
    	tambahBelakang(9);
    	tambahBelakang(10);
    	tambahBelakang(11);
    	hapusDepan(7);
    	hapusBelakang(11);
    	tambahTengah(3,9);
	
	cout<<"          =================================================="<<endl;
	cout<<"          =.........Tugas Pemrograman Terstruktur..........="<<endl;
	cout<<"          =================================================="<<endl;
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

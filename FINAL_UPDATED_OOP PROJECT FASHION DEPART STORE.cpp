#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
float total = 0;
int bct = 0;
//char v, lu, ll, ru, rl, oluc, oruc, ollc, orlc, ovl, ohl, old, ord;
	char h=196;
	char v=179;
	char lu=218;
	char ll=192;
	char ru=191;
	char rl=217;
	char oluc = 201;
	char oruc = 187;
	char ollc = 200;
	char orlc = 188;
	char ovl = 186;
	char ohl = 205;
	char old = 199;
	char ord = 182;
	char mdl = 204;
	char mdr = 185;
	char lg = 177;
	
int menu();
using namespace std;
class department{
	private:
		int quant,b_quant;
		char item_name[100];
		float price,amount;
		char code[20];
		int S_NO;
	public:
		department();
		getdata();
		add_data();
		display_all();
		showgood_data();
		search_product();
		delete_item();
		edit_item();
		get_bill();
		write_bill();
		print_bill();
		delete_file();
};
department::department(){
	quant=0;
	strcpy(item_name,"no item name");
	price=0.0;
	strcpy(code,"no code");
	S_NO=0;	
}
department::getdata(){	
	cout<<"\t\t";
	cout<<"\n\n\t\t\t\t\tSERIAL #  : ";
 	cin>>S_NO;
  	cout<<"\n\n\t\t\t\t\tCODE      : ";
  	cin>>code;
  	cout<<"\n\n\t\t\t\t\tNAME      : ";
  	cin>>item_name;
	cout<<"\n\n\t\t\t\t\tPRICE(Rs.): ";
  	cin>>price;	
	cout<<"\n\n\t\t\t\t\tQUANTITY  : ";	
  	cin>>quant;
	cout<<"\n\n\n\t\t\t\t\tNEW ITEM/PRODUCT ADDED SUCCESSFULLY\n\n";	
}
department::showgood_data(){
 /*	cout<<"\n\n\t\t";
  	cout<<"\t\t  ********************  ITEM INFO IS  **********************\n\t\t\t\t  ==========================================================\n\n";
  	cout<<"\t\t\t\t  ";
 	cout<<"serial number of item="<<S_NO;
  	cout<<"\n\t\t\t\t  code of item="<<code;
  	cout<<"\n\t\t\t\t  name of item="<<item_name;
  	cout<<"\n\t\t\t\t  price of item="<<price; 
 	cout<<"\n\t\t\t\t  quantity of item="<<quant; 
 	
 	*/
 	
 	cout<<"\n\t\t\t"<<ovl<<"\t"<<S_NO<<"\t\t"<<code<<"\t\t"<<item_name<<"\t\t"<<price<<"\t\t"<<quant<<"\t\t\t"<<ovl;
	cout<<"\n\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;

 	
}
int department::add_data(){    
    if(item_name==" no item name" && code=="no code"){
    	getch();
		MessageBox(NULL,"Error message","box title",MB_OK);
      	return(0);
	}
	else{
	 	ofstream fout;
     	fout.open("fashionshop.txt", ios::app|ios::binary);
     	fout.write((char*)this, sizeof(*this));
     	fout.close();
     	return(1);
   }
}
department::display_all(){
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ovl<<"         DISPLAY ALL ITEMS/PRODUCTS           "<<ovl;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	ifstream fin;
	fin.open("fashionshop.txt",ios::in|ios::binary);
	if(!fin){
		MessageBox(NULL,"File Not Found","box title",MB_OK);
	}
	else{
		
		cout<<"\n\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
		cout<<"\n\t\t\t"<<ovl<<"\tSR. #\t\t\CODE\t\tNAME\t\tPRICE\t\tQUANTITY\t\t"<<ovl;
		cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;
		
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			showgood_data();
			fin.read((char*)this,sizeof(*this));
		}
		cout<<"\n\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
		fin.close(); 		
	}
}
department::search_product(){
	system("cls");
 	cout<<"\n\n";
 	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
 	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"        SEARCH A RECORD IN INVENTORY          "<<ovl;
 	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"   SEARCH BY :                                "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       1. CODE OF ITEM/PRODUCT                "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       2. NAME OF ITEM/PRODUCT                "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	int ch;
	cout<<"\n\n\t\t\t\t\tENTER YOUR CHOICE : ";
	cin>>ch;
	switch(ch){
   		case 1:{	
			char c[20];
			cout<<"\n\n\t\t\t\t\tENTER CODE :";
			cin>>c;
			int a=0;
			ifstream fin;
			fin.open("fashionshop.txt",ios::in|ios::binary);
			if(!fin){
	 			MessageBox(NULL,"File Not Found","box title",MB_OK);
	 		}
			else{
	  			fin.read((char*)this,sizeof(*this));
	  			while(!fin.eof()){
	  				if(!strcmp(c,code)){
	  				cout<<"\n\n\t\t\t\t\t\t\tRECORD FOUND...!!!\n";
	  				
	  				cout<<"\n\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
					cout<<"\n\t\t\t"<<ovl<<"\tSR. #\t\t\CODE\t\tNAME\t\tPRICE\t\tQUANTITY\t\t"<<ovl;
					cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;

	  				
	  	 			showgood_data();
	  	 			a++;
	  				}
	  	 		fin.read((char*)this,sizeof(*this));
	  			}
	  			cout<<"\n\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	  			if(a==0){		
				MessageBox(NULL,"Record Not Found","box title",MB_OK);
				}
			fin.close();	
			}
			break;
		}
		case 2:{
			char np[20];
			cout<<"\n\n\t\t\t\t\tENTER NAME :";
			cin>>np;
			int b=0;
			ifstream fin;
			fin.open("fashionshop.txt",ios::in|ios::binary);
			if(!fin){
	 			MessageBox(NULL,"File Not Found","box title",MB_OK);
	 		}
			else{
	  			fin.read((char*)this, sizeof(*this));
	  			while(!fin.eof()){
	  				if(!strcmp(np,item_name)){
	  					cout<<"\n\n\t\t\t\t\t\t\tRECORD FOUND...!!!\n";
	  				cout<<"\n\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
					cout<<"\n\t\t\t"<<ovl<<"\tSR. #\t\t\CODE\t\tNAME\t\tPRICE\t\tQUANTITY\t\t"<<ovl;
					cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;
	  	 				showgood_data();
	  	 				b++;
	  				}
	  	 			fin.read((char*)this,sizeof(*this));
	  			}
	  			cout<<"\n\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
			}
	  		if(b==0){
	  			MessageBox(NULL,"File Not Found","box title",MB_OK);
	  			fin.close();	
			}
			break;
		}
	}
}
department::delete_item(){
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ovl<<"          DELETE AN ITEMS/PRODUCTS            "<<ovl;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	char cp[20];
	cout<<"\n\n\t\t\t\t\tENTER THE CODE OF ITEM TO BE DELETED : ";
	cin>>cp;
	ifstream fin;
	ofstream fout;
	fin.open("fashionshop.txt",ios::in|ios::binary);
	if(!fin){
		MessageBox(NULL,"File Not Found","box title",MB_OK);
	}
	else{
		fout.open("tempfile.txt",ios::out|ios::binary);
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			if(strcmp(cp,code)){
			fout.write((char*)this,sizeof(*this));
			}
		fin.read((char*)this,sizeof(*this));
		
	}
		fin.close();
		fout.close();
		remove("fashionshop.txt");
		rename("tempfile.txt","fashionshop.txt");
}
}
department::edit_item(){
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ovl<<"           EDIT EXISTING RECORDS              "<<ovl;
 	cout<<"\n\t\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	char ci[20];
	cout<<"\n\n\t\t\t\t\tENTER THE CODE OF ITEM TO BE EDITED : ";
	cin>>ci;
	fstream file;
	file.open("fashionshop.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekg(0);
	file.read((char*)this,sizeof(*this));
	while(!file.eof()){
		if(!strcmp(ci,code)){
			cout<<"\n\n\t\t\t\t\tENTER THE NEW INFO";
			getdata();
			file.seekp(file.tellp()-sizeof(*this));
			file.write((char*)this,sizeof(*this));
			cout<<"\n\n\t\t\t\t\t\t\tRECORD UPDATED...!!!\n";
			cout<<"\n\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
			cout<<"\n\t\t\t"<<ovl<<"\tSR. #\t\t\CODE\t\tNAME\t\tPRICE\t\tQUANTITY\t\t"<<ovl;
			cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;
			showgood_data();
		}
		file.read((char*)this,sizeof(*this));
	}
cout<<"\n\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;	
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//BILLING
//---------------------------------------------------------------------------------------------------------------------------------------------------------
department::get_bill(){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"           CALCULATE/GENERATE BILL            "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	char c[20];
	int b = 0;
	cout<<"\n\t\t\t\t\tITEM/PRODUCT CODE : ";
	cin>>c;
	
	ifstream fin;
	fin.open("fashionshop.txt",ios::in|ios::binary);
	if(!fin){
		MessageBox(NULL,"File Not Found","box title",MB_OK);
	}
	else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
	  		if(!strcmp(c,code)){
				cout<<"\n\n\t\t\t\t\tITEM/PRODUCT : "<<item_name;
  				cout<<"\n\n\t\t\t\t\tRATE (Rs.)   : "<<price;  
	  			fin.close();
	  			cout<<"\n\n\t\t\t\t\tQUANTITY     : ";
	  			cin>>b_quant;
	  			amount=price*b_quant;
	  			cout<<"\n\t\t\t\t\tAMOUNT (Rs.) : "<<amount<<"\n\n";
	  			/*
	  			cout<<"\t\t\t\t"<<lu<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<ru;//78
				cout<<"\n\t\t\t\t"<<v<<" "<<code<<"\t\t"<<item_name<<"\t\t"<<price<<"\t\t"<<b_quant<<"\t\t\t"<<amount<<" V"<<v;
				cout<<"\n\t\t\t\t"<<ll<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<rl;
*/
	  			total=total+amount;
	  			b++;
	  			break;
			}
			fin.read((char*)this,sizeof(*this));
	  	}
		  if (b == 0){
			MessageBox(NULL,"Code Doesnot Exist","box title",MB_OK);
			bct = 1;
			}	
		}
}
department::write_bill()
{
    if(item_name==" no item name" && code=="no code"){
		MessageBox(NULL,"No Data Entered","box title",MB_OK); 
      	return(0);
	}
	else{
	 	ofstream fout;
     	fout.open("fashionshop_bill.txt", ios::app|ios::binary);
     	fout.write((char*)this, sizeof(*this));
     	cout<<"\n\n\t\t\t\t\tData Entered successfully...!";
     	fout.close();
     	return(1);
	}
}
department::print_bill(){

	system("cls");
	cout<<"\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t"<<ovl<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<ovl;
	cout<<"\n\t\t\t"<<ovl<<"\t\t\t\t\t PRINT BILL \t\t\t\t\t\t"<<ovl;
  	cout<<"\n\t\t\t"<<ovl<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<ovl;
	cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;
	cout<<"\n\t\t\t"<<ovl<<"\tCODE\t\t\NAME\t\tPRICE\t\tQUANTITY\t\tAMOUNT\t\t"<<ovl;
	cout<<"\n\t\t\t"<<mdl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<mdr;

//	cout<<"\n\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
	ifstream fin;
	fin.open("fashionshop_bill.txt",ios::in|ios::binary);
	if(!fin){
		MessageBox(NULL,"File Not Found","box title",MB_OK);
	}
	else{
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			cout<<"\n\t\t\t"<<ovl<<"\t"<<code<<"\t\t"<<item_name<<"\t\t"<<price<<"\t\t\t"<<b_quant<<"\t\t"<<amount<<"\t\t"<<ovl;
			cout<<"\n\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
			
			fin.read((char*)this,sizeof(*this));
		}
		cout<<"\n\t\t\t"<<ovl<<"\t\t\t\t\t\t\tTOTAL AMOUNT (Rs.) :\t"<<total<<"\t\t"<<ovl;
		cout<<"\n\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
		cout<<"\n\n\t\t\t\t\tBILL GENERATED AT : ";
		time_t my_time = time(NULL); 
		printf("%s", ctime(&my_time));
		fin.close(); 		
	}	
}
department::delete_file(){
	ifstream fin;
	ofstream fout;
	fin.open("fashionshop_bill.txt",ios::in|ios::binary);
	if(!fin){
		MessageBox(NULL,"File Not Found","box title",MB_OK);
	}
	else{
		fout.open("tempfile_bill.txt",ios::out|ios::binary);
		fin.read((char*)this,sizeof(*this));
		while(!fin.eof()){
			fout.write((char*)this,sizeof(*this));
			fin.read((char*)this,sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("fashionshop_bill.txt");
		rename("tempfile_bill.txt","fashionshop_bill.text");
	}
}
int i_menu()
{
	int choice;
	system("cls");
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                 INVENTORY MENU               "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"   ENTER YOUR CHOICE                          "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       1. INSERT NEW RECORD                   "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       2. SHOW ALL RECORDS                    "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       3. SEARCH AN ITEM FROM RECORDS         "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       4. DELETE AN ITEM FROM RECORDS         "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       5. EDIT AN ITEM FROM RECORDS           "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       6. EXIT TO MAIN                        "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	cout<<"\n\n\t\t\t\t";      
    cin>>choice;
    return(choice);
}
int Pass_Inventory()
{
	int i,p;
	char uname[100],s[]="INVENTORY";
	char bpass[100],sp[]="1234";
	
	cout<<"\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       INVENTORY SECTION SECURITY CHECK       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t\t\tUSERNAME : ";
	cin>>uname;
	cout<<"\n\t\t\t\t\tPASSWORD : ";
	
	int alt = 0;
			while(1)
			{
				bpass[alt]=getch();
				printf("*");
				if(bpass[alt]=='\r')
				{
					break;
				}
				alt++;

			}
			bpass[alt]='\0';
//	cin>>bpass;
	i=strcmp(s,uname);
	p=strcmp(sp,bpass);
	if((i==0)&&(p==0)){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"              INVENTORY SECTION               "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	return(1);
	}
	else{
		MessageBox(NULL,"Wrong Username And Password","box title",MB_OK);
		return(0);
	}
}
int Pass_Billing(){
	int i,p;
	char uname[100],s[]="BILLING";
	char bpass[100],sp[]="2626";
	
	cout<<"\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"        BILLING SECTION SECURITY CHECK        "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t\t\tUSERNAME : ";
	cin>>uname;
	cout<<"\n\t\t\t\t\tPASSWORD : ";
	
	int alt = 0;
			while(1)
			{
				bpass[alt]=getch();
				printf("*");
				if(bpass[alt]=='\r')
				{
					break;
				}
				alt++;

			}
			bpass[alt]='\0';
//	cin>>bpass;
	i=strcmp(s,uname);
	p=strcmp(sp,bpass);
	if((i==0)&&(p==0)){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n";
  	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"               BILLING SECTION                "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	return(1);
	}
	else{
		MessageBox(NULL,"Wrong Username And Password","box title",MB_OK);
		return(0);
	}
}
int main_menu(){
	int choice;
//  	cout<<"";
  	cout<<"\n\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                    MAIN MENU                 "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"   ENTER YOUR CHOICE                          "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       1. BILLING                             "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       2. INVENTORY                           "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       3. EXIT                                "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	cout<<"\n\n\t\t\t\t";      
    cin>>choice;
    return(choice);
}
int b_menu(){
	int choice;
	system("cls");
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                  BILLING MENU                "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<old<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<" "<<ord;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"   ENTER YOUR CHOICE                          "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       1. CALCULATE/GENERATE BILL             "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       2. PRINT BILL                          "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"       3. EXIT TO MAIN                        "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
	cout<<"\n\n\t\t\t\t";      
    cin>>choice;
    return(choice);
}
int main()
{
	int m,b,i;
	char ch;
	system("color 1F");
	system("cls");
//  	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<lg<<lg<<lg<<lg<<"\t"<<lg<<lg<<"\t    "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<lg<<lg<<lg<<lg<<"\t"<<lg<<lg<<"\t    "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<"\t    "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<"\t    "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<lg<<lg<<lg<<"\t"<<lg<<lg<<"    "<<lg<<lg<<"    "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<lg<<lg<<lg<<"\t"<<lg<<lg<<"   "<<lg<<lg<<""<<lg<<lg<<"   "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<"  "<<lg<<lg<<"  "<<lg<<lg<<"  "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<" "<<lg<<lg<<"    "<<lg<<lg<<" "<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<lg<<lg<<"      "<<lg<<lg<<""<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"\t\t"<<lg<<lg<<"\t"<<lg<<lg<<lg<<"        "<<lg<<lg<<lg<<"\t       "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
  	
  	cout<<"\n\n\n\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ovl<<"  WELCOME TO FASHION WEAR DEPARTMENTAL STORE  "<<ovl;
  	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
	cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;
 // 	cout<<"\n\n\n\n\n\n\n";
 	department d1;
 	while(1){
    	switch(main_menu()){
    		case 1:{
    			system("cls");
    			b=Pass_Billing();
    			//b = 1;
    			if(b==0){
    				break;
				}
				else{
					while(1){
						switch(b_menu()){
							case 1:{
    								do{
    									d1.get_bill();
    									if (bct == 0){
    									d1.write_bill();
										}
										bct = 0;
    									cout<<"\n\n\t\t\t\t\tCONTINUE BILLING (Y/N)\n\t\t\t\t\t";
    									ch = getch();
										//cin>>ch;
    								}
    								while((ch=='y')||(ch=='Y'));
             						break;
            				}
            				case 2:{
            					d1.print_bill();
            					d1.delete_file();
            					getch();
            					system("cls");
								break;
							}
							case 3:{
								main();
								break;
							}
							default:{
								MessageBox(NULL,"Sorry!Invalid Choice","box title",MB_OK);
								break;
							}
						}
					}
				}
        	}
    		case 2:{
    			system("cls");
    			i=Pass_Inventory();
    			//i = 1;
    			if(i==0){
					break;
				}
				else{
					while(1){
    					switch(i_menu()){
    						case 1:{
    							system("cls");
            					char ch;
            					do{
 	            					system("cls");
 	            					cout<<"\n\n";
 	            					cout<<"\t\t\t\t\t"<<oluc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<oruc;
 									cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
									cout<<"\n\t\t\t\t\t"<<ovl<<"            ADD NEW ITEM/PRODUCT              "<<ovl;
 								 	cout<<"\n\t\t\t\t\t"<<ovl<<"                                              "<<ovl;
									cout<<"\n\t\t\t\t\t"<<ollc<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<ohl<<orlc;

 	            					d1.getdata();
 	            					d1.add_data();
 	            					cout<<"\n\t\t\t\t\tADD MORE ? (Y/N)\n\t\t\t\t\t";
            						//cin>>ch;
            						ch = getch();
              					}
            					while(ch=='Y'||ch=='y');
        						break;
        					}
    						case 2:{
								d1.display_all();
    							break;
    						}
    						case 3:{
    							d1.search_product();
    							break;
    						}
    						case 4:{
    							d1.delete_item();
    							cout<<"\n\n\t\t\t\t   Remaining items are:";
    							d1.display_all();
    							cout<<"\n\n\t\t\t\t      Item Deleted Sucessfully....!!";
    							break;
    						}
    						case 5:{
    							d1.edit_item();
    							break;
    						}
    						case 6:{
    							main();
							}
    						default:{
    							cout<<"\n Invalid choice";
    							break;
    						}	
						}				
						getch();
  					}
  				}
    			break;
    		}
    		case 3:{
    			MessageBox(NULL,"Thank you!For Using This Application\n\nDEVELOPED BY\n\nMAHNOOR FATIMA (18-CS-03)\n\nSABA SAEED (18-CS-34)\n\nAYESHA SALIHA (18-CS-43)\n\nTAIMOOR NASIR (18-CS-48)","box title",MB_OK);
    			cout<<"\n \t\t\t\t                 Press any key to exit";
    			getch();
    			exit(0);
    			break;
    		}
    		default:{
    		MessageBox(NULL,"Invalid Choice","box title",MB_OK);
    		break;
			}
			getch();
  		}	
	}
}

#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;

class Bill{
private:
 string Item;
 int Rate, Quantity;
public:
 Bill():Item(""), Rate(0), Quantity(0){ }
 
 void setItem(string item){
 Item = item;
 }
 
void setRate(int rate){
 Rate = rate;
 }

void setQuant(int quant){
 Quantity = quant;
}

string getItem(){
return Item;
}

int getRate(){
 return Rate;
}

int getQuant(){
 return Quantity;
}


};
addItem(Bill b){
bool close = false;
while(!close){
	int choice;
cout<<"\t1.Add."<<endl;
cout<<"\t2.close."<<endl;
cout<<"\tEnter Choice: ";
cin>>choice;

if(choice==1){
	system("cls");
string item;
int rate, quant;

cout<<"\tEnter Item Name: ";
cin>>item;
b.setItem(item);

cout<<"\tEnter Rate Of Item: ";
cin>>rate;
b.setRate(rate);

cout<<"\tEnter Quantity Of Item: ";
cin>>quant;
b.setQuant(quant);

ofstream out("D:/Bill.txt", ios::app);
if(!out){
	cout<<"\tError: File Can't Open!"<<endl;
}
else{
out<<"\t"<<b.getItem()<<" : "<<b.getRate()<<" : "<<b.getQuant()<<endl<<endl;
}
out.close();
cout<<"\tItem Added Successfuly"<<endl;
Sleep(3000);
}
}

else if(choice == 2){
	system("cls");
close = true;
cout<<"\tBack To Main Menu!"<<endl;
Sleep(3000);
}
}
}

printBill(){
	system("cls");
int count = 0;
bool close = false;
while(!close){
system("cls");
int choice;
cout<<"\t1.Add Bill."<<endl;
cout<<"\t2.Close Session."<<endl;
cout<<"\tEnter Choice: ";
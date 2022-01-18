#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
int chon;
string back;
begin1:
   cout << "Chao Mung !!" << endl;
   cout << "Vui long chon de xem thong tin:" << endl;
   cout << "1. Cac thanh vien" << endl;
   cout << "2. Ten nhom" << endl;
   cout << "Lua chon cua ban la: ";
   cin >> chon;
   if(chon < 0 || chon > 2)
   {cout << "Loi !! Vui Long Chon Lai !!" << endl; cout << "-------------------------------------------" << endl; goto begin1;}
   else if(chon == 1)
   {
   	cout << "-------------------------------------------" << endl;
   	cout << "Cac thanh vien bao gom: " << endl;
   	cout << "1. Hoang Le Minh Vuong" << endl;
   	cout << "2. Nguyen An" << endl;
   	cout << "3. Nguyen Duc Luong" << endl;
   	cout << "4. Nguyen Xuan Viet" << endl;
   	begin2:
   	cout << "Quay Lai ? Y - N" << endl;
   	cin >> back;
   	if(back == "y" ||back == "Y")
   	{cout << "-------------------------------------------" << endl; goto begin1; }
   	else if(back == "N" || back == "n")
   	{
   		cout << "-------------------------------------------" << endl;
		   cout << "\nGoodbyee :3";
   		return 0;
   	}
   	else { cout << "Loi !!" << endl; goto begin2; }
   	}
   else if(chon == 2)
   {
   	cout << "-------------------------------------------" << endl;
   	cout << "Ten Nhom La: Xom Nha La" << endl;
   	   	begin3:
   	cout << "Quay Lai ? Y - N" << endl;
   	cin >> back;
   	if(back == "y" ||back == "Y")
   	{ cout << "-------------------------------------------" << endl; goto begin1; }
   	else if(back == "N" || back == "n")
   	{cout << "-------------------------------------------" << endl;
   		cout << "\nGoodbyee :3";
   		return 0;
   	}
   	else { cout << "Loi !!" << endl; goto begin3; }
   	}
   
   return 0;
}


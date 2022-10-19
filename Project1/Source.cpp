#include <iostream>

using namespace std;

//# MyString
//1) 1 ci xarakter qaytaran method
//2) sonuncu xarakter qaytaran method 
//3) Append(const char* text)  
//4) s.rfind('a') 
//5) s.find('w') // 6 xarakterin indexi qayitsin
//6) s.clear() // string silinsin delete edin

//class MyString {
//	char* text;
//
//public:
//	MyString() : text(nullptr) {}
//
//	MyString(const char* text) : MyString() {
//		SetText(text);
//	}
//
//	MyString(const MyString& other) {
//		SetText(other.text);
//	}
//
//	void SetText(const char* value) {
//		delete[] text;
//		int len = strlen(value) + 1;
//		text = new char[len];
//		strcpy_s(text, len, value);
//	}
//
//	void Print() {
//		cout << text << endl;
//	}
//
//	void PrintOne() {
//		cout << text[0] << endl;
//	}
//
//	void PrintEnd() {
//		int len = strlen(text);
//		cout << text[len - 1] << endl;
//	}
//
//	void Append(const char* value) {
//		delete[] text;
//		int len = strlen(value);
//		text = new char[len + 1];
//		strcpy_s(text, len + 1, value);
//	}
//
//	void Rfind(const char letter) {
//		int len = strlen(text);
//
//		for (int i = 0; i < len; i++)
//		{
//			if (letter == text[i]) {
//				cout << "Var." << endl;
//			}
//
//			else {
//				cout << "Yoxdur." << endl;
//			}
//		}
//	}
//
//	void Find(const char letter) {
//		int len = strlen(text);
//
//		for (int i = 0; i < len; i++)
//		{
//			if (letter == text[i]) {
//				cout << i << endl;
//			}
//		}
//	}
//
//	void Clear () {
//		delete[] text;
//	}
//
//	~MyString() {
//		delete[] text;
//	}
//};
//
//void main() {
//	MyString* text = new MyString("kamil");
//
//	text->Print();
//	//text->PrintOne();
//	//text->PrintEnd();
//	//text->Append("salam");
//	//text->Rfind('a');
//	//text->Find('k');
//	//text->Clear();
//	//text->Print();
//}


//1. IntArray class - i yaradin.Bu class massiv rolunu
//oynamalidir.
//Novbeti imkanlar olsun :
//-Massivin evveline reqem elave eden method
//- Massivin sonuna reqem elave eden method
//- Massivi copy etmek imkani yaradin
//- Print

//class IntArray {
//	int* ptr;
//	int size;
//
//public:
//	void Insert(int index, int value);
//
//	void Print() {
//		for (int i = 0; i < size; i++)
//		{
//			cout << ptr[i] << " ";
//		}
//
//		cout << endl;
//	}
//
//	IntArray& Copy() {
//		IntArray arr;
//
//		for (int i = 0; i < size; i++) {
//			arr.Insert(i, ptr[i]);
//		}
//
//		return arr;
//	}
//};
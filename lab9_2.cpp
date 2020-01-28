#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream cheerbook;
	ifstream cheerbcop;
	cheerbook.open("C:\\Users\\User\\Desktop\\lab9-2562-2-Zappyy\\cheerbook_copy.txt");
	cheerbcop.open("C:\\Users\\User\\Desktop\\lab9-2562-2-Zappyy\\cheerbook.txt");
	string textline;
	bool havetext;
	havetext = getline(cheerbcop,textline);
	cheerbook << "-------------------- SOTUS ---------------------" <<endl;
	while(havetext)
	{
		cheerbook << textline <<endl;
		havetext = getline(cheerbcop,textline);
	}
	cheerbook << "-------------------- SOTUS ---------------------" <<endl;
}



//Don't forget to change cout to output filestream

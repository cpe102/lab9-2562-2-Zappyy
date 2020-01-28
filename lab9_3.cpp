#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
	int count =0;
	double sum=0;
	double sumx;
	string textline;
	ifstream score;
	score.open("C:\\Users\\User\\Desktop\\lab9-2562-2-Zappyy\\score.txt");
	while(getline(score,textline))
	{
		sum += atof(textline.c_str());
		sumx = sumx+pow(atof(textline.c_str()),2);
		count++;
	}
		cout << "Number of data = " << count <<endl;
		cout << "Mean = " <<sum/count <<endl;
		cout << "Standard deviation = " << sqrt((sumx/count)-pow(sum/count,2)) <<endl;
		return 0;
}


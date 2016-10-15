
/*
//118 : 디버깅 - 형성평가3 ★ (무슨말인지 모르겠다.)
#include <stdio.h>

int main()
{
	int a = 5;
	a += 10;
	a = a - 1;
	printf("%d\n", 1);
	return 0;
}
*/

/*
//116 : 디버깅 - 형성평가1 ☆
#include <iostream>
#include <math.h> 
using namespace std;
//c,c++에서는 반올림을 지원하지않는다 올림ceil , 내림floor 은 지원해준다

double Round(double n,int pos) //반올림
{
	double temp;
	temp = n * pow(10, pos);
	temp = floor(temp + 0.5);
	temp *= pow(10, -pos);
	return temp;
}
int main()
{
	int num[3] = { 0, };
	double avg = 0.0;

	cin >> num[0] >> num[1] >> num[2];
	avg = (double)(num[0] + num[1] + num[2])/3;

	cout << fixed;         //소수점 고정
	cout.precision(1);     //1자리
	cout << Round(avg,1)<< "점";
	return 0;
}
*/
/*
//526 : 디버깅 - 자가진단1
#include <iostream>
using namespace std;

int main()
{
	double num[2] = { 0.0, };

	cin >> num[0] >> num[1];
	cout << (int)(num[0] * num[1]) << " " << (int)num[0] * (int)num[1];
}
*/

/*
//525 : 연산자 - 자가진단8
#include <iostream>
using namespace std;

int main()
{
	int inputnum[3] = { 0, };

	cin >> inputnum[0] >> inputnum[1] >> inputnum[2];
	if ((inputnum[0] > inputnum[1]) && (inputnum[0] > inputnum[2]))
	{
		cout << 1 << " ";
	}
	else
	{
		cout << 0 << " ";
	}

	if ((inputnum[0] == inputnum[1]) && (inputnum[1] == inputnum[2]))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}
*/
/*
//524 : 연산자 - 자가진단7  ★
#include <iostream>
using namespace std;
bool check(int n)
{
	int num;
	num = n;

		if (num == 0)
		{
			return false;
		}
		return true;
}
int main()
{
	int num[2] = { 0, };

	cin >> num[0] >> num[1];
	cout << check(num[0]) << " " << check(num[1]);
}
*/
/*
//523 : 연산자 - 자가진단6
#include <iostream>
using namespace std;

struct relationaloperator
{
	void result(int n1,int n2)
	{
		cout << n1 << " > " << n2 << " --- " << ((n1 > n2) ? 1 : 0 )<< endl;
		cout << n1 << " < " << n2 << " --- " << ((n1 < n2) ? 1 : 0 )<< endl;
		cout << n1 << " >= " << n2 << " --- " << ((n1 >= n2) ? 1 : 0 )<< endl;
		cout << n1 << " <= " << n2 << " --- " << ((n1 <= n2) ? 1 : 0 )<< endl;
	}
};
int main()
{
	int num[2] = { 0, };
	relationaloperator r;

	cin >> num[0] >> num[1];
	r.result(num[0],num[1]);
}
*/

/*
//521 : 연산자 - 자가진단4
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int inputnum[3] = {0,};

	cin >> inputnum[0] >> inputnum[1];

	inputnum[2] = inputnum[0]++ * --inputnum[1];
	cout << inputnum[0] <<" "<< inputnum[1] << " " << inputnum[2];

}
*/
/*
//520 : 연산자 - 자가진단3
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int inputnum;
	inputnum = 0;
	cin >> inputnum;
	cout << "후치 " << inputnum++ << endl;
	cout << "전치 " << ++inputnum << endl;

}
*/
/*
//입력 - 자가진단9
#include <iostream>
#include <iomanip> //setiosflags() 함수를 사용하기 위해 필요
using namespace std;

int main()
{
	float a, b;
	double c;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << fixed;         //소수점 고정
	cout.precision(3);     //3자리
	cout << a << endl << b << endl << c;
}
*/

/*
//입력 - 자가진단5
#include <iostream>
#include <iomanip>
using namespace std;
class Calculation
{
private:
	double temperature;
public:
	Calculation(){};
	~Calculation() {};
	void init() { temperature = 0; };
	double CChangeF(double t) { temperature = t; return (t * 1.8f) + 32; };
	double FChangeC(double t) { temperature = t; return (t - 32) * 0.55f; };
};

int main()
{
	Calculation c;
	c.init();

	cout << fixed << setprecision(1);
	cout <<"섭씨"<< std::right << setw(6) << 21.6 <<"도는 화씨 " << c.CChangeF(21.6)<<"도이다."<<endl;
	cout <<"화씨"<< std::right << setw(6) << 110.3 <<"도는 섭씨 " << c.FChangeC(110.3) << "도이다.";
}
*/

/*
//출력 - 형성평가4
#include <iostream>
#include <string>
using namespace std;

#define maxnum 3
class Subjects
{
public:
	Subjects(){};
	~Subjects() {};
	string subject[maxnum] = { "국어","수학","영어" };
};
class Students : public Subjects 
{
private:
	long sum;
	double avg;
public:
	Students(){};
	~Students() {};
	int subjectscore[3];
	void init() { sum = 0; avg = 0; };
	void manofscore() { subjectscore[0] = 90; subjectscore[1] = 80; subjectscore[2] = 100; };
	long sumfunction() { return sum= subjectscore[0] + subjectscore[1] + subjectscore[2];};
	double avgfunction() { return avg = (double)sum / maxnum; };
};
int main()
{
	Students m;
	m.init();
	m.manofscore();
	for(int i = 0; i < maxnum; i++)
	cout << m.subject[i] <<" "<< m.subjectscore[i] << endl;

	cout << "합계 " << m.sumfunction()<<endl;
	cout << "평균 " << m.avgfunction() << endl;

	return 0;
}
*/

/*
//출력 - 자가진단8
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define maxnum 12
int main()
{
	string text[maxnum]= {"item","count","price","pen","20","100","note","5","95","eraser","110","97" };
	for (int i = 0; i < maxnum; i++)
	{
		cout<<std::right << setw(10) <<text[i];
		if (i % 3 == 2)
		{
			cout << endl;
		}
	}
	return 0;
}
*/
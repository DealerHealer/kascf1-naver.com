//563 : 배열1 - 자가진단9 
#include <iostream>
using namespace std;

int main()
{
	int num[10] = { 0, };
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
	return 0;
}

/*
//560 : 배열1 - 자가진단6 
#include <iostream>
using namespace std;

int main()
{
	int num[10] = { 0, };
	int min = 1000;

	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		if (num[i] < min)
		{
			min = num[i];
		}
	}
	cout << min;

	return 0;
}
*/
/*
//555 : 배열1 - 자가진단1
#include <iostream>
using namespace std;

int main()
{
	char inputchar[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> inputchar[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << inputchar[i];
	}

	return 0;
}
*/
/*
//149 : 반복제어문3 - 형성평가A 
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	int num = 1;
	cin >> inputnum;

	for (int i = 0; i < inputnum; i++)
	{
		for (int j = 0; j < inputnum; j++)
		{
			cout << num << " ";
			num += 2;
			if (num == 11)
			{
				num = 1;
			}
			
		 //   if (inputnum*inputnum % 2 == 1)
			//{
			//	if (num == (inputnum*inputnum) + 2)
			//	{
			//		num = 1;
			//	}
			//}
			//else
			//{
			//	if (num == (inputnum*inputnum) + 1)
			//	{
			//		num = 1;
			//	}
			//}
		}
		cout << endl;
	}
	return 0;
}
*/

/*
//143 : 반복제어문3 - 형성평가4
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	cin >> inputnum;

	for (int i = 0; i < inputnum + inputnum - 1; i++)
	{
		if (i < inputnum)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < (inputnum * 2 - 1) - (i * 2); j++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int j = inputnum + inputnum -2; j > i; j--)
			{
				cout << " ";
			}
			for (int j = 0; j < (i * 2) - (inputnum * 2 - 3); j++)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
*/

/*
//142 : 반복제어문3 - 형성평가3 
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	cin >> inputnum;

	for (int i = 0; i < inputnum + inputnum - 1; i++)
	{
		if (i < inputnum)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int j = 0; j <inputnum + inputnum - 1 - i ; j++)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
//141 : 반복제어문3 - 형성평가2 
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	int sum = 0;
	int i = 0;

	cin >> inputnum;

	if (inputnum <= 100 && inputnum > 0)
	{
		while (1)
		{
			++i;
			sum = inputnum * i;
			if (sum >= 100)
			{
				break;
			}
			cout << sum << " ";
			if (inputnum*i % 10 == 0)
			{
				break;
			}
		}
	}
	return 0;
}
*/
/*
//554 : 반복제어문3 - 자가진단7 
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	char alphabet = 'A';
	int num = 0;

	cin >> inputnum;
	for (int i = 0; i < inputnum; i++)
	{
		for (int j = inputnum; j > i; j--)
		{
			printf("%d ", ++num);
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", alphabet++);
		}
		cout << endl;
	}
	return 0;
}
*/
/*
//553 : 반복제어문3 - 자가진단6 
#include <iostream>
using namespace std;

int main()
{
	int inputnum =0;
	char alphabet = 'A';
	cin >> inputnum;


	for (int i = 0; i < inputnum; i++)
	{
		for (int j = inputnum; j > i; j--)
		{
			cout << (alphabet++);
		}
		cout << endl;
	}

	return 0;
}
*/
/*
//552 : 반복제어문3 - 자가진단5
#include <iostream>
using namespace std;

int main()
{
	int inputnum = 0;
	cin >> inputnum;

	for (int i = 0; i < inputnum; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (inputnum * 2)-1-(i*2); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/


/*
//550 : 반복제어문3 - 자가진단3 //별찍기
#include <iostream>
using namespace std;

int main()
{
	int inputnum=0;

	cin >> inputnum;

	for (int i = 0; i < inputnum*2; i++)
	{
		if (i < inputnum)
		{
			for (int j = 0; j < inputnum-i; j++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int j = 0; j <= i-inputnum; j++)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
*/
/*
//139 : 반복제어문2 - 형성평가A
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int inputnum[2] = { 0, };

	cin >> inputnum[0] >> inputnum[1];

	if (inputnum[0] > inputnum[1])
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = inputnum[0]; j >= inputnum[1]; j--)
			{
				cout << j << " * " << i << " =" << std::right << setw(3)<< j*i << "   ";
			}
			cout << endl;
		}
	}
	else if(inputnum[0] <= inputnum[1])
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = inputnum[0]; j <= inputnum[1]; j++)
			{
				cout << j << " * " << i << " =" << std::right << setw(3) << j*i << "   ";
			}
			cout << endl;
		}
	}
	return 0;
}
*/
/*
//138 : 반복제어문2 - 형성평가9
#include <iostream>
using namesace std;

int main()
{
	int inputnum;

	cin >> inputnum;

	for (int i = 1; i <= inputnum; i++)
	{
		for (int j = 1; j <= inputnum; j++)
		{
			cout << "(" << i << ", " << j << ") ";
		}
		cout << endl;
	}
	return 0;
}
*/

/*
//548 : 반복제어문2 - 자가진단8 
#include <iostream>
using namespace std;

int main()
{
	for (int i = 2; i <= 4; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d * %d =%3d   ", i, j, i * j);
		}
		cout << endl;
	}
	return 0;
}
*/

/*
//547 : 반복제어문2 - 자가진단7 
#include <iostream>
using namespace std;

int main()
{
	for (int i = 2; i <= 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << i+j << " ";
		}
		cout << endl;
	}
	return 0;
}
*/
/*
//126 : 반복제어문1 - 형성평가2
#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int odd = 0, even = 0;
	
	while (num != 0)
	{
		cin >> num;
		if (num % 2 == 1)
		{
			++odd;
		}
		else if (num % 2 == 0 && num != 0)
		{
			++even;
		}
	}
	cout << "홀수 : " << odd << "개\n짝수 : "<<even << "개" << endl;

	return 0;
}
*/
/*
//537 : 반복제어문1 - 자가진단2
#include <iostream>
using namespace std;

int main()
{
	int num=0,sum = 0;
	int i = 0;
	cin >> num;
	if (num <= 100 && num > 0)
	{
		while (i < num)
		{
			i++;
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}
*/
/*
//123 : 선택제어문 - 형성평가4 
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "1. 개\n2. 고양이\n3. 병아리\n영어로 알고 싶은 번호를 입력하세요. ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "dog" << endl;
		break;
	case 2:
		cout << "cat" << endl;
		break;
	case 3:
		cout << "chick" << endl;
		break;
	default:
		cout << "I don't know." << endl;
		break;
	}
	return 0;
}
*/
/*
//632 : 선택제어문 - 자가진단9 
#include <iostream>
using namespace std;

int main()
{
	int a=0,b=0,c=0 ,min = 0;
	
	cin >> a >> b >> c;
	min = (a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a);
	cout << min << endl;
	return 0;
}
*/
/*
//533 : 선택제어문 - 자가진단6 
#include <iostream>
# include <string>
using namespace std;

int main()
{
	string inputsex;
	int Age = 0;

	cin >>inputsex>>Age;
	if (inputsex == "M")
	{
		if (Age >= 18)
		{
			cout << "MAN";
		}
		else
		{
			cout << "BOY";
		}
	}
	else if (inputsex == "F")
	{
		if (Age >= 18)
		{
			cout << "WOMAN";
		}
		else
		{
			cout << "GIRL";
		}
	}
	else
	{
		return 0;
	}

	return 0;
}
*/
/*
//531 : 선택제어문 - 자가진단4
#include <iostream>
using namespace std;

int main()
{
	double weight = 0.0;

	cin >> weight;
	if (weight <= 50.8)
	{
		cout << "플라이급" << endl;
	}
	else if (weight <= 61.23)
	{
		cout << "라이트급" << endl;
	}
	else if (weight <= 72.57)
	{
		cout << "미들급" << endl;
	}
	else if (weight <= 88.45)
	{
		cout << "크루저급" << endl;
	}
	else if(weight >88.45)
	{
		cout << "헤비급" << endl;
	}
	else
	{
		return 0;
	}

	return 0;
}
*/
//529 : 선택제어문 - 자가진단2 
/*
#include <iostream>
using namespace std;

int main()
{
	int height = 0;
	int weight = 0;
	int obesity = 0;

	cin >> height >> weight;
	obesity = weight + 100 - height;

	cout << "비만수치는 " <<obesity<< "입니다." << endl;
	if (obesity > 0)
	{
		cout << "당신은 비만이군요."<<endl;
	}
	else
		return 0;
	return 0;
}
*/
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
		cout<<std::right << setw(10) <<text[i];  //오른쪽 정렬
		if (i % 3 == 2)
		{
			cout << endl;
		}
	}
	return 0;
}
*/
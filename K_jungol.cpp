#include <iostream>
#include <iomanip>
using namespace std;

//508 : 출력 - 형성평가5
//int main(void)
//{
//	cout << right << setw(15) << "seoul" ;
//	cout << right << setw(15) << "10,312,545";
//	cout << right << setw(15) << "+91,375" << endl;
//
//	cout << right << setw(15) << "Pusan";
//	cout << right << setw(15) << "3,567,910";
//	cout << right << setw(15) << "+5,868" << endl;
//
//	cout << right << setw(15) << "Incheon";
//	cout << right << setw(15) << "2,758,296";
//	cout << right << setw(15) << "+64,888" << endl;
//
//	cout << right << setw(15) << "Daegu";
//	cout << right << setw(15) << "2,511,676";
//	cout << right << setw(15) << "+17,230" << endl;
//
//	cout << right << setw(15) << "Gwangju";
//	cout << right << setw(15) << "1,454,636";
//	cout << right << setw(15) << "+29,774" << endl;
//}

//516 : 입력 - 자가진단8
//int main(void)
//{
//	double float_1 = 0;
//	double float_2 = 0;
//	char a = 0;
//
//	cin >> float_1;
//	cin >> float_2;
//	cin >> a;
//	
//	cout << endl;
//
//	cout << fixed << setprecision(2);
//	cout << float_1 << endl;
//	cout << float_2 << endl;
//	cout << a << endl;
//}

//519 :	연산자 - 자가진단2

//int main(void)
//{
//	int int_1;
//	int int_2;
//	int a, b;
//
//	cin >> int_1 >> int_2;
//
//	a = int_1 + 100;
//	b = int_2 % 10;
//
//	cout << a << " " << b << endl;
//}

//522 : 연산자 - 자가진단4
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//	int result = 0;
//
//	cin >> int_1 >> int_2;
//
//	result = int_1++ * --int_2;
//	cout << int_1 << " " << int_2 << " " << result << endl;
//}

//523 : 연산자 - 자가진단5
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//
//	cin >> int_1 >> int_2;
//	cout << (int_1 == int_2) << endl;
//	cout << (int_1 != int_2) << endl;
//}

//--------------------------------------------------------------- 2016/10/14

//524 : 연산자 - 자가진단6
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//
//	cin >> int_1 >> int_2;
//	cout << int_1 << " > " << int_2 << " --- " <<(int_1 > int_2) << endl;
//	cout << int_1 << " < " << int_2 << " --- " << (int_1 < int_2) << endl;
//	cout << int_1 << " >= " << int_2 << " --- " << (int_1 >= int_2) << endl;
//	cout << int_1 << " <= " << int_2 << " --- " << (int_1 <= int_2) << endl;
//}

//525 : 연산자 - 자가진단7
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//
//	cin >> int_1 >> int_2;
//	cout << (int_1 && int_2) << " " << (int_1 || int_2) << endl;
//}

//526 : 연산자 - 자가진단8
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//	int int_3 = 0;
//
//	cin >> int_1 >> int_2 >> int_3;
//	cout << (int_1 > int_2, int_1 > int_3) << " " << (int_1 == int_2, int_1 == int_3) << endl;
//}

//111 : 연산자 - 형성평가1
//int main(void)
//{
//	int int_n[4] = { 0, };
//	int p_result = 0;
//	double	a_result = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> int_n[i];	
//		p_result += int_n[i];
//	}
//
//	a_result = p_result / 4;
//	a_result *= 1000;
//	a_result = (int)a_result;
//	a_result /= 1000;
//
//	cout << "총점 " << p_result << "점" << endl;
//	cout << "평균 " << a_result << "점" << endl;
//}

//112 : 연산자 - 형성평가2
//int main(void)
//{
//	int int_1;
//	int int_2;
//	double d_result;
//
//	cin >> int_1 >> int_2;
//	d_result = int_1 / int_2;
//	d_result *= 1000;
//	d_result = (int)d_result;
//	d_result /= 1000;
//
//	cout << int_1 << " / " << int_2 << " = "<< d_result << "..." << int_1 % int_2 << endl;
//}

//--------------------------------------------------------------------------------- 2016/10/15

//113 : 연산자 - 형성평가3
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//	int result = 0;
//
//	cin >> int_1 >> int_2;
//
//	int_1 += 5;
//	int_2 *= 2;
//	result = int_1 * int_2;
//
//	cout << "가로 = " << int_1 << endl;
//	cout << "세로 = " << int_2 << endl;
//	cout << "넓이 = " << result << endl;
//}

//114 : 연산자 - 형성평가4
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//
//	cin >> int_1 >> int_2;
//
//	cout << ++int_1 << " " << int_2-- << endl;
//	cout << int_1 << " " << int_2 << endl;
//}

//115 : 연산자 - 형성평가5
//int main(void)
//{
//	int mh, mw = 0;
//	int kh, kw = 0;
//
//	cout << "민수의 키와 몸무게 입력" << endl;
//	cin >> mh >> mw;
//	cout << "기영이의 키와 몸무게 입력" << endl;
//	cin >> kh >> kw;
//
//	cout << "민수의 키와 몸무게 입력 기영이의 키와 몸무게 입력 " << (mh > kh && mw > kw) << endl;
//}

//526 : 디버깅 - 자가진단1
//int main()
//{
//	double int_1 = 0;
//	double int_2 = 0;
//	double f_result = 0;
//	int i_result = 0;
//
//	cin >> int_1 >> int_2;
//
//	f_result = int_1 * int_2;
//	f_result = (int)f_result;
//
//	i_result = (int)int_1 * (int)int_2;
//
//	cout << f_result << " " << i_result << endl;
//}

//527 : 디버깅 - 자가진단2
//int main(void)
//{
//	int int_1 = 0;
//	int int_2 = 0;
//	int d_result = 0;
//	double d_result2 = 0;
//
//	cin >> int_1 >> int_2;
//
//	d_result = int_1 / int_2;
//
//	d_result2 = (double)int_1 / int_2;
//
//	cout << fixed << setprecision(2);
//	cout << d_result << " " << d_result2 << endl;
//}

//--------------------------------------------------- 2016/10/17

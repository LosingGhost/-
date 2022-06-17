#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	do
	{
		double Q, Qh, p1, p2, Nd, N, Nh, xl,H, Hh,
			ne,//额度转速
			n,//测量转速
			c;//换算后转速

		double H0 = 0.21,
			p = 998.2,
			g = 9.81,
			k = 0.95;

		cout << "输入" << endl << "额定转速，单位：r/min" << endl;
		cin >> ne;
		cout << "流量，单位：m3/h" << endl;
		cin >> Q;
		cout << "真空表读数，单位：kPa" << endl;
		cin >> p1;
		cout << "压力表读数，单位：kPa" << endl;
		cin >> p2;
		cout << "电机功率，单位：kW" << endl;
		cin >> Nd;
		cout << "测量转速，单位：r/min" << endl;
		cin >> n;

		//cout << "p1= " << p1<<endl;

		H = H0 + (p1*1000 + p2*1000) / (p * g);
		N = Nd * k;

		Qh = Q * (ne / n);
		Hh = H * (ne / n) * (ne / n);
		Nh = N * (ne / n) * (ne / n) * (ne / n);

		xl = Hh * Qh / 3600 * p * g / (Nh * 1000) * 100;

		cout << endl;
		cout << "Q= " << Qh << endl;
		cout << "H= " << Hh << endl;
		cout << "N= " << Nh << endl;
		cout << "效率= " << xl << "%" << endl << endl;
	} while (i == 0);
}
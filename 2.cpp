#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	do
	{
		double Q, Qh, p1, p2, Nd, N, Nh, xl,H, Hh,
			ne,//���ת��
			n,//����ת��
			c;//�����ת��

		double H0 = 0.21,
			p = 998.2,
			g = 9.81,
			k = 0.95;

		cout << "����" << endl << "�ת�٣���λ��r/min" << endl;
		cin >> ne;
		cout << "��������λ��m3/h" << endl;
		cin >> Q;
		cout << "��ձ��������λ��kPa" << endl;
		cin >> p1;
		cout << "ѹ�����������λ��kPa" << endl;
		cin >> p2;
		cout << "������ʣ���λ��kW" << endl;
		cin >> Nd;
		cout << "����ת�٣���λ��r/min" << endl;
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
		cout << "Ч��= " << xl << "%" << endl << endl;
	} while (i == 0);
}
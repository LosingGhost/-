#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	int n;
	cout << "1________________________________________________________1" << endl
		<< "Ϊ����ͬѧ�Ƕ���˷��ڲ���Ҫ�ظ������ϵ�ʱ�䣬�ش����������" << endl
		<< "                                                               ��������" << endl;
	cout << "���²�������谴�س�"<<endl;
	cout << "�⻬ �� �ֲ� ����1 ���ֲ� ����2 ������ 0 �˳�"<<endl;
	cin >> n;

	if(n==1)
		do
		{
			cout << "�⻬" << endl;
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l;
			sr = 0.001005;                          //ճ��
			d = 0.02;
			p = 998.2;

			l = 1;//l�⻬ = 0.1;l�ֲ� = 0.1;l�ֲ� = 0.946;

			cout << "���� " << endl;
			cout << "��ܣ���λmm" << endl;
			cin >> z;
			cout << "�ҹܣ���λmm" << endl;
			cin >> y;
			cout << "��������λL/h " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			lmd = 2 * d * g * R / (l * u * u);

			cout << "u=" << u << endl;
			cout << "R= " << R * 1000 <<"��λmm" << endl;
			cout << "Re= " << Re << endl;
			cout << "��= " << lmd << endl<<endl;

			//______________________________________________
			cout << "�ֲ�" << endl;
			double yp;
			sr = 0.001005;                          //ճ��
			d = 0.02;
			p = 998.2;

			l = 0.946;//l�⻬ = 1;l�ֲ� = 1;l�ֲ� = 0.946;

			cout << "���� " << endl;
			cout << "��ܣ���λmm" << endl;
			cin >> z;
			cout << "�ҹܣ���λmm" << endl;
			cin >> y;
			cout << "��������λL/h  " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			yp = 2 * g * R / (u * u) - lmd * l / d;

			//cout << "u=" << u << endl;
			cout << "R= " << R * 1000 << "��λmm" << endl;
			cout << "Re= " << Re << endl;
			cout << "��= " << lmd << endl;
			cout << "��= " << yp << endl<<endl
				<<"�����ɣ�"<<endl<<endl;
			
		} while (i == 0);

	else if(n==2)
		do
		{
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l;
			sr = 0.001005;                          //ճ��
			d = 0.021;
			p = 998.2;

			l = 1;//l�⻬ = 0.1;l�ֲ� = 0.1;l�ֲ� = 0.946;

			cout << "���� " << endl;
			cout << "��ܣ���λmm" << endl;
			cin >> z;
			cout << "�ҹܣ���λmm" << endl;
			cin >> y;
			cout << "��������λL/h  " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			lmd = 2 * d * g * R / (l * u * u);

			//cout << "u=" << u << endl;
			cout << "R= " << R * 1000 << "��λmm" << endl;
			cout << "Re= " << Re << endl;
			cout << "��= " << lmd << endl<<endl;
		} while (i == 0);

	else if(n==3)
		do
		{
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l,yp;
			sr = 0.001005;                          //ճ��
			d = 0.02;
			p = 998.2;

			l = 0.946;//l�⻬ = 1;l�ֲ� = 1;l�ֲ� = 0.946;

			cout << "���� " << endl;
			cout << "��ܣ���λmm" << endl;
			cin >> z;
			cout << "�ҹܣ���λmm" << endl;
			cin >> y;
			cout << "��������λL/h  " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			lmd = 2 * d * g * R / (l * u * u);
			yp = 2 * g * R / (u * u) - lmd * l / d;

			//cout << "u=" << u << endl;
			cout << "R= " << R * 1000 << "��λmm" << endl;
			cout << "Re= " << Re << endl;
			cout << "��= " << lmd << endl;
			cout << "��= " << yp << endl;
			//cout << a << endl << b << endl<<a-b<<endl;
		} while (i == 0);
}
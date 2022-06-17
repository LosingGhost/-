#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	int n;
	cout << "1________________________________________________________1" << endl
		<< "为帮助同学们夺回浪费在不必要重复工作上的时间，特此制作此软件" << endl
		<< "                                                               贾阳制作" << endl;
	cout << "以下操作后均需按回车"<<endl;
	cout << "光滑 和 局部 输入1 ，粗糙 输入2 ，输入 0 退出"<<endl;
	cin >> n;

	if(n==1)
		do
		{
			cout << "光滑" << endl;
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l;
			sr = 0.001005;                          //粘度
			d = 0.02;
			p = 998.2;

			l = 1;//l光滑 = 0.1;l粗糙 = 0.1;l局部 = 0.946;

			cout << "输入 " << endl;
			cout << "左管，单位mm" << endl;
			cin >> z;
			cout << "右管，单位mm" << endl;
			cin >> y;
			cout << "流量，单位L/h " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			lmd = 2 * d * g * R / (l * u * u);

			cout << "u=" << u << endl;
			cout << "R= " << R * 1000 <<"单位mm" << endl;
			cout << "Re= " << Re << endl;
			cout << "λ= " << lmd << endl<<endl;

			//______________________________________________
			cout << "局部" << endl;
			double yp;
			sr = 0.001005;                          //粘度
			d = 0.02;
			p = 998.2;

			l = 0.946;//l光滑 = 1;l粗糙 = 1;l局部 = 0.946;

			cout << "输入 " << endl;
			cout << "左管，单位mm" << endl;
			cin >> z;
			cout << "右管，单位mm" << endl;
			cin >> y;
			cout << "流量，单位L/h  " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			yp = 2 * g * R / (u * u) - lmd * l / d;

			//cout << "u=" << u << endl;
			cout << "R= " << R * 1000 << "单位mm" << endl;
			cout << "Re= " << Re << endl;
			cout << "λ= " << lmd << endl;
			cout << "ε= " << yp << endl<<endl
				<<"结果完成！"<<endl<<endl;
			
		} while (i == 0);

	else if(n==2)
		do
		{
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l;
			sr = 0.001005;                          //粘度
			d = 0.021;
			p = 998.2;

			l = 1;//l光滑 = 0.1;l粗糙 = 0.1;l局部 = 0.946;

			cout << "输入 " << endl;
			cout << "左管，单位mm" << endl;
			cin >> z;
			cout << "右管，单位mm" << endl;
			cin >> y;
			cout << "流量，单位L/h  " << endl;
			cin >> q;

			q = q / (1000 * 3600);
			u = q / (pi * (d / 2) * (d / 2));
			z = z / 1000;
			y = y / 1000;
			R = y - z;
			Re = d * u * p / sr;
			lmd = 2 * d * g * R / (l * u * u);

			//cout << "u=" << u << endl;
			cout << "R= " << R * 1000 << "单位mm" << endl;
			cout << "Re= " << Re << endl;
			cout << "λ= " << lmd << endl<<endl;
		} while (i == 0);

	else if(n==3)
		do
		{
			double pi = 3.1415926, g = 9.81;
			double R, z, y, Re, lmd, d, u, p, sr, q, l,yp;
			sr = 0.001005;                          //粘度
			d = 0.02;
			p = 998.2;

			l = 0.946;//l光滑 = 1;l粗糙 = 1;l局部 = 0.946;

			cout << "输入 " << endl;
			cout << "左管，单位mm" << endl;
			cin >> z;
			cout << "右管，单位mm" << endl;
			cin >> y;
			cout << "流量，单位L/h  " << endl;
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
			cout << "R= " << R * 1000 << "单位mm" << endl;
			cout << "Re= " << Re << endl;
			cout << "λ= " << lmd << endl;
			cout << "ε= " << yp << endl;
			//cout << a << endl << b << endl<<a-b<<endl;
		} while (i == 0);
}
#include <string>
#include <fstream>
#include <iostream>
#include <ctime>

#include "transcode.h"

using namespace std;

int main(int argc,char **argv)
{
	string in, out;

	if (argc == 3)
	{
		in = argv[1];
		out = argv[2];
	}
	else
	{
		cout << "������ԭʼ�ļ�·����\n";
		cin >> in;
		cout << "������Ŀ���ļ�·����\n";
		cin >> out;
	}

	clock_t start = clock();
	int result = Transcode(in.c_str(),out.c_str());
	clock_t end = clock();

	if (result == TRANS_SUCCESS)
	{
		cout <<"ת��ɹ�����ʱ��"<< end - start<<"ms\n";
	}
	else
	{
		cout << "ת��ʧ�ܣ�������룺" << result << "\n";
	}

	return 0;
}
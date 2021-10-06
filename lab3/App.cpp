#include "App.h"

void App::start() {

	List list;

	list.getListFromFile(const_cast<char*>("Date.txt"));

	int key = -1;
	do {

		cout << " ----------------����----------------" << endl;
		cout << " 1. �������� ��� ����\n";
		cout << " 2. �������� ���� - ��������� ����\n";
		cout << " 3. ������� ��������� ���� � �����\n";
		cout << " 0. ������� ���������" << endl;
		cout << " ------------------------------------" << endl;

		cout << "�������� ����� ����: "; cin >> key;

		switch (key)
		{
		case 1: {

			list.listPrint();

			break;
		}

		case 2: {

			list.listPrintSort();

			break;
		}

		case 3: {
			datetime sysTime;
			sysTime.showSysDate();
			break;
		}

		default:

			if (key != 0) cout << "����������� ������ ����� ����, ���������� ���������)" << endl;

			break;
		}

	} while (key != 0);

}

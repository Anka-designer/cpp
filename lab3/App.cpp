#include "App.h"

void App::start() {

	List list;

	list.getListFromFile(const_cast<char*>("Date.txt"));

	int key = -1;
	do {

		cout << " ----------------Меню----------------" << endl;
		cout << " 1. Показать все даты\n";
		cout << " 2. Показать дату - Следующая дата\n";
		cout << " 3. Вывести системную дату и время\n";
		cout << " 0. Закрыть программу" << endl;
		cout << " ------------------------------------" << endl;

		cout << "Выберите пункт меню: "; cin >> key;

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

			if (key != 0) cout << "Неправильно выбран пункт меню, пожалуйста повторите)" << endl;

			break;
		}

	} while (key != 0);

}

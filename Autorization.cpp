#include "Libr.h"
#include "Autorization.h"

using namespace std;

struct account {
	char login[16];
	char password[16];
};
bool authorize(char* login = 0, char* password = 0)
{
	char login_buf[16];
	char password_buf[16];

	if (!login)
	{
		login = login_buf;
		std::cout << ("Введите логин:");
		cin >> ("%15s", login);
	}

	if (!password)
	{
		password = password_buf;
		std::cout << ("Введите пароль:");
		cin >> ("%15s", password);
	}
	return true;
}
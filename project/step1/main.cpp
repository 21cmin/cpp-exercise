#include <iostream>
#include <cstring>
using namespace std;

#define NAME_LEN 5

enum { OPEN=1, DEPOSIT, WITHDRAW, PRINT, EXIT };

typedef struct
{
  int id;
  char name[NAME_LEN];
  int amount;
} Account;

Account customers[100];
int accountNum = 0;


void ShowMenu();
void PrintAccount();
void OpenAccount();
void Deposit();
void Withdraw();

int main(int argc, const char* argv[])
{
  int choice;
  while (true)
  {
    ShowMenu();
    cout << "choice: ";
    cin >> choice;
    switch (choice)
    {
    case OPEN:
      OpenAccount();
      break;
    case DEPOSIT:
      Deposit();
      break;
    case WITHDRAW:
      break;
    case PRINT:
      PrintAccount();
      break;
    case EXIT:
      return 0;
    }
  }
  
  return 0;
}

void ShowMenu()
{
    cout << "----Menu----" <<endl;
    cout << "1. open account" << endl;
    cout << "2. deposit" << endl;
    cout << "3. withdraw" << endl;
    cout << "4. print account" << endl;
    cout << "5. end of Program" << endl;
}

void OpenAccount()
{
  int id, amount;
  char name[NAME_LEN];

  cout << "[open account]" << endl;
  cout << "id: ";
  cin >> id;
  cout << "name: ";
  cin >> name;
  cout << "deposit ammount: ";
  cin >> amount;

  customers[accountNum].id = id;
  customers[accountNum].amount = amount;
  strcpy(customers[accountNum].name, name);
  accountNum++;
}

void Deposit()
{
  int id, amount;
  cout << "[Deposit]" << endl;
  cout << "id: ";
  cin >> id;
  cout << "amount: ";
  cin >> amount;

  for (int i = 0; i < accountNum; i++)
  {
    if (customers[i].id == id)
    {
      customers[i].amount += amount;
      return;
    }
  }
  cout << "no match account" << endl;
}

void Withdraw()
{

}

void PrintAccount()
{
  for (int i = 0; i < accountNum; i++)
  {
    cout << "-------------------" << endl;
    cout << "ID: " << customers[i].id << endl;
    cout << "name: " << customers[i].name << endl;
    cout << "amount: " << customers[i].amount << endl;
    cout << "-------------------" << endl;
  }
}
  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int i, j, main_exit;
void menu();
struct date{
    int day;
    int month;
    int year;
};

struct {
    char name[60];
    int acc_no, age, phone_no;
    char address[60];
    char citizenship[15];
    char acc_type[25];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
};


int main(void)
{
  return 0;
}
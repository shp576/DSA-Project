#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

struct person{
  char name[50];
  char address[50];
  char father_name[50];
  int mobile_no;
  char gender[20];
  char email[100];
  char citizen[100]
};

void menu();
void got();
void start();
void back();
void add_record();
void view_record();
void modifyrecord();
void delete_record();
void search_record();

int main(void)
{

void menu(){
  system("cls");
  printf("\t\tMy PhoneBook");
  printf("\n\n\t\t Main Menu");
  printf("\n\n Choose the Option According to ur choice");
  printf("\n\n1.Add new Contact \n2.View Contact list \n3.Edit Contact List \n4.Search Contact \n5.Delete Contact \n6.Exit My PhoneBook");
}

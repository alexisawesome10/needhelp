#include <iostream>
#include <cstring>
#include <cctype>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

const int NAME {31};
const int INFO {121};

class athlete_profile
{
   public:
      athlete_profile *next;
      athlete_profile();
      athlete_profile(char*, char*, int, char*, char*, char*, int);
      char* getName();
      char* getSport();
      int getAge();
      char* getMedals();
      char* getFb_page();
      char* getCountry();
      int getDifficulty();

   private:
      char name[NAME];
      char sport[INFO];
      int age;
      char medals[INFO];
      char fb_page[INFO];
      char country[INFO];
      int difficulty;
};

class Olympics
{
   public:
      Olympics();    //constructor
      ~Olympics();   //deconstructor
      athlete_profile read(int i);
      void display();
   private:
      int list_size;
      athlete_profile* list =NULL;
};
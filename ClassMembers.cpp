#include "ClassMembers.h"

//Constructor to initialize all the data members in the class to the zero equivalent value
Olympics::Olympics()
{
   std::cout << "How many athletes would you like to put in the list?";
   std::cin >> list_size;
   std::cin.ignore(100, '\n');

   list = new athlete_profile[list_size];
       for (int i = 0; i < list_size; i++) 
       {
          list[i] =  read(i);
       }
}

//Deconstructor to deallocate the dynamic memory
Olympics::~Olympics()
{
   if(list != NULL)
      delete [] list;
   list = NULL;
   list_size = 0;
}

char* athlete_profile::getName() 
{
   return name;
}

char* athlete_profile::getSport() 
{
   return sport;
}

int athlete_profile::getAge() 
{
   return age;
}

char* athlete_profile::getMedals() 
{
   return medals;
}

char* athlete_profile::getFb_page() 
{
   return fb_page;
}

char* athlete_profile::getCountry() 
{
   return country;
}

int athlete_profile::getDifficulty() 
{
   return difficulty;
}


athlete_profile::athlete_profile(char *n, char *s, int a, char *m, char *f, char *c, int d) 
{
   strcpy(name, n);
   strcpy(sport, s);
   age = a;
   strcpy(medals, m);
   strcpy(fb_page, f);
   strcpy(country, c);
   difficulty = d;
}

//Read function to allow the user to enter in a new athlete to the list and the fields of information for that athlete.
athlete_profile Olympics::read(int i) 
{
   std::cout << "List of " << (i + 1) << "\n";
   char name[NAME];
   char sport[INFO];
   int age;
   char medals[INFO];
   char fb_page[INFO];
   char country[INFO];
   int difficulty;

   std::cout << "\n\nPlease enter the name of the athlete you would like to add: ";
   std::cin.get(name, NAME, '\n');
   std::cin.ignore(100, '\n');
   std::cout << "You entered: " << name;

   std::cout << "\n\nPlease enter the sport of the athlete: ";
   std::cin.get(sport, INFO, '\n');
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << sport;

   std::cout << "Please enter the athlete's age (e.g. 24)";
   std::cin >> age;
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << age;

   std::cout << "\n\nPlease enter the medals won by the athlete: ";
   std::cin.get(medals, INFO, '\n');
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << medals;

   std::cout << "\n\nPlease enter the facebook page of the athlete: ";
   std::cin.get(fb_page, INFO, '\n');
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << fb_page;

   std::cout << "\n\nPlease enter the country of the athlete: ";
   std::cin.get(country, INFO, '\n');
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << country;

   std::cout << "Please enter the level of difficulty of the sport from 1 (easy) - 10 (hard) (e.g. 10)";
   std::cin >> difficulty;
   std::cin.ignore(100, '\n');
   std::cout << "\nYou entered: " << difficulty;

   return athlete_profile(name, sport, age, medals, fb_page, country, difficulty);
}


void Olympics::display() {
   std::cout << "\nDisplaying list...\n";
   for(int i = 0; i < list_size; i++) 
   {
      std::cout << "-------------------------------------------------------------------"<< endl;
      athlete_profile s = list[i];
      std::cout << "Name         : " << s.getName() << "\n";
      std::cout << "Sport        : " << s.getSport() << "\n";
      std::cout << "Age          : " << s.getAge() << "\n";
      std::cout << "Medals       : " << s.getMedals() << "\n";
      std::cout << "Facebook Page: " << s.getFb_page() << "\n";
      std::cout << "Country      : " << s.getCountry() << "\n";
      std::cout << "Difficulty   : " << s.getDifficulty() << "\n";
  }
  std::cout << "-------------------------------------------------------------------"<< endl;
}
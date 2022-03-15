#include "ClassMembers.h"

int main()
{
   char menu_select;  //Used to take the user's input for the menu
   int i;	      //Used for list size.
   Olympics my_athletes;

   Olympics *mylist = new Olympics();
   mylist->display();

   //menu to do more
   do
   {
      cout << "Please select from the following: (a) display all, (b) display desired level of difficulty, "
           << "(c) add an athlete, (d) edit an athlete's information, or (e) quit.\n\n"
           << "Enter 'a' for (a), 'b' for (b), 'c' for (c), 'd' for (d), or 'e' for (e): ";
      cin >> menu_select;
      cin.ignore(100, '\n');
      cout << "\n\nYou entered: " << menu_select << endl << endl;
      cout << "-------------------------------------------------------------------"<< endl;
      if (menu_select == 'a')
          mylist->display();
      if (menu_select == 'b')
         cout << "under construction";
      if (menu_select == 'c')
         my_athletes.read(i);
      if (menu_select == 'd')
         cout << "under construction";
   }while (menu_select != 'e');
  
   if (menu_select == 'e')
      cout << "Quitting...";
   return 0;
}

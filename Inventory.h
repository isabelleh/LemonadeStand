//jack edit mar 23, 2014

//Inventory class to be used in composition from the main LemonadeStand class

#ifndef INVENTORY_H

#define INVENTORY_H

#include <iostream>
using namespace std;

class Inventory {

        public:
               Inventory();                    //default constructor; sets default values for lemons, sugar, ice, cups, and money
                void addLemons(int);            //adds an integer input value of lemons to the inventory
                void addSugar(int);             //adds an integer input value of sugar to the inventory
                void addIce(int);               //adds an integer input value of ice to the inventory
                void addCups(int);              //adds an integer input value of cups to the inventory
                void removeMoney(int);	        //removes money	spent
                void addMoney(int);	        //adds money from sales
                int checkInventory();           //sees if there is enough inventory to make more lemonade. calls the check functions below
                int checkCups();                //sees if there are cups available to sell lemonade. If 0 cups are available, returns 0
                int checkLemons();              //sees if there are enough lemons to make another batch by looking at userRecipe
                int checkSugar();               //sees if there are enough cups of sugar to make another batch by looking at userRecipe
                int checkIce();                 //sees if there is enough ice to make another batch by looking at userRecipe
                void makeLemonade();            //makes a batch of lemonade and removes the items from the inventory

        private:
                int lemons;             //number of lemons in inventory
                int sugar;              //cups of sugar in inventory
                int ice;                //number of ice cubes in inventory
                int cups;               //number of paper cups in inventory
                int money;              //amount of money the user has; initialized to 20 dollars
                Recipe userRecipe;         //calls a derived Recipe class, using composition from the base class LemonadeStand
                                                        //user creates a recipe by deciding how many cups of sugar, lemons, and ice in
                                                        //each cup of lemonade. The inputs to the function are sugar, lemons, and ice
                                                        //a value will be returned signifying how tasty the recipe would be to potential
                                                        //customers

}

#endif

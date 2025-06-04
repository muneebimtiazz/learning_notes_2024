// Code with Constants 
#include<iostream>
using namespace std;
int main(){
    const int NEW_GAME=1;
    const int LOAD_GAME=2;
    const int OPTIONS=3;
    const int QUIT=4;

    int choice=1;

    switch(choice){
        case 1:
            cout<<"Starting a new game."<<endl;
            break;
        case 2:
            cout<<"Loading a saved game."<<endl;
            break;
        case 3:
            cout<<"Opening game options."<<endl;
            break;
        case 4:
            cout<<"Exiting the game."<<endl;
            break;
        default:
            cout<<"Invalid choice."<<endl;
            break;
    }
    return 0;
}

// Code with Enums
#include<iostream>
using namespace std;
enum MenuOption{
    NEW_GAME,
    LOAD_GAME,
    OPTIONS,
    QUIT
};
int main(){
    MenuOption choice=MenuOption::LOAD_GAME;

    switch(choice){
        case MenuOption::NEW_GAME:
            cout<<"Starting a new game."<<endl;
            break;
        case MenuOption::LOAD_GAME:
            cout<<"Loading a saved game."<<endl;
            break;
        case MenuOption::OPTIONS:
            cout<<"Opening game options."<<endl;
            break;
        case MenuOption::QUIT:
            cout<<"Exiting the game."<<endl;
            break;
        default:
            cout<<"Invalid choice."<<endl;
            break;
    }

    return 0;
}
/*
Imagine a Menu:
Think of a menu in a restaurant. You have different items you can order: burgers, pizza, salad, and ice cream.
Numbering the Menu Items:
Now, let's say you want to write down the menu items on a piece of paper. You could number them like this:
1-Burger
2-Pizza
3-Salad
4-Ice Cream
The Problem:
But what if someone asks you what item number 3 is? You'd have to look at your list and say, "Number 3 is salad." It works, but it's not very clear.
Using Enums:
Enums are like giving each menu item a name instead of a number. It's like this:
Burger
Pizza
Salad
Ice Cream
Now, if someone asks you what "Salad" is, you can say, "Salad is a menu item." It's much clearer!
In Code:
In computer programs, we often have lists of things like colors, days of the week, or menu options. Enums let us give these things names instead of using numbers.
So, enums make our code more like a clear menu and less like a list of numbered items. They help us understand and work with our code more easily.
*/


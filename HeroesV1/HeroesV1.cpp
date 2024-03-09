#include <iostream>
#include "HeroesDB.h"
#include "Console.h"
#include "Input.h"
#include "Tester.h"

#include <string>


int main()
{


    Tester v1Test;
    /*
        NOTE: if you're having problems with the menu showing, it could be because you're using Windows Terminal.
        Go here to learn how to change Windows to use the Console window instead. 
        https://discord.com/channels/446669518593327105/1151952874012688384/1153398632763097212
    
    */
    Console::ResizeWindow(150, 30);

    HeroesDB heroDB;

    /*
        Here are some examples.
            - how to call methods
            - how to use the Console Write methods
            - how to access the data values of a Hero.
    */
    Hero theBest = heroDB.GetBestHero(); //how to call a non-static method
    Console::Write("The best hero is "); //how to call a static method
    Console::Write(theBest.Name(), ConsoleColor::Yellow);
    Console::Write("! (of course).\nThe Id of the hero is ");
    Console::Write(std::to_string(theBest.Id()), ConsoleColor::Green);
    Console::Write(".\nHis combat level is ");
    Console::Write(std::to_string(theBest.Powerstats().Combat), ConsoleColor::Red);
    Console::WriteLine("!");
    Input::PressEnter();

    HeroBio heroBio;
    int menuSelection = 0;
    std::vector<std::string> menuOptions { "1. Show Heroes", "2. Remove Hero", "3. Starts With", "4. Find Hero", "5. Remove All Heroes", "6. Show Top x", "7. Exit" };
    do
    {
        Console::Clear();
        menuSelection = Input::GetMenuSelection(menuOptions);
        Console::Clear();



        switch (menuSelection)
        {
        case 1:
        {
            std::cout << "All Hero Names:\n" << std::endl;
            HeroesDB heroesDB;
            break;
        }
        case 2:
        {
            Console::WriteLine("Remove hero by the name of: \n");
            std::string input;
            std::cin >> input;
            Console::WriteLine("Removing the following heros containing the name: \n");
            std::cout << input;
            Console::WriteLine("\n============================================== \n (list here)");
            Input::PressEnter();
            break;
        }
        case 3:
        {
            Console::WriteLine("Heroes that start by the name of: \n");
            Hero Of_All;
            break;
        }
        case 4:
        {
            Console::WriteLine("Find heroes by the name of: \n");
            break;
        }
        case 5:
        {
            Console::WriteLine("Remove all heroes: \n");
            //HeroesDB::
            
            break;
        }
        case 6:
        {
            Console::WriteLine("Show heroes with top (number): \n");
            break;
        }
        default:
            break;
        }

        Input::PressEnter();

    } while (menuSelection != menuOptions.size());
}



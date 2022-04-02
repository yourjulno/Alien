//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_STARTINGMENU_H
#define ALIEN_STARTINGMENU_H

#include "Menu.h"


class StartingMenu: public Menu {
protected:
    void nextWindow() override;
    //void menu();

public:
    StartingMenu();
    void run() override;
    ~StartingMenu();
};
///////////backgroud, play, name_of_game textures//////////////////////
// void menu(RenderWindow & window) {
//     Texture menuTexture1, menuTexture2, menuTexture3, aboutTexture, menuBackground;
//     menuTexture1.loadFromFile("C:/Users/79096/CLionProjects/game3/PLAY.png");
//     menuTexture2.loadFromFile("C:/Users/79096/CLionProjects/game3/alien_wave_2.png");
//     //menuTexture3.loadFromFile("C:/Users/79096/CLionProjects/game3/111.jpg");
//     //aboutTexture.loadFromFile("C:/Users/79096/CLionProjects/game3/alien_wave.png");
//     menuBackground.loadFromFile("C:/Users/79096/CLionProjects/game3/5698aad283f6267.png");
//     Sprite menu1(menuTexture1), menu2(menuTexture2),  menuBg(menuBackground);
//     bool isMenu = 1;
//     int menuNum = 0;
//     menu1.setPosition(300, 600);
//     menu2.setPosition(-400, -500);
//    // menu3.setPosition(100, 150);
//     menuBg.setPosition(0, 0);

//     //////////////////////////////МЕНЮ///////////////////
//     while (isMenu)
//     {
//         menu1.setColor(Color::White);
//         //menu2.setColor(Color::White);
//        // menu3.setColor(Color::White);
//         menuNum = 0;
//         window.clear(Color(129, 181, 221));

//         if (IntRect(100, 30, 300, 50).contains(Mouse::getPosition(window))) {
//             menu1.setColor(Color::Blue);
//             menuNum = 1;
//         }
//         if (IntRect(100, 90, 300, 50).contains(Mouse::getPosition(window))) {
//             //menu2.setColor(Color::Blue);
//             menuNum = 2;
//         }

//         if (Mouse::isButtonPressed(Mouse::Left))
//         {
//             if (menuNum == 1)
//                 isMenu = false;//если нажали первую кнопку, то выходим из меню
//             if (menuNum == 2) {
//                //window.draw(about);
//                 window.display();
//                 while (!Keyboard::isKeyPressed(Keyboard::Escape));
          

//         }


//         window.draw(menuBg);
//         window.draw(menu1);
//         window.draw(menu2);
       

//         window.display();
//     }
//     ////////////////////////////////////////////////////
// };


#endif //ALIEN_STARTINGMENU_H

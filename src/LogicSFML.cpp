#include "LogicSFML.hpp"

LogicSFML::LogicSFML(MainScreen &mainScreen, ChooseScreen &chooseScreen,
                     TripScreen &tripScreen,UserScreen &userScreen,DriverFound& driverFound)
                     :mainScreen(mainScreen),chooseScreen(chooseScreen),tripScreen(tripScreen)
                     ,userScreen(userScreen),driverFound(driverFound)

                     {}

void LogicSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if(mainOptions=="mainScreen")
    target.draw(mainScreen,states);
    else if(mainOptions=="chooseScreen")
    target.draw(chooseScreen,states);
    else if(mainOptions=="tripScreen")
    target.draw(tripScreen,states);
    else if(mainOptions=="userScreen")
    target.draw(userScreen,states);
    else if(mainOptions=="driverFound")
    target.draw(driverFound,states);
}
void LogicSFML::handleEvent(sf::Event &event, sf::RenderWindow &win) {

    auto mouse_pos = sf::Mouse::getPosition(win);
    auto translated_pos = win.mapPixelToCoords(mouse_pos);

    if(mainOptions=="mainScreen")
    mainScreen.handleEvent(event,win,translated_pos);
    else if(mainOptions=="chooseScreen")
    chooseScreen.handleEvent(event,win);
    else if(mainOptions=="tripScreen")
    tripScreen.handleEvent(event,win);
    else if(mainOptions=="userScreen")
    userScreen.handleEvent(event,win);
    else if(mainOptions=="driverFound")
    driverFound.handleEvent(event,win);

}
void LogicSFML::update(){
    mainOptions="mainScreen"; 
    if(mainScreen.options==""){
    if(mainScreen.options=="Drive"){

        mainScreen.options="empty";
        mainOptions="tripScreen";
    }

    else if(mainScreen.options=="Passenger"){
        mainScreen.options="empty";
        mainOptions="tripScreen";
    }
    else if(mainScreen.options=="User"){
        mainScreen.options="empty";
        mainOptions="userScreen";
    }




    if(chooseScreen.options=="coś"){
        chooseScreen.options="empty";
    }

    else if(chooseScreen.options=="coś"){
        chooseScreen.options="empty";
    }




    if(tripScreen.options=="coś"){
        tripScreen.options="empty";
    }

    else if(tripScreen.options=="runSearch"){
        tripScreen.options="driverFound";
    }





    if(userScreen.options=="coś"){
        userScreen.options="empty";
    }

    else if(userScreen.options=="coś"){
        userScreen.options="empty";
    }

    if(driverFound.options=="coś"){
        driverFound.options="empty";
    }

    else if(driverFound.options=="coś"){
        driverFound.options="empty";
    }

}


LogicSFML::~LogicSFML() noexcept {}







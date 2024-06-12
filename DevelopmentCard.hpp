/*  ID: 212051007
    Mail: mayrozen45@gmail.com
*/

#ifndef DEVELOPMENTCARD_HPP
#define DEVELOPMENTCARD_HPP

#include <iostream>
#include <string>
#include "Tile.cpp"
#include "player.hpp"
#include "catan.cpp"
using namespace std;
class Player; // Forward declaration of Player
class Catan;

/*
1   Monopoly -> can take one resourceType from all the other players
    BuildingRoads -> build 2 roads without any resourceType payment
    YearOfAbundance -> can choose 2 resourceType without any resourceType payment

2   Knight -> need 3 cards for 2 points

3   VictoryPoint -> there is 4 cards and every one can give 1 point
*/


enum class CardType {
    Monopoly,
    BuildingRoads,
    YearOfAbundance,
    Knight,
    VictoryPoint
};

string toString(CardType type) {
    switch(type) {
        case CardType::Monopoly:
            return "Monopoly";
        case CardType::BuildingRoads:
            return "Building Roads";
        case CardType::YearOfAbundance:
            return "Year of Abundance";
        case CardType::Knight:
            return "Knight";
        case CardType::VictoryPoint:
            return "Victory Point";
        default:
            return "Unknown";
    }
}

class DevelopmentCard { // Abstract class
public:
    virtual CardType getType() const;
    virtual string getCardName() const;
    virtual void useCard(Catan* game, Player& p);
    virtual ~DevelopmentCard() = default;
};

// -----------------------------MonopolyCard-----------------------------
class MonopolyCard : public DevelopmentCard {
public:
    CardType getType() const override;

    string getCardName() const override;

    void useCard(Catan* game, Player& p) override;
};

// -----------------------------BuildingRoadsCard-----------------------------
class BuildingRoadsCard : public DevelopmentCard {
public:
    CardType getType() const override;
    string getCardName() const override;
    void useCard(Catan* game, Player& p) override;
};

// -----------------------------YearOfAbundanceCard-----------------------------
class YearOfAbundanceCard : public DevelopmentCard {
public:
    CardType getType() const override;
    string getCardName() const override;
    void useCard(Catan* game, Player& p) override;
};

// -----------------------------KnightCard-----------------------------
class KnightCard : public DevelopmentCard {
public:
    CardType getType() const override;
    string getCardName() const override;
    void useCard(Catan* game, Player& p) override;
};

// -----------------------------VictoryPointCard-----------------------------
class VictoryPointCard : public DevelopmentCard {
public:
    CardType getType() const override;
    string getCardName() const override;
    void useCard(Catan* game, Player& p) override;
};


#endif // DEVELOPMENTCARD_HPP

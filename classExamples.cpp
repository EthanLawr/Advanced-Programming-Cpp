#include <iostream>
#include <string>
using namespace std;

class Superhero
{
public:
    string name;       // Property: Name of the superhero
    string superpower; // Property: Special power of the superhero
    int strength;      // Property: Strength of the superhero
    // Constructor
    Superhero(string heroName, string heroPower, int heroStrength)
    {
        name = heroName;
        superpower = heroPower;
        strength = heroStrength;
    }
    void useSuperpower()
    {
        cout << name << " uses " << superpower << "!" << endl;
    }
    // Method to display values
    void displayInfo()
    {
        cout << "Superhero Name: " << name << endl;
        cout << "Superpower: " << superpower << endl;
        cout << "Strength Level: " << strength << endl;
    }

};

class Spaceship
{
public:
    string color; // Property: Color of the spaceship
    int speed;    // Property: Speed of the spaceship
    int fuel;     // Property: Available fuel
    // Constructor
    Spaceship(string shipColor, int shipSpeed, int shipFuel)
    {
        color = shipColor;
        speed = shipSpeed;
        fuel = shipFuel;
    }
    void fly()
    {
        cout << "The " << color << " spaceship zooms at " << speed << " light-years per hour!" << endl;
    }
    void refuel()
    {
        fuel = 100; // Refill fuel to maximum
        cout << "Spaceship refueled! Ready for more adventures!" << endl;
    }
    // Method to display values
    void displayInfo()
    {
        cout << "Spaceship Color: " << color << endl;
        cout << "Speed: " << speed << " light-years/hour" << endl;
        cout << "Fuel Level: " << fuel << "%" << endl;
    }
};

class Monster
{
public:
    string type;     // Property: Type of monster (e.g., "Fluffy")
    int scariness;   // Property: How scary the monster is
    bool isFriendly; // Property: Is it friendly or not?
    // Constructor
    Monster(string monsterType, int monsterScariness, bool friendly)
    {
        type = monsterType;
        scariness = monsterScariness;
        isFriendly = friendly;
    }
    void roar()
    {
        if (isFriendly)
        {
            cout << "The " << type << " monster makes a friendly growl!" << endl;
        }
        else
        {
            cout << "The " << type << " monster roars scarily!" << endl;
        }
    }
    // Method to display values
    void displayInfo()
    {
        cout << "Monster Type: " << type << endl;
        cout << "Scariness Level: " << scariness << endl;
        cout << "Is Friendly: " << (isFriendly ? "Yes" : "No") << endl;
    }
};

class MagicWand
{
public:
    string wood; // Property: Type of wood the wand is made of
    string core; // Property: Magical core of the wand
    int power;   // Property: Level of magical power
    // Constructor
    MagicWand(string wandWood, string wandCore, int wandPower)
    {
        wood = wandWood;
        core = wandCore;
        power = wandPower;
    }
    void castSpell(string spell)
    {
        cout << "The " << wood << " wand with " << core << " core casts: " << spell << "!" << endl;
    }
    // Method to display values
    void displayInfo()
    {
        cout << "Wand Wood: " << wood << endl;
        cout << "Wand Core: " << core << endl;
        cout << "Power Level: " << power << endl;
    }
};

class Treasure
{
public:
    string item;   // Property: Type of treasure (e.g., "golden chest")
    int value;     // Property: Value of the treasure in gold coins
    bool isLocked; // Property: Is it locked?
    // Constructor
    Treasure(string treasureItem, int treasureValue, bool treasureLocked)
    {
        item = treasureItem;
        value = treasureValue;
        isLocked = treasureLocked;
    }
    void open()
    {
        if (isLocked)
        {
            cout << "The " << item << " is locked! Find the key first!" << endl;
        }
        else
        {
            cout << "You open the " << item << " and find " << value << " gold coins!"
                 << endl;
        }
    }
    // Method to display values
    void displayInfo()
    {
        cout << "Treasure Item: " << item << endl;
        cout << "Value: " << value << " gold coins" << endl;
        cout << "Is Locked: " << (isLocked ? "Yes" : "No") << endl;
    }
};

int main()
{
    Superhero myHero("Captain Awesome", "super strength", 100);
    myHero.useSuperpower(); // The hero uses their power!
    Spaceship playerShip("blue", 1000, 50);
    playerShip.fly();    // The ship flies!
    playerShip.refuel(); // We refuel
    Monster friendlyMonster("Charles", 2, true);
    friendlyMonster.roar(); // The monster roars friendly
    MagicWand playerWand("oak", "dragon heartstring", 75);
    playerWand.castSpell("Lumos"); // We cast a spell
    Treasure hiddenChest("golden chest", 500, true);
    hiddenChest.open(); // We try to open the chest
    cout << "\n--- Displaying All Object Info ---\n" << endl;
    myHero.displayInfo();
    cout << endl;
    playerShip.displayInfo();
    cout << endl;
    friendlyMonster.displayInfo();
    cout << endl;
    playerWand.displayInfo();
    cout << endl;
    hiddenChest.displayInfo();
    return 0;
}
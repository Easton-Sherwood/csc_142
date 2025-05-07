#include <iostream>
#include <string>

enum class CharacterClass { Bladeguard, Librarian, Eliminator, Rogue };


struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};


std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Bladeguard: return "Bladeguard";
        case CharacterClass::Librarian:    return "Librarian";
        case CharacterClass::Eliminator:  return "Eliminator";
        case CharacterClass::Rogue:   return "Rogue";
        default:                      return "Unknown";
    }
}

int main() {
 
    Character characters[4]{
      
        {"Titus",  CharacterClass::Bladeguard, 150, 90.5f},
        {"Ahriman", CharacterClass::Librarian,    100, 75.0f},
        {"Corvus", CharacterClass::Eliminator,   85, 80.0f},
        {"Barabas",   CharacterClass::Rogue,    120, 60.5f}
    };

    std::cout << "Characters:\n------------\n";

                      for (int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name << ", Type: " << classToString(characters[i].type)
                  << ", Health: " << characters[i].health
                  << ", Strength: " << characters[i].strength
                  << std::endl;
    }

    int sumHealth = 0;
    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;
    }
  
    float avgHealth = static_cast<float>(sumHealth) / 4.0f;
    
    std::cout << "\nAverage Health: " << avgHealth << std::endl;


    return 0;
}

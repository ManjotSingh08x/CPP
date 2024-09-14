#include <iostream>
using namespace std;

enum Monstertype {
    orge,
    dragon,
    orc,
    giant_spider,
    slime,
};

struct Monster{
    Monstertype type {};
    string name {};
    int health {};
};

string_view getType(Monstertype m){
    switch(m){
        case orge: return "Orge";
        case dragon: return "Dragon";
        case orc: return "Orc";
        case giant_spider: return "Giant Spider";
        case slime: return "Slime";
        default: return "???";
    }
}
void printMonster(Monster& m){
    cout << "This " << getType(m.type) << " is named " 
        << m.name << " and has " << m.health << " health.\n";
}

int main() {
    Monster a{orge, "Torg" , 145};
    printMonster(a);
    Monster b{slime, "Blurp", 145};
    printMonster(b);
    return 0;
}
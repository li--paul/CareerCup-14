#include <iostream>

using namespace std;

class Card {
public:
        Card(int s, int v) {suit = s; value = v;}
        int getValue() {return value;}
        int getSuit() {return suit;}
private:
        int suit;
        int value;
};

class BlackJackCard: Card {
public:
        BlackJackCard(int s, int v): Card(s,v) {}
        int getValue() {
                int r = Card::getValue();
                if (r==1) return 11;
                if (r<10) return r;
                return 10;
        }
};

int main() {
        Card c(2,12);
        BlackJackCard b(3,12);
        cout << c.getValue() << endl;
        cout << b.getValue() << endl;
        return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

class Game
{
protected:
    string Title;
    int Level;
    float Rating;

public:
    Game(string s, float r, int l)
    {
        Title = s;
        Rating = r;
        Level = l;
    }
    virtual void Display() {}
};

class Gametrailer : public Game
{
    float videoLength;

public:
    Gametrailer(string s, float r, int l, float vl) : Game(s, r, l)
    {
        videoLength = vl;
    }
    void Display()
    {
        cout << "The title of this video is: " << Title << endl
             << "Rating on imDb is: " << Rating << " out of 5 stars " << endl
             << "Level of the game is: " << Level << " Level " << endl
             << "Lenght of this video is: " << videoLength << " minutes " << endl;
    }
};

class GameManga : public Game
{
    int videoText;

public:
    GameManga(string s, float r, int l, int wc) : Game(s, r, l)
    {
        videoText = wc;
    }
    void Display()
    {
        cout << "\nThe title of this video is: " << Title << endl
             << "Rating on imDb is: " << Rating << " out of 5 stars " << endl
             << "Level of the game is: " << Level << " Level " << endl
             << "No. of text in this video is: " << videoText << " words " << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int level, words;

    title = "Game of Thrones";
    rating = 4.9;
    level = 18;
    vlen = 48.86;
    Gametrailer g1(title, rating, level, vlen);

    title = "Game of Thrones";
    rating = 4.5;
    level = 18;
    words = 2000;
    GameManga g2(title, rating, level, words);

    Game *ptr[2];
    ptr[0] = &g1;
    ptr[1] = &g2;

    ptr[0]->Display();
    ptr[1]->Display();

    return 0;
}
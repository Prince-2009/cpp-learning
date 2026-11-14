#include <iostream>
#include <cstring>
using namespace std;

class LWP
{
protected:
    string Title;
    float Rating;

public:
    LWP(string s, float r)
    {
        Title = s;
        Rating = r;
    }
    virtual void Display() {}
};

class LWPVideo : public LWP
{
    float videoLength;

public:
    LWPVideo(string s, float r, float vl) : LWP(s, r)
    {
        videoLength = vl;
    }
    void Display()
    {
        cout << "This is an amazing video with title: " << Title << endl;
        cout << "Ratings: " << Rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class LWPText : public LWP
{
    int words;

public:
    LWPText(string s, float r, int wc) : LWP(s, r)
    {
        words = wc;
    }
    void Display()
    {
        cout << "This is an amazing text tutorial with title: " << Title << endl;
        cout << "Ratings: " << Rating << " out of 5 stars" << endl;
        cout << "No of this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For Learing With Prince Video
    title = "C++ Tutorial";
    vlen = 23.9;
    rating = 4.79;
    LWPVideo cppVideo(title, rating, vlen);
    // cppVideo.Display();

    // For Learing With Prince Text
    title = "C++ Tutorial";
    words = 623;
    rating = 4.58;
    LWPText cppText(title, rating, words);
    // cppText.Display();

    LWP *tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0]->Display();
    tuts[1]->Display();

    return 0;
}
/* Rules for virtual functions
1. They cannot be ststic.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/
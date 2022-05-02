// SmartPointersApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory>
#include<vector>
using namespace std; 

struct Song {

    std::string m_sArtist; 
    std::string m_sTitle; 

    Song(const std::string atrist, const std::string title)
    {
        m_sArtist = atrist;
        m_sTitle = title; 
    }
};

unique_ptr <Song> SongFactory(const std::string artist, const std::string title)
{
    return make_unique<Song>(artist, title);
}

void SongVector()
{

    vector <unique_ptr<Song>> songs_vec; 
    songs_vec.push_back(SongFactory("Namie Amuro", "Funky Town"));
    songs_vec.push_back(make_unique<Song>("Kome Kome Club", "Kimi ga Iru Dake de"));
    songs_vec.push_back(make_unique<Song>("erik Clapton", "wounderfull tonight"));
    
    for (auto& s : songs_vec)
    {
        cout << "artist : " + s->m_sArtist + " Title: " + s->m_sTitle << endl;
    }

}
class Rectangle {
    
    int len; 
    int breadth;

public:
    Rectangle(int l, int b)
    {
        len = l;
        breadth = b;
    }
    int area()
    {
        return len * breadth;
    }
};
int main()
{    
    unique_ptr <Rectangle> P1(make_unique<Rectangle>( Rectangle(10, 5)));
    cout << "area of rectangle P1 is :"<<P1->area() << endl;
    unique_ptr<Rectangle> P2; 
    P2 = move(P1);
    cout << "area of rectangle P2 is :" << P2->area() << endl;
    
    unique_ptr<Song> s1= make_unique<Song>("bob marly", "no women no cry");
    //auto s1 = make_unique<Song>("bob marly", "no women no cry");
    string sArtist = "erik Clapton";
    string sTitle = "wounderfull tonight";
    auto s2 = SongFactory("erik Clapton","wounderfull tonight" );
    
    auto s3 = make_unique<Song>("led zepeling", "starway to heven");
    s3->m_sArtist;
    vector <std::string> titles_vec = { s1->m_sTitle, s2->m_sTitle };
    cout << titles_vec[0]+ ", "+ titles_vec[1] << endl;
    SongVector();        
}


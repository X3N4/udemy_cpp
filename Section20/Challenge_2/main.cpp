// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <iterator>
#include <sstream>

/*
Section 20
Challenge 2
Using std::list

In this challenge you will create a menu driven application that
will simulate a user playing songs from a playlist of songs.

We will use a list to simulate the user selecting the the first song in the playlist and
then selecting next and previous to play forward of backwards through the 
playlist.

Please refer to the video demo run.

We will also allow users to add new song to the playlist and they
will be added prior to the currently playing song.
The menu looks as follows:

F - Play First Song
N - Play Next song
P - Play Previous song
A - Add and play a new Song at current location
L - List the current playlist
========================
Enter a selection (Q to quit):

And the available playlist is modeled as a std::list<Song>
I will provide the Song class. Following are the songs in the playlist.
I grabbed these from the pop charts, you can use them or change 
them to any songs you wish.

God's Plan                  Drake                                       5
Never Be The Same   Camila Cabello                         5
Pray For Me               The Weekend and K. Lamar      4
The Middle                Zedd, Maren Morris & Grey     5
Wait                           Maroone 5                                4
Whatever It Takes      Imagine Dragons                      3

I have provided the starting project.
Have fun!

Note:
If you have trouble reading input, you can clear std::cin and 
ignore everything in the buffer with:

std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

Make sure you #include <limits> to use it.

*/
class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "PLAYING \n" << song << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    for (auto &s: playlist)
        std::cout << s << std::endl;
    play_current_song(current_song);
}

char get_user_input (){
    char input {};
    while (true) {
        std::cin >> input;
        input = std::tolower(input);
        if (input == 'f' || input == 'n' || input == 'p' || input == 'a' || input == 'l' || input == 'q')
            return input;
        display_menu();
    }
}

Song get_new_song(){
    std::string name, artist, entry;
    int rating {};
    std::cout << "Please enter the song's name: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::getline(std::cin, name);
    std::cout << "\nPlease enter the artist name: ";
    std::getline(std::cin, artist);
    
    bool done {false};
    do {
        std::cout << "\nPlease enter the song's rating: ";
        std::cin >> entry;
        std::istringstream validator {entry};
        if (validator >> rating){
            done = true;
        } else 
            std::cout << "Sorry, that's not a valid rating." << std::endl;
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        
    } while (!done);
    return Song {name, artist, rating};
}

bool select_action (const char &input, std::list<Song>::iterator &current_song, std::list<Song> &playlist) {
    switch(input) {
        case 'f': {
            current_song = std::begin(playlist); 
            return true;
        }
        case 'n': {
            ++current_song;
            if (current_song == std::end(playlist))
                current_song = std::begin(playlist);
            return true;
        }
        case 'p': {
            if (current_song == std::begin(playlist))
                current_song = std::end(playlist);
            --current_song;
            return true;
        }
        case 'a': {
            Song new_song {get_new_song()};
            playlist.insert(current_song, new_song); // insertion does not invalidate iterator
            --current_song;
            return true;
        }
        case 'l': {
            display_playlist(playlist, *current_song);
            return true;
        }
        case 'q': return false; break;
    }
    return true;
}

int main() {

    std::list<Song> playlist{
            {"Me gainst the world",        "2Pac",                     5},
            {"Big Poppa", "Notorious B.I.G",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  1},
            {"Ral muthaphukkin Gs",        "Eazy E", 4},
            {"Triumph",              "Wu-Tang Clan",                 5},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
    bool flag {true};
    do {
        display_playlist(playlist, *current_song);
        display_menu();
        char input {get_user_input()};
        flag = select_action(input, current_song, playlist);
    } while (flag);

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}
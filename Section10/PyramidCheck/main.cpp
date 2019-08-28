#include<iostream>

#include<cstring>

#include<cctype>

#include<string>

#include<cstdlib>

#include<ctime>


using std::cout;

using std::cin;

using std::endl;

using std::string;



string reverse(string str){

char r_characters[str.length()] {};

int j {0};

for(size_t i = str.length()-2; i>0; i--){

r_characters[j++] = str[i];

}

string r_cpp_string (r_characters);

return r_cpp_string;

}


void pyramid(string msg){

if(msg.length()==0)return;

if(msg.length() == 1){

cout << msg << endl;

}

else{

for(size_t i {0}; i<msg.length(); i++){

string spaces ((msg.length()-i), ' ');

spaces += msg.substr(0,i+1);

spaces += reverse(spaces);

cout << spaces<< endl;

}

}

}



int main(){

cout << "Enter text to pyramid: ";

string pyramidString;

cin >> pyramidString;

cout << endl;

pyramid(pyramidString);


return 0;

}
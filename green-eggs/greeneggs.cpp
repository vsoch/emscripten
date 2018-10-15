/** 
   greeneggs.cpp
   -------------

   This program will test reading a file using emscripten, in this case,
   Dr. Seuss Green Eggs and Ham!

   @author
    - Vanessa Sochat

   @references
    - https://kripken.github.io/emscripten-site/docs/getting_started/Tutorial.html
    - http://www.site.uottawa.ca/~lucia/courses/2131-02/A2/trythemsource.txt

   @version
    - October 15, 2018

   @usage
      em++ greeneggs.cpp
      node a.out.js

      # Generate html
      em++ greeneggs.cpp -o index.html --preload-file greeneggs.txt

      # Generate html, disable WASM
      em++ greeneggs.cpp -o index.html -s WASM=0

*/

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream stream;
    stream.open("greeneggs.txt");
    string line;

    if (!stream){
        cout << "Unable to open greeneggs.txt" << endl;
        return 1;
    }

    while(stream >> line) {
        cout << line << endl;
    }

    stream.close();
    return 0;
}

/** 
   travel.cpp
   ----------

   Given a destination point, print out all possible paths through it. 

   @author
    - Vanessa Sochat

   @references
    - https://kripken.github.io/emscripten-site/docs/getting_started/Tutorial.html

   @version
    - October 15, 2018

   @usage
      em++ travel.cpp -o index.html

      em++ travel.cpp
      node a.out.js
*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;

/**
    Function Prototypes
*/

bool contains(set <string> & seen, string s);
void findIt(int x, int y, int endX, int endY, set <string> & seen, string path);
void travel(int x, int y);


/**
    Function Definitions
*/



/**
    Determine if a set contains a particular string. Return True if yes, False
    otherwise.

    @param seen: a set of strings
    @param s: the string to find in the set
*/

bool setContains(set <string> & seen, string s) {
    if(seen.find(s) != seen.end()) {
        return true;
    }     
    return false;
}

void findIt(int x, int y, int endX, int endY, set <string> & seen, string path) {

    if (!setContains(seen, path)) {

        // We found it, print and add to seen
        if ((x == endX) && (y == endY)) {
            cout << path << endl;
            seen.insert(path);

        // We don't have a solution, keep trying
        } else {
        
            // If we can still move right, do it
            if (x < endX) {
                findIt(x+1, y, endX, endY, seen, path + "E ");
            }
            // Also try moving up
            if (y < endY) {
                findIt(x, y+1, endX, endY, seen, path + "N ");
            }

            // Also try moving up and right
            if ((y < endY) && (x < endX)) {
                findIt(x+1, y+1, endX, endY, seen, path + "NE ");
            }
        }
    }
}

void travel(int x, int y) {

    set <string> seen;
    
    // currentX currentY endX endY
    findIt(0, 0, x, y, seen, "");
}

int main() {

    cout << "Let's go on an adventure!" << endl
         << endl << "All possible paths from (0,0) to (1,2):" 
         << endl;

    travel(1, 2);
    return 0;
}

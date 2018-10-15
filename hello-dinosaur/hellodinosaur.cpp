/** 
   hellodinosaur.cpp
   -----------------

   This program will generate an enscripten (binary?) to print hello world,
   first to the console, and then in an html (web interface). I am learning
   how to use this, so that. :)

   @author
    - Vanessa Sochat

   @references
    - https://kripken.github.io/emscripten-site/docs/getting_started/Tutorial.html

   @version
    - October 15, 2018

   @usage
      em++ hellodinosaur.cpp -o index.html -s "BINARYEN_METHOD='native-wasm,asmjs'"
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    cout << "Hello, dinosaur!" << endl;
    return 0;
}

# Emscripten!

This is a tiny repository to learn (and have fun with 
[Emscripten](http://kripken.github.io/emscripten-site/docs/compiling/WebAssembly.html).
Specifically, I'm getting the hang of C++ and want to create some "in browser
experiments." 

## Build

For most of these, you can compile the cpp script as follows:

```bash
em++ helloworld.cpp -o index.html
```

If it doesn't work in your browser, you can disable WebAssembly:

```bash
em++ helloworld.cpp -o index.html -s WASM=0
```

I was having a hard time getting the wasm to work on Github Pages, so the
examples here are running without it.

## Experiments

 - [hello-world](hello-world): or more properly, "Hello Dinosaur!" ([web](https://vsoch.github.io/emscripten/hello-world/))
 - [travel](travel): a fun testing problem I did to study for a course! ([web](https://vsoch.github.io/emscripten/travel/))

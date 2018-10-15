# Green Eggs and Ham

This example will test how to read in a file from the server, in this case
Dr. Seuss Green Eggs and Ham!

## Build

```bash
em++ greeneggs.cpp
```

## Run

```bash
node a.out.js
```

## WebAssembly
If the server and browser support WebAssembly:

```
em++ greeneggs.cpp -o index.html
```

## Without wasm
or compile without it (for example, Github Pages didn't seem to like it)

```
em++ greeneggs.cpp -o index.html -s WASM=0
```

## Build

```bash
em++ travel.cpp
```

## Run

```bash
node a.out.js
```

## WebAssembly
If the server and browser support WebAssembly:

```
em++ travel.cpp -o index.html
```

## Without wasm
or compile without it (for example, Github Pages didn't seem to like it)

```
em++ travel.cpp -o index.html -s WASM=0
```

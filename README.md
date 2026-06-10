# cpp-svg-viewer

A local web application written in **C++** using [cpp-httplib](https://github.com/yhirose/cpp-httplib).
No JavaScript frameworks, no Node.js – just C++ serving HTML.

## Requirements

- `g++` with C++17 support
- `curl` (for downloading the httplib header)
- `make`

## Build & Run

```bash
# Build (downloads httplib.h automatically)
make

# Build & start server directly
make run
```

Then open your browser at [http://localhost:8080](http://localhost:8080)

## Project Structure

```
cpp-svg-viewer/
├── src/
│   └── main.cpp       # C++ HTTP server
├── vendor/            # auto-generated, not tracked
│   └── httplib.h      # downloaded via make
├── Makefile
├── .gitignore
└── README.md
```

## Roadmap

- [x] Hello World – C++ HTTP server
- [ ] SVG Viewer – lokal Verzeichnis per Browser File API öffnen
- [ ] SVG-Dateien im Grid darstellen

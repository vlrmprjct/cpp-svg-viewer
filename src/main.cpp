#include "../vendor/httplib.h"
#include <cstdio>

int main() {

    httplib::Server svr;

    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content(R"(
<!DOCTYPE html>
<html lang="de">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C++ SVG Viewer</title>
    <style>
        * { box-sizing: border-box; margin: 0; padding: 0; }
        body {
            font-family: monospace;
            background: #1a1a1a;
            color: #00ff00;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }
        h1 { font-size: 3rem; margin-bottom: 1rem; }
        p  { color: #555; font-size: 0.9rem; }
    </style>
</head>
<body>
    <h1>Hello, World!</h1>
    <p>Powered by C++ &amp; cpp-httplib</p>
</body>
</html>
        )", "text/html");
    });

    printf("Server running at http://localhost:8080\n");
    svr.listen("localhost", 8080);

    return 0;
}

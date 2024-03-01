# medical-management-system

A Hospital management system built in c++

## How i downloaded the json lib

```bash
curl -L https://github.com/nlohmann/json/releases/download/v3.11.3/json.hpp -o json.hpp
```

## How to compile w/ the new folder structure

```bash
g++ src/main.cpp -o bin/main -I include/
```

## Compile program example

This is if  you are compiling a file that's utilizing the json.hpp

```bash
g++ -std=c++11 -stdlib=libc++ -o main main.cpp patient.cpp
```

## How to run the program

```bash
./bin/main
```

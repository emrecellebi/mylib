@echo off

g++ -c ./src/*.cpp -I ./include
g++ -shared -o ./bin/mylib.dll *.o -Wl,--output-def,./def/mylib.def,--out-implib,./lib/mylib.lib -lwinmm

del *.o
# SquareRacing-WIP-
This program is a simulator of racing squares written in C using SDL


__________________________
## SDL Linux installation

sudo apt-get install libsdl2-dev

sudo apt-get install libsdl2-image-dev


## Run

gcc -o game main.c player.c track.c graphics.c \`sdl2-config --cflags --libs\` -lSDL2_image

./game

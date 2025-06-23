make:
    gcc -o main main.c $(pkg-config --libs --cflags ncurses panel menu)

clean:
    rm main

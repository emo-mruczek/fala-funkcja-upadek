{pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
    name = "wave function collapse";

    packages = 
         with pkgs; [
            ncurses
            gdb
            libgcc
            just
            pkg-config
         ];
}

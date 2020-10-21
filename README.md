# Baremetal-Pac-Man
A project by four imperial students to develop and design pacman from the ground up for the raspberry pi. For this we heavily relied on http://www.gamasutra.com/view/feature/3938/the_pacman_dossier.php?print=1

A video demonstration: [video](https://www.youtube.com/watch?v=i0x3UVYu0dA)

# Changes
Made many changes remove cmake and switched to just make using my boiler plate make system.

The makefile system is added as a submodule now so remember `git submodule update --init` after clone.

Build on Linux using libsdl2 command
```
make CPU=host
```

Cross compile on Linux for raspberry pi
```
make CPU=rpi1
```

Also separated the system specific code into directories host for Linux specific and rpi1 for Raspberry Pi 1.

 
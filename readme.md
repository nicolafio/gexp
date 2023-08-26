## UG4 Honours Project RTS Game Prototype Experiment

This is a rudimentary prototype featuring few real-time strategy (RTS) aspects. The prototype is inteded to aid for the study on peer-to-peer massively-multiplayer-online real-time-strategy games.

## Setup

This project requires some external software to be installed in the system.

The following list summarizes what external software is needed and how to install it the MacOS or a Debian-based distribution like Ubuntu.

* [Homebrew (`brew`)](https://brew.sh): **(Only needed in MacOS)** Package manager needed for installing other necessary software.
    * **MacOS**: &emsp;`$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
* [Simple DirectMedia Layer (SDL)](https://www.libsdl.org/): Cross-platform library for input and graphics.
    * **MacOS**: &emsp;`$ brew install sdl2`
    * **Debian**: &emsp;`# apt install libsdl2`

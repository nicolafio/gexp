## UG4 Honours Project RTS Game Prototype Experiment

This is a rudimentary prototype featuring few real-time strategy (RTS) aspects. The prototype is inteded to aid for the study on peer-to-peer massively-multiplayer-online real-time-strategy games ([P2P](https://en.wikipedia.org/wiki/Peer-to-peer) [MMORTS](https://en.wikipedia.org/wiki/Massively_multiplayer_online_real-time_strategy_game)).

## Setup

This project requires some external software to be installed in the system.

The following list summarizes what external software is needed and how to install it in the MacOS or a Debian-based distribution like Ubuntu.

* [Homebrew (`brew`)](https://brew.sh): **(Only needed in MacOS)** Package manager needed for installing other necessary software.
    * **MacOS**: &emsp;`$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
* [Simple DirectMedia Layer (SDL)](https://www.libsdl.org/): Cross-platform library for input and graphics.
    * **MacOS**: &emsp;`$ brew install sdl2`
    * **Debian**: &emsp;`# apt install libsdl2`

## Code names for this project

This project has two code names.

The primary is `gexp`, self-descriptive and easy to remember.

The alternative is `joy2`, to mark it as a spritual successor of JOY, the 2D game engine experiment made back in high school ¹, to remisce the relative success of that project. That project's primary goal was to learn. The same will be for `joy2`.

---

¹ SMOC is a game made on top of JOY for showcase - https://nicolaf.io/smoc

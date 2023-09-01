<center>

# <small><small>Requirements Document for:</small></small><br> Honours Project Game Experiment

### A Multiplayer Real-Time Strategy Prototype

Nicola Fiori

</center>

## Game Overview

### Common questions

#### <i> What is this game? </i>

A slow-paced real-time strategy where you build and expand your colony.

#### <i> Why create this game? </i>

To aid a detailed study about building scalable multiplayer online games without the need of a server.

#### <i> Where does this game take place? </i>

A single world map that has no borders.

#### <i> How many characters to I control? </i>

Unbounded number of characters. However, increasing the number of controllable characters must get more difficult over time.

#### <i> What is the main focus? </i>

Expand your economy and your influence in the world map.

#### <i> What's different? </i>

Not much should be different from the mainstream real-time strategy games. In fact, this prototype's intent is to capture a part of functionalities that you would commonly find in a real-time strategy game.

## Feature set

#### General features

* Huge world.
* 2D graphics.

#### Multiplayer features

* 10 million players or more.
* Attacking each other's stuff.
* (Tentative) trading.
* (Tentative) communication.

#### Gameplay experience

* Player should feel a sense of progression.
* Game should enact the general compulsion loop (anticipation, challange, reward).

## The game world

### Rendering system

#### Overview

2D rendering based on Simple Directmedia Layer (SDL).

#### Camera

You can see your outpost on an isometric view, zoom out and see other points of interest.

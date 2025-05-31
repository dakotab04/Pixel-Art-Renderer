## PROJECT NAME: Pixel Art Renderer

## PROJECT DESCRIPTION:
Pixel Art Renderer is a simple C++ console application that allows users to create and modify pixel art on a 10x20 grid. 
The program supports loading a preset pattern (like a smiley face) and lets users toggle pixels on and off by entering 
their coordinates. The interface visually represents pixels as # for "on" and . for "off". It’s a fun and educational 
project to practice 2D arrays, user input handling, and console rendering in C++17.

## FEATURES:
- Renders a 10x20 pixel grid in the console
- Load preset patterns (currently includes a smiley face)
- Toggle pixels by entering their (x, y) coordinates
- Clear and refresh the console on each update for real-time interaction
- Exit the program by entering -1 for either coordinate
- Input validation for graceful program termination

## HOW TO USE:
- Run the program in a console supporting C++17.
- When prompted, choose whether to load a preset pattern (Y or N).
- View the grid with pixels displayed as # (on) or . (off).
- Enter the x and y coordinates of the pixel you want to toggle.
- Repeat toggling pixels as desired.
- To exit, enter -1 for either coordinate.

## TOOLS:
- C++17
- Microsoft Visual Studio
- C++ Standard Library

## POSSIBLE FUTURE IMPROVEMENTS:
- More preset patterns
- Dynamic grid size
- Easier way to "draw" to the grid other than entering coordinates
- Ability to save/load user generated patterns
- Ability to create animations using several patterns

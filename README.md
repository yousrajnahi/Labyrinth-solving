# Labyrinth-solving using Dijkstra algorithm 

Welcome to the  Labyrinth-solving using Dijkstra algorithm! This project is an implementation of Dijkstra's algorithm for solving labyrinths. 

Labyrinths are a type of puzzle in which the goal is to find a path from a starting point to an ending point, typically while navigating through a complex network of interconnected rooms or corridors. Solving labyrinths can be a challenging and enjoyable activity for both humans and machines.

Dijkstra's algorithm is a popular method for finding the shortest path between two nodes in a graph. It is a greedy algorithm that explores the graph by starting at the starting node and always choosing the next node that is closest to the starting node. By repeatedly updating the distances between nodes as it explores the graph, Dijkstra's algorithm is able to find the shortest path to the ending node.

<p align="center" width="100%">
    <img width="25%" src="https://user-images.githubusercontent.com/77071173/111710853-ca6c8880-884a-11eb-9c18-c55a317de824.gif"> 
    <img width="25%" src="https://user-images.githubusercontent.com/77071173/111711504-271c7300-884c-11eb-8da1-5dc57e636101.gif"> 
    <img width="25%" src="https://user-images.githubusercontent.com/77071173/111712132-541d5580-884d-11eb-9874-eb8a43a0bf38.gif"> 
</p>


## Dependencies

In order to use this program, you will need to have the following packages installed:

- SDL2
- SDL2_image
- SDL2_ttf

## Usage

To run the program, compile the source code with a C compiler and run the executable file. The program will generate a random labyrinth and allow the user to navigate through it using the arrow keys.

## File Structure

The project consists of the following files:

- `main.c`: This is the main file that contains the program's entry point and the main loop.
- `function.h`: This header file contains the declarations of the functions and variables used in the project. It is marked with `#pragma once` to prevent it from being included more than once in a single file. The file includes the following:
  - Definitions of various constants such as `L`, `pix`, and `N`.
  - A struct called `point` that stores information about a point in the labyrinth.
  - Declarations of various variables such as `M`, `stack`, `tab`, and `rect`.
  - Declarations of various functions such as `connect_cell`, `Initialisation_creation`, and `Labyrinthe`.
- `SDL.h`: This header file is part of the SDL library and is used for rendering the labyrinth and path on the screen.



## Features

This project includes the following features:

- Implementation of Dijkstra's algorithm for solving labyrinths.
- Ability to input labyrinths in the form of a matrix or a list of edges.
- Support for both static and dynamic labyrinths (i.e., labyrinths that can change over time).
- Ability to visualize the labyrinth and the path found by the algorithm.



## Contributions

Contributions to the Labyrinth-solving Algorithm: Dijkstra project are welcome! If you have an idea for a new feature or have found a bug, please open an issue on GitHub or submit a pull request.

                                                              

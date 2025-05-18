# MySokoban - Terminal-based Sokoban Game

A terminal-based implementation of the classic Sokoban puzzle game in C using the ncurses library. Push boxes to their designated locations while navigating through the warehouse.

## Project Overview

MySokoban is a faithful recreation of the classic warehouse puzzle game that features:
- Terminal-based graphics using ncurses
- Multiple levels support through map files
- Player movement and box pushing mechanics
- Win/lose condition detection
- Dynamic terminal resizing support
- Game state management

## Project Structure

```
MySokoban/
├── src/
│   ├── main.c              # Program entry point
│   ├── sokoban.c          # Core game logic
│   ├── map_gestion.c      # Map loading and handling
│   ├── char_gestion.c     # Character movement
│   ├── win_lose_checks.c  # Game state verification
│   ├── structs_setup.c    # Data structure initialization
│   ├── resize_gestion.c   # Terminal resize handling
│   └── handle_errors.c    # Error management
├── include/               # Header files
├── lib/                  # Library files
└── Makefile             # Build configuration
```

## Game Rules

1. The player (P) can move boxes (X) by pushing them
2. Boxes must be pushed onto storage locations (O)
3. A box cannot be pulled
4. A box cannot be pushed if another box or wall (#) is behind it
5. The game is won when all boxes are on storage locations
6. The game is lost if boxes are stuck in an impossible position

## Dependencies

- ncurses library
- C compiler (gcc recommended)
- Make build system

## Building the Project

To compile the game:

```bash
make
```

This will generate the `my_sokoban` executable.

## Playing the Game

### Starting the Game

```bash
./my_sokoban map.txt
```

The game requires a valid map file as argument.

### Map Format

Maps should follow this format:
```
############
#          #
#  P    X  #
#          #
#    O     #
#          #
############
```

Where:
- '#' represents walls
- 'P' represents the player
- 'X' represents boxes
- 'O' represents storage locations
- ' ' represents empty spaces

### Controls

- **Arrow Keys**: Move the player
- **Space**: Reset the current level
- **Escape**: Quit the game
- **Q**: Alternative quit

## Implementation Details

The game features:
- Dynamic map loading and validation
- Player movement with collision detection
- Box pushing mechanics
- Win/lose condition checking
- Terminal resize handling
- Game state management
- Memory management

## Error Handling

The program handles various error cases:
- Invalid map files
- Incorrect map format
- Missing player/boxes/storage locations
- Terminal size requirements
- Memory allocation failures

## Technical Features

- ncurses-based display
- Dynamic memory management
- Map validation system
- Game state tracking
- Terminal size adaptation

## Building and Cleaning

Available make targets:
- `make`: Build the game
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Rebuild the project

## Usage Examples

1. Play with provided map:
```bash
./my_sokoban maps/map1.txt
```

2. Display help:
```bash
./my_sokoban -h
```

## License

This project is licensed under the terms provided in the LICENSE file.

## Contributing

Contributions are welcome! Feel free to submit issues and pull requests.

## Credits

- Original Sokoban game concept by Hiroyuki Imabayashi
- ncurses library for terminal manipulation 
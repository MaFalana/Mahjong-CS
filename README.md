# CS Mahjong

C++ Based Mahjong Game

## Description
This was a side project I decided to do after taking CSCI 36300: Principles of Software Design. The goal was to "make things click" by furthering my understanding of the material I learned throughout the semester (Solid principles, exception handling, design patterns, etc.) by applying them to a real-world situation. Using C++, the general idea was to recreate a two player variation of Mahjong I saw on TikTok.

## How Everything Fits
The Stack and Queue classes represent data structures that can be used to store and manage tiles in the game. The Stack class implements the last-in, first-out (LIFO) principle, which means that the last element pushed onto the stack will be the first one to be popped off. The Queue class implements the first-in, first-out (FIFO) principle, which means that the first element added to the queue will be the first one to be removed.

The Command pattern is used to implement undo and redo functionality, allowing players to undo and redo their moves. The Command interface defines the execute and undo methods, which are implemented by concrete Command classes (such as CommandA and CommandB). The Invoker class is used to execute and undo Command objects, and the Facade class provides a simplified interface for interacting with the Invoker.

The Builder pattern is used to construct complex objects in a step-by-step manner. The Product class represents a complex object that is composed of several parts, and the Builder class has methods for building each part of the Product and a method for retrieving the finished Product.

The Singleton pattern is used to ensure that there is only one instance of a class, which can be useful in situations where you want to limit the number of objects that can be created. The Singleton class has methods for getting the instance of the class and for getting and setting the value of an attribute.

The Observer pattern is used to allow an object (the Subject) to notify other objects (the Observers) when its state changes. The Subject class has an array of Observer objects and methods for attaching and detaching Observers and for notifying Observers when its state changes. The Observer class has a method for updating its state in response to a notification from the Subject.

The BaseArray and Array classes represent arrays of elements. The BaseArray class defines basic array operations, such as getting and setting elements, and the Array class extends the BaseArray class to provide more advanced array functionality.

The MahjongTile class represents a single tile in a Mahjong game, with attributes for the suit and rank of the tile. The Suit class represents the suit of a Mahjong tile, and it has a method for getting the name of the suit.

The Mahjong class represents the overall game state and gameplay mechanics. It has attributes for storing the free tiles (in a stack), the user tiles (in a queue), and the computer and player players. The Mahjong class has methods for making moves, switching between players, and getting the current player. It also has methods for attaching and detaching Observers and for notifying Observers when the game state changes.

The Player class represents a player in the game, with attributes for storing the player's tiles and name. The Player class has methods for getting the player's tiles and name.

In this diagram, the Mahjong class is a subclass of the Game class and has attributes for storing Stack and Queue objects of Tile objects, as well as Player objects for the computer and player. The Player class has attributes for storing a Queue of Tile objects and information about the player's name and suit. The Tile class has attributes for storing information about the suit and rank of the tile.

The Mahjong class has methods for shuffling the tiles, making moves, setting the current player, and checking the suit of a tile. The Player class has methods for getting the player's suit, tiles, and name. The Tile class has methods for getting the suit and rank of the tile.

## Getting Started

### Installing

Just download the base folder and its [contents]() then simply open an IDE or your command line terminal then from the base folder type

  ```make run ```

to start the program

## Inspiration
```
<blockquote class="tiktok-embed" cite="https://www.tiktok.com/@game_factory01/video/7153266696000785669" data-video-id="7153266696000785669" style="max-width: 605px;min-width: 325px;" > <section> <a target="_blank" title="@game_factory01" href="https://www.tiktok.com/@game_factory01?refer=embed">@game_factory01</a> <a title="family" target="_blank" href="https://www.tiktok.com/tag/family?refer=embed">#family</a> games <a title="games" target="_blank" href="https://www.tiktok.com/tag/games?refer=embed">#games</a> <a title="fun" target="_blank" href="https://www.tiktok.com/tag/fun?refer=embed">#fun</a> <a title="recreation" target="_blank" href="https://www.tiktok.com/tag/recreation?refer=embed">#recreation</a> <a title="mahjong" target="_blank" href="https://www.tiktok.com/tag/mahjong?refer=embed">#mahjong</a> <a title="foryou" target="_blank" href="https://www.tiktok.com/tag/foryou?refer=embed">#foryou</a> <a target="_blank" title="♬ original sound - @game_factory01" href="https://www.tiktok.com/music/original-sound-7153266792344603398?refer=embed">♬ original sound - @game_factory01</a> </section> </blockquote> <script async src="https://www.tiktok.com/embed.js"></script>
```
## Acknowledgements
* [GUI Icon](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.istockphoto.com%2Fde%2Fvektor%2Fmahjong-symbol-gm666664922-121554807&psig=AOvVaw2YhRV0MItcR7EIF2x00ieQ&ust=1672296671903000&source=images&cd=vfe&ved=0CA8QjRxqFwoTCMigptvcm_wCFQAAAAAdAAAAABAQ)
* [Mahjong Tiles](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.istockphoto.com%2Fillustrations%2Fmahjong-tiles&psig=AOvVaw3CCNRNedGbDIllvQEB79bX&ust=1672297403870000&source=images&cd=vfe&ved=0CA8QjRxqGAoTCPiT9rffm_wCFQAAAAAdAAAAABDwAQ)
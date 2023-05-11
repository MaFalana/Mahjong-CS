// #include <iostream>
// #include <restbed>

// #include "MahjongService.h"

// using namespace std;
// using namespace restbed;

// //Mahjong game; // Global game object

// //This code creates a RESTful web service using RESTbed. The service has two resources:

// MahjongService::MahjongService()
// {

// }

// MahjongService::MahjongService()
// {
//     auto resource = make_shared< Resource >( ); // creates a new instance of the Resource class from the Restbed library
//     resource->set_path( "/mahjong-game" ); // sets the path of the resource to "/mahjong-game"
//     resource->set_method_handler( "GET", &MahjongService::get_player );
//     resource->set_method_handler( "PUT", &MahjongService::make_move );

//     auto settings = make_shared< Settings >( );
//     settings->set_port( 8080 );
//     settings->set_default_header( "Connection", "close" );

//     Service service;
//     service.publish( resource );
//     service.start( settings );
// }

// MahjongService::~MahjongService()
// {

// }

// void MahjongService::get_player(const shared_ptr<Session> session)
// {   
//     Player currentPlayer = game.getPlayer(); // method call

//     json jsonResponse = { {"name", currentPlayer.getName()}, {"suit", currentPlayer.getSuit().getName()} }; // create a json response of current player data members

//     session->close( OK, jsonResponse.dump(), { { "Content-Length", ::to_string( jsonResponse.dump().size( ) ) } } ); // convert response to string
// }

// void MahjongService::make_move(const shared_ptr<Session> session)
// {
//     game.makeMove();
//     session->close(OK, "", { { "Content-Length", "0" } });
// }

// void MahjongService::getPlayer1(const shared_ptr<Session> session)
// {
//     Player p1 = game.player;

//     json jsonResponse = { {"name", p1.getName()}, {"suit", p1.getSuit().getName()}, {"tiles", p1.tiles_} };

//     session->close( OK, jsonResponse.dump(), { { "Content-Length", ::to_string( jsonResponse.dump().size( ) ) } } );
// }

// void MahjongService::getPlayer2(const shared_ptr<Session> session)
// {
//     Player p2 = game.computer;

//     json jsonResponse = { {"name", p2.getName()}, {"suit", p2.getSuit().getName()}, {"tiles", p2.tiles_} };

//     session->close( OK, jsonResponse.dump(), { { "Content-Length", ::to_string( jsonResponse.dump().size( ) ) } } );
// }



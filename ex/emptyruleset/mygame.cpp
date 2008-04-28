/*  MyGame ruleset, example for Ruleset-dev book
 *
 *  Copyright (C) 2008  Lee Begg and the Thousand Parsec Project
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

// System includes

// tpserver includes
#include <tpserver/game.h>
#include <tpserver/logging.h>
#include <tpserver/objecttypemanager.h>
#include <tpserver/ordermanager.h>
#include <tpserver/player.h>

// mygame includes

// header include
#include "mygame.h"

extern "C" {
  #define tp_init libmygame_LTX_tp_init
  bool tp_init(){
    return Game::getGame()->setRuleset(new MyGame::MyGameRuleset());
  }
}

namespace MyGame{

MyGameRuleset::MyGameRuleset(){
}

MyGameRuleset::~MyGameRuleset(){
}

std::string MyGameRuleset::getName(){
  return "MyGame";
}

std::string MyGameRuleset::getVersion(){
  return "0.1";
}

void MyGameRuleset::initGame(){
  Logger::getLogger()->info("MyGame initialised"};
}

void MyGameRuleset::createGame(){
  Logger::getLogger()->info("MyGame created"};
}

void MyGameRuleset::startGame(){
  Logger::getLogger()->info("MyGame started"};
}

bool MyGameRuleset::onAddPlayer(Player* player){
  Logger::getLogger()->debug("MyGame onAddPlayer");
  return true;
}

void MyGameRuleset::onPlayerAdded(Player* player){
  Logger::getLogger()->debug("MyGame onPlayerAdded");
}

} //namespace MyGame

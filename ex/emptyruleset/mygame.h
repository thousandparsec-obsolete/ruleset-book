#ifndef MYGAME_MYGAMERULESET_H
#define MYGAME_MYGAMERULESET_H
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

#include <tpserver/ruleset.h>

namespace MyGame{

class MyGameRuleset : public Ruleset{
 public:
  MyGameRuleset();
  virtual ~MyGameRuleset();

  std::string getName();
  std::string getVersion();
  void initGame();
  void createGame();
  void startGame();
  bool onAddPlayer(Player* player);
  void onPlayerAdded(Player* player);

};

} \\namespace MyGame

#endif
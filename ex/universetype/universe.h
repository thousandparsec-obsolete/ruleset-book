#ifndef MYGAME_UNIVERSE_H
#define MYGAME_UNIVERSE_H
/*  Universe object classes, example for Ruleset-dev book
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

#include <tpserver/objecttype.h>

namespace MyGame{

class UniverseType : public ObjectType{
  public:
    UniverseType();
    virtual ~UniverseType();
  
  protected:
    ObjectBehaviour* createObjectBehaviour() const;
};

class Universe : public ObjectBehaviour{
      public:
	Universe();
        virtual ~Universe();
        

	void packExtraData(Frame * frame);

	void doOnceATurn();

	int getContainerType();

	Vector3d getPosition() const;
        Vector3d getVelocity() const;
        uint64_t getSize() const;
        void setPosition(const Vector3d & np);
        void setVelocity(const Vector3d & nv);
        void setSize(uint64_t ns);
	void setYear(int year);
	int getYear();


};

} //namespace MyGame

#endif

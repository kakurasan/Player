/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _WINDOW_EQUIPITEM_H_
#define _WINDOW_EQUIPITEM_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "window_item.h"

////////////////////////////////////////////////////////////
/// Window_EquipItem class.
/// Displays the available equipment of a specific type.
////////////////////////////////////////////////////////////
class Window_EquipItem : public Window_Item {

public:
	/// Enum containing the different equipment types
	enum EquipType {
		weapon = 0,
		shield,
		armor,
		helmet,
		other
	};

	////////////////////////////////////////////////////////
	/// Constructor.
	/// @param actor_id : Actor whos equipment is displayed
	/// @param equip_type : Type of equipment to show
	////////////////////////////////////////////////////////
	Window_EquipItem(int actor_id, int equip_type);

	////////////////////////////////////////////////////////
	/// Destructor.
	////////////////////////////////////////////////////////
	~Window_EquipItem();

	////////////////////////////////////////////////////////
	/// Checks if the item should be in the list
	/// @todo Always returns true
	/// @param item_id Item to check
	////////////////////////////////////////////////////////
	bool CheckInclude(int item_id);

	////////////////////////////////////////////////////////
	/// Chechs if item should be enabled. Always true.
	/// @param item_id : Item to check
	////////////////////////////////////////////////////////
	bool CheckEnable(int item_id);

private:
	int actor_id;
	EquipType equip_type;
};

#endif
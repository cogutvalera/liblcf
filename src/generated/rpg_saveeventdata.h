/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEEVENTDATA_H
#define LCF_RPG_SAVEEVENTDATA_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEventData class.
 */
namespace RPG {
	class SaveEventData {
	public:
		std::vector<SaveEventCommands> commands;
		bool show_message = false;
		bool abort_on_escape = false;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		bool keyinput_decision = false;
		bool keyinput_cancel = false;
		bool keyinput_numbers = false;
		bool keyinput_operators = false;
		bool keyinput_shift = false;
		bool keyinput_value_right = false;
		bool keyinput_value_up = false;
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = -1;
		bool keyinput_down = false;
		bool keyinput_left = false;
		bool keyinput_right = false;
		bool keyinput_up = false;
		bool keyinput_timed = false;
		bool unused_wait_for_key_or_enter = false;
	};

	inline bool operator==(const SaveEventData& l, const SaveEventData& r) {
		return l.commands == r.commands
		&& l.show_message == r.show_message
		&& l.abort_on_escape == r.abort_on_escape
		&& l.wait_movement == r.wait_movement
		&& l.keyinput_wait == r.keyinput_wait
		&& l.keyinput_variable == r.keyinput_variable
		&& l.keyinput_all_directions == r.keyinput_all_directions
		&& l.keyinput_decision == r.keyinput_decision
		&& l.keyinput_cancel == r.keyinput_cancel
		&& l.keyinput_numbers == r.keyinput_numbers
		&& l.keyinput_operators == r.keyinput_operators
		&& l.keyinput_shift == r.keyinput_shift
		&& l.keyinput_value_right == r.keyinput_value_right
		&& l.keyinput_value_up == r.keyinput_value_up
		&& l.wait_time == r.wait_time
		&& l.keyinput_time_variable == r.keyinput_time_variable
		&& l.keyinput_down == r.keyinput_down
		&& l.keyinput_left == r.keyinput_left
		&& l.keyinput_right == r.keyinput_right
		&& l.keyinput_up == r.keyinput_up
		&& l.keyinput_timed == r.keyinput_timed
		&& l.unused_wait_for_key_or_enter == r.unused_wait_for_key_or_enter;
	}

	inline bool operator!=(const SaveEventData& l, const SaveEventData& r) {
		return !(l == r);
	}
}

#endif

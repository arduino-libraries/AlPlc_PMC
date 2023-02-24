/*
  This file is part of the Arduino AlPlc_PMC library.
  Copyright (C) 2021 Arduino AG (http://www.arduino.cc/)
  SPDX-License-Identifier: MPL-2.0
  
  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef ALPLC_H
#define ALPLC_H

#include <Arduino_MachineControl.h>
#include <EthernetInterface.h>	//Ethernet, sockets, etc

extern uint8_t m_PLCSharedVarsOutputBuf[];
extern uint8_t m_PLCSharedVarsInputBuf[];

extern EthernetInterface m_netInterface;

class AlPlc
{
public:
	AlPlc(int32_t sketchCrc);
	void Run();
	void ListFiles(bool resetPlc);
	void InitFileSystem();
};

#endif

// Sample sdk.h

#pragma once

#ifndef CLIENT_DLL
#define CLIENT_DLL
#endif

#include <stdio.h>
#include <vector>
#include <string>
#include <time.h>
#include <iostream>
#include <sstream>

#include "offsets.h"
#include "logger.h"

// Make sure to add the SDK folder to the additional dependancies

// Public
#include "public\\tier0\\wchartypes.h"
#include "public\\cdll_int.h"
#include "public\\iprediction.h"
#include "public\\bone_setup.h"
#include "public\\icliententitylist.h"
#include "public\\ienginevgui.h"
#include "public\\IGameUIFuncs.h"
#include "public\\igameevents.h"
#include "public\\view_shared.h"
#include "public\\inetchannelinfo.h"
#include "public\\iachievementmgr.h"
#include "public\\steam\\steam_api.h"
#include "public\\steam\\isteamuserstats.h"
#include "public\\model_types.h"
#include "public\\inputsystem\\iinputstacksystem.h"
// Client
#include "game\\client\\cbase.h"
#include "game\\client\\imessagechars.h"
#include "game\\client\\iclientmode.h"
#include "game\\client\\cliententitylist.h"
#include "game\\client\\cdll_client_int.h"
#include "game\\client\\c_baseanimating.h"
#include "game\\client\\c_basecombatweapon.h"
#include "game\\client\\c_baseplayer.h"
#include "game\\client\\enginesprite.h"
#include "game\\client\\input.h"
#include "game\\client\\c_playerresource.h"
#include "game\\client\\iviewrender.h"
#include "game\\client\\viewrender.h"
#include "game\\client\\game_controls\\commandmenu.h"
#include "game\\client\\hudelement.h"
#include "game\\shared\\gamemovement.h"
#include "game\\client\\clientmode_shared.h"
#include "game\\client\\glow_outline_effect.h"

// Engine
#include "public\\engine\\ivmodelrender.h"
#include "public\\engine\\ivdebugoverlay.h"
#include "public\\engine\\ivmodelinfo.h"
#include "public\\engine\\IEngineTrace.h"
#include "public\\engine\\IEngineSound.h"

// Material System
#include "public\\materialsystem\\imaterialsystemstub.h"
#include "public\\materialsystem\\itexture.h"
#include "public\\materialsystem\\imaterialvar.h"
#include "public\\tier1\\checksum_md5.h"

// VGUI
#include "public\\matsys_controls\\matsyscontrols.h"
#include "public\\vgui\\IClientPanel.h"
#include "public\\vgui\\IPanel.h"
#include "public\\vgui\\ISurface.h"
#include "public\\vgui\\ILocalize.h"
#include "public\\collisionutils.h"
#include "public\\vstdlib\\random.h"

// Server
#include "game\\server\\playerinfomanager.h"

// VGUI Controls
#include "public\\vgui_controls\\Panel.h"

// VGUI Material Surface
#include "public\\VGuiMatSurface\\IMatSystemSurface.h"
#include "public\\mathlib\\vector.h"

// Shared
#include "game\\shared\\usermessages.h"
#include "game\\shared\\basecombatweapon_shared.h"
#include "game\\shared\\takedamageinfo.h"
#include "game\\shared\\igamemovement.h"
#include "game\\shared\\in_buttons.h"

// Utils
#include "public\\tier1\\utlvector.h"

// Make sure to add the SDK folder to the library directories
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\tier0.lib")
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\tier1.lib")
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\tier2.lib")
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\tier3.lib")
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\mathlib.lib")
#pragma comment(lib, "hl2sdk-csgo\\lib\\public\\vstdlib.lib")

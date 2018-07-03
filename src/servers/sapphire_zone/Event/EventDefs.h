#ifndef SAPPHIRE_EVENTDEFS_H
#define SAPPHIRE_EVENTDEFS_H

namespace Core
{
   enum EventFlags
   {
      NONE = 0,
      NO_DEFAULT_CAMERA = 0x00000001,
      FADE_OUT = 0x00000002,
      INVIS_ENPC = 0x00000004,
      INVIS_EOBJ = 0x00000008,
      INVIS_BNPC = 0x00000010,
      INVIS_OTHER_PC = 0x00000020,
      INVIS_PARTY_PC = 0x00000040,
      INVIS_PARTY_BUDDY = 0x10000000,
      INVIS_GATHERING_POINT = 0x00000080,
      INVIS_AETHERYTE = 0x00000100,
      INVIS_TREASURE = 0x00000200,
      CONDITION_CUTSCENE = 0x00000400,
      HIDE_UI = 0x00000800,
      INVIS_ALL = 0xF80003FC,
      AUTO_LOC_CAMERA = 0x00001000,
      HIDE_HOTBAR = 0x00002000,
      INVINCIBLE = 0x00004000,
      SILENT_ENTER_TERRI_ENV = 0x00008000,
      SILENT_ENTER_TERRI_BGM = 0x00010000,
      SILENT_ENTER_TERRI_SE = 0x00020000,
      SILENT_ENTER_TERRI_ALL = 0x00038000,
      DISABLE_SKIP = 0x00080000,
      HIDE_FESTIVAL = 0x00200000,
      DISABLE_STEALTH = 0x00400000,
      ROLLBACK_HIDE_UI = 0x00800000,
      LOCK_HUD = 0x01000000,
      LOCK_HOTBAR = 0x02000000,
      DISABLE_CANCEL_EMOTE = 0x04000000,
      INVIS_AOE = 0x08000000,
      INVIS_ALLIANCE_PC = 0x20000000,
      INVIS_ALLIANCE_BUDDY = 0x40000000,
      INVIS_COMPANION = 0x80000000,
      SET_BASE = 0xF8400EFB,
      SET_INVIS_BASE = 0xF8400FFF,
      SET_EOBJ_BASE = 0xF8400EF3
   };

   enum EventTypes
   {
      EVENT_TALK = 1,
      EVENT_EMOTE = 2,
      EVENT_DISTANCE_BELOW = 3,
      EVENT_DISTANCE_OVER = 4,
      EVENT_BATTLE_REWARD = 5,
      EVENT_CRAFT = 6,
      EVENT_NEST = 7,
      EVENT_EVENT_ITEM = 8,
      EVENT_DROP = 9,
      EVENT_WITHIN_RANGE = 10,
      EVENT_OUTSIDE_RANGE = 11,
      EVENT_GAME_START = 12,
      EVENT_GAME_PROGRESS = 13,
      EVENT_ENTER_TERRITORY = 15,
      EVENT_GAME_COME_BACK = 17,
      EVENT_ACTION_RESULT = 18,
      EVENT_MATERIA_CRAFT = 19,
      EVENT_FISHING = 20,
      EVENT_UI = 21,
      EVENT_HOUSING = 22,
      EVENT_SAY = 23,
      EVENT_TABLE_GAME = 24
   };

   enum DamageType
   {
      STD_DAMAGE = 0X03,
      STD_HEAL = 0X04,
      STD_MP_LOSS = 0X0A,
      STD_MP_GAIN = 0X0B,
      STD_TP_LOSS = 0X0C,
      STD_TP_GAIN = 0X0D
   };

}


#endif //SAPPHIRE_EVENTDEFS_H
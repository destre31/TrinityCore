/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "SharedDefines.h"
#include "Define.h"
#include "SmartEnum.h"
#include <stdexcept>

namespace Trinity
{
namespace Impl
{

/**************************************************************\
|* data for enum 'Powers' in 'SharedDefines.h' auto-generated *|
\**************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<Powers>::ToString(Powers value)
{
    switch (value)
    {
        case POWER_HEALTH: return { "POWER_HEALTH", "Health", "" };
        case POWER_MANA: return { "POWER_MANA", "Mana", "" };
        case POWER_RAGE: return { "POWER_RAGE", "Rage", "" };
        case POWER_FOCUS: return { "POWER_FOCUS", "Focus", "" };
        case POWER_ENERGY: return { "POWER_ENERGY", "Energy", "" };
        case POWER_COMBO_POINTS: return { "POWER_COMBO_POINTS", "Combo Points", "" };
        case POWER_RUNES: return { "POWER_RUNES", "Runes", "" };
        case POWER_RUNIC_POWER: return { "POWER_RUNIC_POWER", "Runic Power", "" };
        case POWER_SOUL_SHARDS: return { "POWER_SOUL_SHARDS", "Soul Shards", "" };
        case POWER_LUNAR_POWER: return { "POWER_LUNAR_POWER", "Lunar Power", "" };
        case POWER_HOLY_POWER: return { "POWER_HOLY_POWER", "Holy Power", "" };
        case POWER_ALTERNATE_POWER: return { "POWER_ALTERNATE_POWER", "Alternate", "" };
        case POWER_MAELSTROM: return { "POWER_MAELSTROM", "Maelstrom", "" };
        case POWER_CHI: return { "POWER_CHI", "Chi", "" };
        case POWER_INSANITY: return { "POWER_INSANITY", "Insanity", "" };
        case POWER_BURNING_EMBERS: return { "POWER_BURNING_EMBERS", "Burning Embers (Obsolete)", "" };
        case POWER_DEMONIC_FURY: return { "POWER_DEMONIC_FURY", "Demonic Fury (Obsolete)", "" };
        case POWER_ARCANE_CHARGES: return { "POWER_ARCANE_CHARGES", "Arcane Charges", "" };
        case POWER_FURY: return { "POWER_FURY", "Fury", "" };
        case POWER_PAIN: return { "POWER_PAIN", "Pain", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<Powers>::Count() { return 20; }

template <>
TC_API_EXPORT Powers EnumUtils<Powers>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return POWER_HEALTH;
        case 1: return POWER_MANA;
        case 2: return POWER_RAGE;
        case 3: return POWER_FOCUS;
        case 4: return POWER_ENERGY;
        case 5: return POWER_COMBO_POINTS;
        case 6: return POWER_RUNES;
        case 7: return POWER_RUNIC_POWER;
        case 8: return POWER_SOUL_SHARDS;
        case 9: return POWER_LUNAR_POWER;
        case 10: return POWER_HOLY_POWER;
        case 11: return POWER_ALTERNATE_POWER;
        case 12: return POWER_MAELSTROM;
        case 13: return POWER_CHI;
        case 14: return POWER_INSANITY;
        case 15: return POWER_BURNING_EMBERS;
        case 16: return POWER_DEMONIC_FURY;
        case 17: return POWER_ARCANE_CHARGES;
        case 18: return POWER_FURY;
        case 19: return POWER_PAIN;
        default: throw std::out_of_range("index");
    }
}

/********************************************************************\
|* data for enum 'SpellSchools' in 'SharedDefines.h' auto-generated *|
\********************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellSchools>::ToString(SpellSchools value)
{
    switch (value)
    {
        case SPELL_SCHOOL_NORMAL: return { "SPELL_SCHOOL_NORMAL", "Physical", "" };
        case SPELL_SCHOOL_HOLY: return { "SPELL_SCHOOL_HOLY", "Holy", "" };
        case SPELL_SCHOOL_FIRE: return { "SPELL_SCHOOL_FIRE", "Fire", "" };
        case SPELL_SCHOOL_NATURE: return { "SPELL_SCHOOL_NATURE", "Nature", "" };
        case SPELL_SCHOOL_FROST: return { "SPELL_SCHOOL_FROST", "Frost", "" };
        case SPELL_SCHOOL_SHADOW: return { "SPELL_SCHOOL_SHADOW", "Shadow", "" };
        case SPELL_SCHOOL_ARCANE: return { "SPELL_SCHOOL_ARCANE", "Arcane", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellSchools>::Count() { return 7; }

template <>
TC_API_EXPORT SpellSchools EnumUtils<SpellSchools>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_SCHOOL_NORMAL;
        case 1: return SPELL_SCHOOL_HOLY;
        case 2: return SPELL_SCHOOL_FIRE;
        case 3: return SPELL_SCHOOL_NATURE;
        case 4: return SPELL_SCHOOL_FROST;
        case 5: return SPELL_SCHOOL_SHADOW;
        case 6: return SPELL_SCHOOL_ARCANE;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr0' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr0>::ToString(SpellAttr0 value)
{
    switch (value)
    {
        case SPELL_ATTR0_UNK0: return { "SPELL_ATTR0_UNK0", "SPELL_ATTR0_UNK0", "" };
        case SPELL_ATTR0_REQ_AMMO: return { "SPELL_ATTR0_REQ_AMMO", "Treat as ranged attack", "Use ammo, ranged attack range modifiers, ranged haste, etc." };
        case SPELL_ATTR0_ON_NEXT_SWING: return { "SPELL_ATTR0_ON_NEXT_SWING", "On next melee (type 1)", "Both \042on next swing\042 attributes have identical handling in server & client" };
        case SPELL_ATTR0_IS_REPLENISHMENT: return { "SPELL_ATTR0_IS_REPLENISHMENT", "Replenishment (client only)", "" };
        case SPELL_ATTR0_ABILITY: return { "SPELL_ATTR0_ABILITY", "Treat as ability", "Cannot be reflected, not affected by cast speed modifiers, etc." };
        case SPELL_ATTR0_TRADESPELL: return { "SPELL_ATTR0_TRADESPELL", "Trade skill recipe", "Displayed in recipe list, not affected by cast speed modifiers" };
        case SPELL_ATTR0_PASSIVE: return { "SPELL_ATTR0_PASSIVE", "Passive spell", "Spell is automatically cast on self by core" };
        case SPELL_ATTR0_HIDDEN_CLIENTSIDE: return { "SPELL_ATTR0_HIDDEN_CLIENTSIDE", "Hidden in UI (client only)", "Not visible in spellbook or aura bar" };
        case SPELL_ATTR0_HIDE_IN_COMBAT_LOG: return { "SPELL_ATTR0_HIDE_IN_COMBAT_LOG", "Hidden in combat log (client only)", "Spell will not appear in combat logs" };
        case SPELL_ATTR0_TARGET_MAINHAND_ITEM: return { "SPELL_ATTR0_TARGET_MAINHAND_ITEM", "Auto-target mainhand item (client only)", "Client will automatically select main-hand item as cast target" };
        case SPELL_ATTR0_ON_NEXT_SWING_2: return { "SPELL_ATTR0_ON_NEXT_SWING_2", "On next melee (type 2)", "Both \042on next swing\042 attributes have identical handling in server & client" };
        case SPELL_ATTR0_UNK11: return { "SPELL_ATTR0_UNK11", "SPELL_ATTR0_UNK11", "" };
        case SPELL_ATTR0_DAYTIME_ONLY: return { "SPELL_ATTR0_DAYTIME_ONLY", "Only usable during daytime (unused)", "" };
        case SPELL_ATTR0_NIGHT_ONLY: return { "SPELL_ATTR0_NIGHT_ONLY", "Only usable during nighttime (unused)", "" };
        case SPELL_ATTR0_INDOORS_ONLY: return { "SPELL_ATTR0_INDOORS_ONLY", "Only usable indoors", "" };
        case SPELL_ATTR0_OUTDOORS_ONLY: return { "SPELL_ATTR0_OUTDOORS_ONLY", "Only usable outdoors", "" };
        case SPELL_ATTR0_NOT_SHAPESHIFT: return { "SPELL_ATTR0_NOT_SHAPESHIFT", "Not usable while shapeshifted", "" };
        case SPELL_ATTR0_ONLY_STEALTHED: return { "SPELL_ATTR0_ONLY_STEALTHED", "Only usable in stealth", "" };
        case SPELL_ATTR0_DONT_AFFECT_SHEATH_STATE: return { "SPELL_ATTR0_DONT_AFFECT_SHEATH_STATE", "Don't shealthe weapons (client only)", "" };
        case SPELL_ATTR0_LEVEL_DAMAGE_CALCULATION: return { "SPELL_ATTR0_LEVEL_DAMAGE_CALCULATION", "Scale with caster level", "For non-player casts, scale impact and power cost with caster's level" };
        case SPELL_ATTR0_STOP_ATTACK_TARGET: return { "SPELL_ATTR0_STOP_ATTACK_TARGET", "Stop attacking after cast", "After casting this, the current auto-attack will be interrupted" };
        case SPELL_ATTR0_IMPOSSIBLE_DODGE_PARRY_BLOCK: return { "SPELL_ATTR0_IMPOSSIBLE_DODGE_PARRY_BLOCK", "Prevent physical avoidance", "Spell cannot be dodged, parried or blocked" };
        case SPELL_ATTR0_CAST_TRACK_TARGET: return { "SPELL_ATTR0_CAST_TRACK_TARGET", "Automatically face target during cast (client only)", "" };
        case SPELL_ATTR0_CASTABLE_WHILE_DEAD: return { "SPELL_ATTR0_CASTABLE_WHILE_DEAD", "Can be cast while dead", "Spells without this flag cannot be cast by dead units in non-triggered contexts" };
        case SPELL_ATTR0_CASTABLE_WHILE_MOUNTED: return { "SPELL_ATTR0_CASTABLE_WHILE_MOUNTED", "Can be cast while mounted", "" };
        case SPELL_ATTR0_DISABLED_WHILE_ACTIVE: return { "SPELL_ATTR0_DISABLED_WHILE_ACTIVE", "Cooldown starts on expiry", "Spell is unusable while already active, and cooldown does not begin until the effects have worn off" };
        case SPELL_ATTR0_NEGATIVE_1: return { "SPELL_ATTR0_NEGATIVE_1", "Is negative spell", "Forces the spell to be treated as a negative spell" };
        case SPELL_ATTR0_CASTABLE_WHILE_SITTING: return { "SPELL_ATTR0_CASTABLE_WHILE_SITTING", "Can be cast while sitting", "" };
        case SPELL_ATTR0_CANT_USED_IN_COMBAT: return { "SPELL_ATTR0_CANT_USED_IN_COMBAT", "Cannot be used in combat", "" };
        case SPELL_ATTR0_UNAFFECTED_BY_INVULNERABILITY: return { "SPELL_ATTR0_UNAFFECTED_BY_INVULNERABILITY", "Pierce invulnerability", "Allows spell to pierce invulnerability, unless the invulnerability spell also has this attribute" };
        case SPELL_ATTR0_HEARTBEAT_RESIST_CHECK: return { "SPELL_ATTR0_HEARTBEAT_RESIST_CHECK", "Periodic resistance checks", "Periodically re-rolls against resistance to potentially expire aura early" };
        case SPELL_ATTR0_CANT_CANCEL: return { "SPELL_ATTR0_CANT_CANCEL", "Aura cannot be cancelled", "Prevents the player from voluntarily canceling a positive aura" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr0>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr0 EnumUtils<SpellAttr0>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR0_UNK0;
        case 1: return SPELL_ATTR0_REQ_AMMO;
        case 2: return SPELL_ATTR0_ON_NEXT_SWING;
        case 3: return SPELL_ATTR0_IS_REPLENISHMENT;
        case 4: return SPELL_ATTR0_ABILITY;
        case 5: return SPELL_ATTR0_TRADESPELL;
        case 6: return SPELL_ATTR0_PASSIVE;
        case 7: return SPELL_ATTR0_HIDDEN_CLIENTSIDE;
        case 8: return SPELL_ATTR0_HIDE_IN_COMBAT_LOG;
        case 9: return SPELL_ATTR0_TARGET_MAINHAND_ITEM;
        case 10: return SPELL_ATTR0_ON_NEXT_SWING_2;
        case 11: return SPELL_ATTR0_UNK11;
        case 12: return SPELL_ATTR0_DAYTIME_ONLY;
        case 13: return SPELL_ATTR0_NIGHT_ONLY;
        case 14: return SPELL_ATTR0_INDOORS_ONLY;
        case 15: return SPELL_ATTR0_OUTDOORS_ONLY;
        case 16: return SPELL_ATTR0_NOT_SHAPESHIFT;
        case 17: return SPELL_ATTR0_ONLY_STEALTHED;
        case 18: return SPELL_ATTR0_DONT_AFFECT_SHEATH_STATE;
        case 19: return SPELL_ATTR0_LEVEL_DAMAGE_CALCULATION;
        case 20: return SPELL_ATTR0_STOP_ATTACK_TARGET;
        case 21: return SPELL_ATTR0_IMPOSSIBLE_DODGE_PARRY_BLOCK;
        case 22: return SPELL_ATTR0_CAST_TRACK_TARGET;
        case 23: return SPELL_ATTR0_CASTABLE_WHILE_DEAD;
        case 24: return SPELL_ATTR0_CASTABLE_WHILE_MOUNTED;
        case 25: return SPELL_ATTR0_DISABLED_WHILE_ACTIVE;
        case 26: return SPELL_ATTR0_NEGATIVE_1;
        case 27: return SPELL_ATTR0_CASTABLE_WHILE_SITTING;
        case 28: return SPELL_ATTR0_CANT_USED_IN_COMBAT;
        case 29: return SPELL_ATTR0_UNAFFECTED_BY_INVULNERABILITY;
        case 30: return SPELL_ATTR0_HEARTBEAT_RESIST_CHECK;
        case 31: return SPELL_ATTR0_CANT_CANCEL;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr1' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr1>::ToString(SpellAttr1 value)
{
    switch (value)
    {
        case SPELL_ATTR1_DISMISS_PET: return { "SPELL_ATTR1_DISMISS_PET", "Dismiss Pet on cast", "Without this attribute, summoning spells will fail if caster already has a pet" };
        case SPELL_ATTR1_DRAIN_ALL_POWER: return { "SPELL_ATTR1_DRAIN_ALL_POWER", "Drain all power", "Ignores listed power cost and drains entire pool instead" };
        case SPELL_ATTR1_CHANNELED_1: return { "SPELL_ATTR1_CHANNELED_1", "Channeled (type 1)", "Both \042channeled\042 attributes have identical handling in server & client" };
        case SPELL_ATTR1_CANT_BE_REDIRECTED: return { "SPELL_ATTR1_CANT_BE_REDIRECTED", "Ignore redirection effects", "Spell will not be attracted by SPELL_MAGNET auras (Grounding Totem)" };
        case SPELL_ATTR1_UNK4: return { "SPELL_ATTR1_UNK4", "SPELL_ATTR1_UNK4", "" };
        case SPELL_ATTR1_NOT_BREAK_STEALTH: return { "SPELL_ATTR1_NOT_BREAK_STEALTH", "Does not break stealth", "" };
        case SPELL_ATTR1_CHANNELED_2: return { "SPELL_ATTR1_CHANNELED_2", "Channeled (type 2)", "Both \042channeled\042 attributes have identical handling in server & client" };
        case SPELL_ATTR1_CANT_BE_REFLECTED: return { "SPELL_ATTR1_CANT_BE_REFLECTED", "Ignore reflection effects", "Spell will pierce through Spell Reflection and similar" };
        case SPELL_ATTR1_CANT_TARGET_IN_COMBAT: return { "SPELL_ATTR1_CANT_TARGET_IN_COMBAT", "Target cannot be in combat", "" };
        case SPELL_ATTR1_MELEE_COMBAT_START: return { "SPELL_ATTR1_MELEE_COMBAT_START", "Starts auto-attack (client only)", "Caster will begin auto-attacking the target on cast" };
        case SPELL_ATTR1_NO_THREAT: return { "SPELL_ATTR1_NO_THREAT", "Does not generate threat", "Also does not cause target to engage" };
        case SPELL_ATTR1_DONT_REFRESH_DURATION_ON_RECAST: return { "SPELL_ATTR1_DONT_REFRESH_DURATION_ON_RECAST", "Aura will not refresh its duration when recast", "" };
        case SPELL_ATTR1_IS_PICKPOCKET: return { "SPELL_ATTR1_IS_PICKPOCKET", "Pickpocket (client only)", "" };
        case SPELL_ATTR1_FARSIGHT: return { "SPELL_ATTR1_FARSIGHT", "Farsight aura (client only)", "" };
        case SPELL_ATTR1_CHANNEL_TRACK_TARGET: return { "SPELL_ATTR1_CHANNEL_TRACK_TARGET", "Track target while channeling", "While channeling, adjust facing to face target" };
        case SPELL_ATTR1_DISPEL_AURAS_ON_IMMUNITY: return { "SPELL_ATTR1_DISPEL_AURAS_ON_IMMUNITY", "Immunity cancels preapplied auras", "For immunity spells, cancel all auras that this spell would make you immune to when the spell is applied" };
        case SPELL_ATTR1_UNAFFECTED_BY_SCHOOL_IMMUNE: return { "SPELL_ATTR1_UNAFFECTED_BY_SCHOOL_IMMUNE", "Unaffected by school immunities", "Will not pierce Divine Shield, Ice Block and other full invulnerabilities" };
        case SPELL_ATTR1_UNAUTOCASTABLE_BY_PET: return { "SPELL_ATTR1_UNAUTOCASTABLE_BY_PET", "Cannot be autocast by pet", "" };
        case SPELL_ATTR1_UNK18: return { "SPELL_ATTR1_UNK18", "SPELL_ATTR1_UNK18", "" };
        case SPELL_ATTR1_CANT_TARGET_SELF: return { "SPELL_ATTR1_CANT_TARGET_SELF", "Cannot be self-cast", "" };
        case SPELL_ATTR1_REQ_COMBO_POINTS1: return { "SPELL_ATTR1_REQ_COMBO_POINTS1", "Requires combo points (type 1)", "" };
        case SPELL_ATTR1_UNK21: return { "SPELL_ATTR1_UNK21", "SPELL_ATTR1_UNK21", "" };
        case SPELL_ATTR1_REQ_COMBO_POINTS2: return { "SPELL_ATTR1_REQ_COMBO_POINTS2", "Requires combo points (type 2)", "" };
        case SPELL_ATTR1_UNK23: return { "SPELL_ATTR1_UNK23", "SPELL_ATTR1_UNK23", "" };
        case SPELL_ATTR1_IS_FISHING: return { "SPELL_ATTR1_IS_FISHING", "Fishing (client only)", "" };
        case SPELL_ATTR1_UNK25: return { "SPELL_ATTR1_UNK25", "SPELL_ATTR1_UNK25", "" };
        case SPELL_ATTR1_UNK26: return { "SPELL_ATTR1_UNK26", "SPELL_ATTR1_UNK26", "" };
        case SPELL_ATTR1_UNK27: return { "SPELL_ATTR1_UNK27", "SPELL_ATTR1_UNK27", "" };
        case SPELL_ATTR1_DONT_DISPLAY_IN_AURA_BAR: return { "SPELL_ATTR1_DONT_DISPLAY_IN_AURA_BAR", "Hide in aura bar (client only)", "" };
        case SPELL_ATTR1_CHANNEL_DISPLAY_SPELL_NAME: return { "SPELL_ATTR1_CHANNEL_DISPLAY_SPELL_NAME", "Show spell name during channel (client only)", "" };
        case SPELL_ATTR1_ENABLE_AT_DODGE: return { "SPELL_ATTR1_ENABLE_AT_DODGE", "Enable at dodge", "" };
        case SPELL_ATTR1_UNK31: return { "SPELL_ATTR1_UNK31", "SPELL_ATTR1_UNK31", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr1>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr1 EnumUtils<SpellAttr1>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR1_DISMISS_PET;
        case 1: return SPELL_ATTR1_DRAIN_ALL_POWER;
        case 2: return SPELL_ATTR1_CHANNELED_1;
        case 3: return SPELL_ATTR1_CANT_BE_REDIRECTED;
        case 4: return SPELL_ATTR1_UNK4;
        case 5: return SPELL_ATTR1_NOT_BREAK_STEALTH;
        case 6: return SPELL_ATTR1_CHANNELED_2;
        case 7: return SPELL_ATTR1_CANT_BE_REFLECTED;
        case 8: return SPELL_ATTR1_CANT_TARGET_IN_COMBAT;
        case 9: return SPELL_ATTR1_MELEE_COMBAT_START;
        case 10: return SPELL_ATTR1_NO_THREAT;
        case 11: return SPELL_ATTR1_DONT_REFRESH_DURATION_ON_RECAST;
        case 12: return SPELL_ATTR1_IS_PICKPOCKET;
        case 13: return SPELL_ATTR1_FARSIGHT;
        case 14: return SPELL_ATTR1_CHANNEL_TRACK_TARGET;
        case 15: return SPELL_ATTR1_DISPEL_AURAS_ON_IMMUNITY;
        case 16: return SPELL_ATTR1_UNAFFECTED_BY_SCHOOL_IMMUNE;
        case 17: return SPELL_ATTR1_UNAUTOCASTABLE_BY_PET;
        case 18: return SPELL_ATTR1_UNK18;
        case 19: return SPELL_ATTR1_CANT_TARGET_SELF;
        case 20: return SPELL_ATTR1_REQ_COMBO_POINTS1;
        case 21: return SPELL_ATTR1_UNK21;
        case 22: return SPELL_ATTR1_REQ_COMBO_POINTS2;
        case 23: return SPELL_ATTR1_UNK23;
        case 24: return SPELL_ATTR1_IS_FISHING;
        case 25: return SPELL_ATTR1_UNK25;
        case 26: return SPELL_ATTR1_UNK26;
        case 27: return SPELL_ATTR1_UNK27;
        case 28: return SPELL_ATTR1_DONT_DISPLAY_IN_AURA_BAR;
        case 29: return SPELL_ATTR1_CHANNEL_DISPLAY_SPELL_NAME;
        case 30: return SPELL_ATTR1_ENABLE_AT_DODGE;
        case 31: return SPELL_ATTR1_UNK31;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr2' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr2>::ToString(SpellAttr2 value)
{
    switch (value)
    {
        case SPELL_ATTR2_CAN_TARGET_DEAD: return { "SPELL_ATTR2_CAN_TARGET_DEAD", "Can target dead players or corpses", "" };
        case SPELL_ATTR2_UNK1: return { "SPELL_ATTR2_UNK1", "SPELL_ATTR2_UNK1", "" };
        case SPELL_ATTR2_CAN_TARGET_NOT_IN_LOS: return { "SPELL_ATTR2_CAN_TARGET_NOT_IN_LOS", "Ignore Line of Sight", "" };
        case SPELL_ATTR2_UNK3: return { "SPELL_ATTR2_UNK3", "Ignore aura scaling", "" };
        case SPELL_ATTR2_DISPLAY_IN_STANCE_BAR: return { "SPELL_ATTR2_DISPLAY_IN_STANCE_BAR", "Show in stance bar (client only)", "" };
        case SPELL_ATTR2_AUTOREPEAT_FLAG: return { "SPELL_ATTR2_AUTOREPEAT_FLAG", "Ranged auto-attack spell", "" };
        case SPELL_ATTR2_CANT_TARGET_TAPPED: return { "SPELL_ATTR2_CANT_TARGET_TAPPED", "Cannot target others' tapped units", "Can only target untapped units, or those tapped by caster" };
        case SPELL_ATTR2_UNK7: return { "SPELL_ATTR2_UNK7", "SPELL_ATTR2_UNK7", "" };
        case SPELL_ATTR2_UNK8: return { "SPELL_ATTR2_UNK8", "SPELL_ATTR2_UNK8", "" };
        case SPELL_ATTR2_UNK9: return { "SPELL_ATTR2_UNK9", "SPELL_ATTR2_UNK9", "" };
        case SPELL_ATTR2_UNK10: return { "SPELL_ATTR2_UNK10", "SPELL_ATTR2_UNK10", "" };
        case SPELL_ATTR2_HEALTH_FUNNEL: return { "SPELL_ATTR2_HEALTH_FUNNEL", "Health Funnel", "" };
        case SPELL_ATTR2_UNK12: return { "SPELL_ATTR2_UNK12", "SPELL_ATTR2_UNK12", "" };
        case SPELL_ATTR2_PRESERVE_ENCHANT_IN_ARENA: return { "SPELL_ATTR2_PRESERVE_ENCHANT_IN_ARENA", "Enchant persists when entering arena", "" };
        case SPELL_ATTR2_UNK14: return { "SPELL_ATTR2_UNK14", "SPELL_ATTR2_UNK14", "" };
        case SPELL_ATTR2_UNK15: return { "SPELL_ATTR2_UNK15", "SPELL_ATTR2_UNK15", "" };
        case SPELL_ATTR2_TAME_BEAST: return { "SPELL_ATTR2_TAME_BEAST", "Tame Beast", "" };
        case SPELL_ATTR2_NOT_RESET_AUTO_ACTIONS: return { "SPELL_ATTR2_NOT_RESET_AUTO_ACTIONS", "Don't reset swing timer", "Does not reset melee/ranged autoattack timer on cast" };
        case SPELL_ATTR2_REQ_DEAD_PET: return { "SPELL_ATTR2_REQ_DEAD_PET", "Requires dead pet", "" };
        case SPELL_ATTR2_NOT_NEED_SHAPESHIFT: return { "SPELL_ATTR2_NOT_NEED_SHAPESHIFT", "Also allow outside shapeshift", "Even if Stances are nonzero, allow spell to be cast outside of shapeshift (though not in a different shapeshift)" };
        case SPELL_ATTR2_UNK20: return { "SPELL_ATTR2_UNK20", "SPELL_ATTR2_UNK20", "" };
        case SPELL_ATTR2_DAMAGE_REDUCED_SHIELD: return { "SPELL_ATTR2_DAMAGE_REDUCED_SHIELD", "SPELL_ATTR2_DAMAGE_REDUCED_SHIELD", "" };
        case SPELL_ATTR2_UNK22: return { "SPELL_ATTR2_UNK22", "SPELL_ATTR2_UNK22", "" };
        case SPELL_ATTR2_IS_ARCANE_CONCENTRATION: return { "SPELL_ATTR2_IS_ARCANE_CONCENTRATION", "Arcane Concentration", "" };
        case SPELL_ATTR2_UNK24: return { "SPELL_ATTR2_UNK24", "SPELL_ATTR2_UNK24", "" };
        case SPELL_ATTR2_UNK25: return { "SPELL_ATTR2_UNK25", "SPELL_ATTR2_UNK25", "" };
        case SPELL_ATTR2_UNAFFECTED_BY_AURA_SCHOOL_IMMUNE: return { "SPELL_ATTR2_UNAFFECTED_BY_AURA_SCHOOL_IMMUNE", "Pierce aura application immunities", "Allow aura to be applied despite target being immune to new aura applications" };
        case SPELL_ATTR2_UNK27: return { "SPELL_ATTR2_UNK27", "SPELL_ATTR2_UNK27", "" };
        case SPELL_ATTR2_IGNORE_ACTION_AURA_INTERRUPT_FLAGS: return { "SPELL_ATTR2_IGNORE_ACTION_AURA_INTERRUPT_FLAGS", "Not an Action", "" };
        case SPELL_ATTR2_CANT_CRIT: return { "SPELL_ATTR2_CANT_CRIT", "Cannot critically strike", "" };
        case SPELL_ATTR2_TRIGGERED_CAN_TRIGGER_PROC: return { "SPELL_ATTR2_TRIGGERED_CAN_TRIGGER_PROC", "Allow triggered spell to trigger procs", "Without this attribute, any triggered spell will be unable to trigger other auras' procs" };
        case SPELL_ATTR2_FOOD_BUFF: return { "SPELL_ATTR2_FOOD_BUFF", "Food buff (client only)", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr2>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr2 EnumUtils<SpellAttr2>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR2_CAN_TARGET_DEAD;
        case 1: return SPELL_ATTR2_UNK1;
        case 2: return SPELL_ATTR2_CAN_TARGET_NOT_IN_LOS;
        case 3: return SPELL_ATTR2_UNK3;
        case 4: return SPELL_ATTR2_DISPLAY_IN_STANCE_BAR;
        case 5: return SPELL_ATTR2_AUTOREPEAT_FLAG;
        case 6: return SPELL_ATTR2_CANT_TARGET_TAPPED;
        case 7: return SPELL_ATTR2_UNK7;
        case 8: return SPELL_ATTR2_UNK8;
        case 9: return SPELL_ATTR2_UNK9;
        case 10: return SPELL_ATTR2_UNK10;
        case 11: return SPELL_ATTR2_HEALTH_FUNNEL;
        case 12: return SPELL_ATTR2_UNK12;
        case 13: return SPELL_ATTR2_PRESERVE_ENCHANT_IN_ARENA;
        case 14: return SPELL_ATTR2_UNK14;
        case 15: return SPELL_ATTR2_UNK15;
        case 16: return SPELL_ATTR2_TAME_BEAST;
        case 17: return SPELL_ATTR2_NOT_RESET_AUTO_ACTIONS;
        case 18: return SPELL_ATTR2_REQ_DEAD_PET;
        case 19: return SPELL_ATTR2_NOT_NEED_SHAPESHIFT;
        case 20: return SPELL_ATTR2_UNK20;
        case 21: return SPELL_ATTR2_DAMAGE_REDUCED_SHIELD;
        case 22: return SPELL_ATTR2_UNK22;
        case 23: return SPELL_ATTR2_IS_ARCANE_CONCENTRATION;
        case 24: return SPELL_ATTR2_UNK24;
        case 25: return SPELL_ATTR2_UNK25;
        case 26: return SPELL_ATTR2_UNAFFECTED_BY_AURA_SCHOOL_IMMUNE;
        case 27: return SPELL_ATTR2_UNK27;
        case 28: return SPELL_ATTR2_IGNORE_ACTION_AURA_INTERRUPT_FLAGS;
        case 29: return SPELL_ATTR2_CANT_CRIT;
        case 30: return SPELL_ATTR2_TRIGGERED_CAN_TRIGGER_PROC;
        case 31: return SPELL_ATTR2_FOOD_BUFF;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr3' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr3>::ToString(SpellAttr3 value)
{
    switch (value)
    {
        case SPELL_ATTR3_UNK0: return { "SPELL_ATTR3_UNK0", "SPELL_ATTR3_UNK0", "0" };
        case SPELL_ATTR3_NO_PROC_EQUIP_REQUIREMENT: return { "SPELL_ATTR3_NO_PROC_EQUIP_REQUIREMENT", "SPELL_ATTR3_NO_PROC_EQUIP_REQUIREMENT", "1 Ignores subclass mask check when checking proc" };
        case SPELL_ATTR3_UNK2: return { "SPELL_ATTR3_UNK2", "SPELL_ATTR3_UNK2", "2" };
        case SPELL_ATTR3_BLOCKABLE_SPELL: return { "SPELL_ATTR3_BLOCKABLE_SPELL", "SPELL_ATTR3_BLOCKABLE_SPELL", "3 Only dmg class melee in 3.1.3" };
        case SPELL_ATTR3_IGNORE_RESURRECTION_TIMER: return { "SPELL_ATTR3_IGNORE_RESURRECTION_TIMER", "SPELL_ATTR3_IGNORE_RESURRECTION_TIMER", "4 you don't have to wait to be resurrected with these spells" };
        case SPELL_ATTR3_UNK5: return { "SPELL_ATTR3_UNK5", "SPELL_ATTR3_UNK5", "5" };
        case SPELL_ATTR3_UNK6: return { "SPELL_ATTR3_UNK6", "SPELL_ATTR3_UNK6", "6" };
        case SPELL_ATTR3_STACK_FOR_DIFF_CASTERS: return { "SPELL_ATTR3_STACK_FOR_DIFF_CASTERS", "SPELL_ATTR3_STACK_FOR_DIFF_CASTERS", "7 separate stack for every caster" };
        case SPELL_ATTR3_ONLY_TARGET_PLAYERS: return { "SPELL_ATTR3_ONLY_TARGET_PLAYERS", "SPELL_ATTR3_ONLY_TARGET_PLAYERS", "8 can only target players" };
        case SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2: return { "SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2", "SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2", "9 triggered from effect?" };
        case SPELL_ATTR3_MAIN_HAND: return { "SPELL_ATTR3_MAIN_HAND", "SPELL_ATTR3_MAIN_HAND", "10 Main hand weapon required" };
        case SPELL_ATTR3_BATTLEGROUND: return { "SPELL_ATTR3_BATTLEGROUND", "SPELL_ATTR3_BATTLEGROUND", "11 Can only be cast in battleground" };
        case SPELL_ATTR3_ONLY_TARGET_GHOSTS: return { "SPELL_ATTR3_ONLY_TARGET_GHOSTS", "SPELL_ATTR3_ONLY_TARGET_GHOSTS", "12" };
        case SPELL_ATTR3_DONT_DISPLAY_CHANNEL_BAR: return { "SPELL_ATTR3_DONT_DISPLAY_CHANNEL_BAR", "SPELL_ATTR3_DONT_DISPLAY_CHANNEL_BAR", "13 Clientside attribute - will not display channeling bar" };
        case SPELL_ATTR3_IS_HONORLESS_TARGET: return { "SPELL_ATTR3_IS_HONORLESS_TARGET", "SPELL_ATTR3_IS_HONORLESS_TARGET", "14 \042Honorless Target\042 only this spells have this flag" };
        case SPELL_ATTR3_UNK15: return { "SPELL_ATTR3_UNK15", "SPELL_ATTR3_UNK15", "15 Auto Shoot, Shoot, Throw,  - this is autoshot flag" };
        case SPELL_ATTR3_CANT_TRIGGER_PROC: return { "SPELL_ATTR3_CANT_TRIGGER_PROC", "SPELL_ATTR3_CANT_TRIGGER_PROC", "16 confirmed with many patchnotes" };
        case SPELL_ATTR3_NO_INITIAL_AGGRO: return { "SPELL_ATTR3_NO_INITIAL_AGGRO", "SPELL_ATTR3_NO_INITIAL_AGGRO", "17 Soothe Animal, 39758, Mind Soothe" };
        case SPELL_ATTR3_IGNORE_HIT_RESULT: return { "SPELL_ATTR3_IGNORE_HIT_RESULT", "SPELL_ATTR3_IGNORE_HIT_RESULT", "18 Spell should always hit its target" };
        case SPELL_ATTR3_DISABLE_PROC: return { "SPELL_ATTR3_DISABLE_PROC", "SPELL_ATTR3_DISABLE_PROC", "19 during aura proc no spells can trigger (20178, 20375)" };
        case SPELL_ATTR3_DEATH_PERSISTENT: return { "SPELL_ATTR3_DEATH_PERSISTENT", "SPELL_ATTR3_DEATH_PERSISTENT", "20 Death persistent spells" };
        case SPELL_ATTR3_UNK21: return { "SPELL_ATTR3_UNK21", "SPELL_ATTR3_UNK21", "21 unused" };
        case SPELL_ATTR3_REQ_WAND: return { "SPELL_ATTR3_REQ_WAND", "SPELL_ATTR3_REQ_WAND", "22 Req wand" };
        case SPELL_ATTR3_UNK23: return { "SPELL_ATTR3_UNK23", "SPELL_ATTR3_UNK23", "23" };
        case SPELL_ATTR3_REQ_OFFHAND: return { "SPELL_ATTR3_REQ_OFFHAND", "SPELL_ATTR3_REQ_OFFHAND", "24 Req offhand weapon" };
        case SPELL_ATTR3_TREAT_AS_PERIODIC: return { "SPELL_ATTR3_TREAT_AS_PERIODIC", "SPELL_ATTR3_TREAT_AS_PERIODIC", "25 Makes the spell appear as periodic in client combat logs - used by spells that trigger another spell on each tick" };
        case SPELL_ATTR3_CAN_PROC_WITH_TRIGGERED: return { "SPELL_ATTR3_CAN_PROC_WITH_TRIGGERED", "SPELL_ATTR3_CAN_PROC_WITH_TRIGGERED", "26 auras with this attribute can proc from triggered spell casts with SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2 (67736 + 52999)" };
        case SPELL_ATTR3_DRAIN_SOUL: return { "SPELL_ATTR3_DRAIN_SOUL", "SPELL_ATTR3_DRAIN_SOUL", "27 only drain soul has this flag" };
        case SPELL_ATTR3_UNK28: return { "SPELL_ATTR3_UNK28", "SPELL_ATTR3_UNK28", "28" };
        case SPELL_ATTR3_NO_DONE_BONUS: return { "SPELL_ATTR3_NO_DONE_BONUS", "SPELL_ATTR3_NO_DONE_BONUS", "29 Ignore caster spellpower and done damage mods?  client doesn't apply spellmods for those spells" };
        case SPELL_ATTR3_DONT_DISPLAY_RANGE: return { "SPELL_ATTR3_DONT_DISPLAY_RANGE", "SPELL_ATTR3_DONT_DISPLAY_RANGE", "30 client doesn't display range in tooltip for those spells" };
        case SPELL_ATTR3_UNK31: return { "SPELL_ATTR3_UNK31", "SPELL_ATTR3_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr3>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr3 EnumUtils<SpellAttr3>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR3_UNK0;
        case 1: return SPELL_ATTR3_NO_PROC_EQUIP_REQUIREMENT;
        case 2: return SPELL_ATTR3_UNK2;
        case 3: return SPELL_ATTR3_BLOCKABLE_SPELL;
        case 4: return SPELL_ATTR3_IGNORE_RESURRECTION_TIMER;
        case 5: return SPELL_ATTR3_UNK5;
        case 6: return SPELL_ATTR3_UNK6;
        case 7: return SPELL_ATTR3_STACK_FOR_DIFF_CASTERS;
        case 8: return SPELL_ATTR3_ONLY_TARGET_PLAYERS;
        case 9: return SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2;
        case 10: return SPELL_ATTR3_MAIN_HAND;
        case 11: return SPELL_ATTR3_BATTLEGROUND;
        case 12: return SPELL_ATTR3_ONLY_TARGET_GHOSTS;
        case 13: return SPELL_ATTR3_DONT_DISPLAY_CHANNEL_BAR;
        case 14: return SPELL_ATTR3_IS_HONORLESS_TARGET;
        case 15: return SPELL_ATTR3_UNK15;
        case 16: return SPELL_ATTR3_CANT_TRIGGER_PROC;
        case 17: return SPELL_ATTR3_NO_INITIAL_AGGRO;
        case 18: return SPELL_ATTR3_IGNORE_HIT_RESULT;
        case 19: return SPELL_ATTR3_DISABLE_PROC;
        case 20: return SPELL_ATTR3_DEATH_PERSISTENT;
        case 21: return SPELL_ATTR3_UNK21;
        case 22: return SPELL_ATTR3_REQ_WAND;
        case 23: return SPELL_ATTR3_UNK23;
        case 24: return SPELL_ATTR3_REQ_OFFHAND;
        case 25: return SPELL_ATTR3_TREAT_AS_PERIODIC;
        case 26: return SPELL_ATTR3_CAN_PROC_WITH_TRIGGERED;
        case 27: return SPELL_ATTR3_DRAIN_SOUL;
        case 28: return SPELL_ATTR3_UNK28;
        case 29: return SPELL_ATTR3_NO_DONE_BONUS;
        case 30: return SPELL_ATTR3_DONT_DISPLAY_RANGE;
        case 31: return SPELL_ATTR3_UNK31;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr4' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr4>::ToString(SpellAttr4 value)
{
    switch (value)
    {
        case SPELL_ATTR4_IGNORE_RESISTANCES: return { "SPELL_ATTR4_IGNORE_RESISTANCES", "SPELL_ATTR4_IGNORE_RESISTANCES", "0 spells with this attribute will completely ignore the target's resistance (these spells can't be resisted)" };
        case SPELL_ATTR4_PROC_ONLY_ON_CASTER: return { "SPELL_ATTR4_PROC_ONLY_ON_CASTER", "SPELL_ATTR4_PROC_ONLY_ON_CASTER", "1 proc only on effects with TARGET_UNIT_CASTER?" };
        case SPELL_ATTR4_AURA_EXPIRES_OFFLINE: return { "SPELL_ATTR4_AURA_EXPIRES_OFFLINE", "SPELL_ATTR4_AURA_EXPIRES_OFFLINE", "2 duration is removed from aura while player is logged out" };
        case SPELL_ATTR4_UNK3: return { "SPELL_ATTR4_UNK3", "SPELL_ATTR4_UNK3", "3" };
        case SPELL_ATTR4_UNK4: return { "SPELL_ATTR4_UNK4", "SPELL_ATTR4_UNK4", "4 This will no longer cause guards to attack on use??" };
        case SPELL_ATTR4_UNK5: return { "SPELL_ATTR4_UNK5", "SPELL_ATTR4_UNK5", "5" };
        case SPELL_ATTR4_NOT_STEALABLE: return { "SPELL_ATTR4_NOT_STEALABLE", "SPELL_ATTR4_NOT_STEALABLE", "6 although such auras might be dispellable, they cannot be stolen" };
        case SPELL_ATTR4_CAN_CAST_WHILE_CASTING: return { "SPELL_ATTR4_CAN_CAST_WHILE_CASTING", "SPELL_ATTR4_CAN_CAST_WHILE_CASTING", "7 Can be cast while another cast is in progress - see CanCastWhileCasting(SpellRec const*,CGUnit_C *,int &)" };
        case SPELL_ATTR4_FIXED_DAMAGE: return { "SPELL_ATTR4_FIXED_DAMAGE", "SPELL_ATTR4_FIXED_DAMAGE", "8 Ignores resilience and any (except mechanic related) damage or % damage taken auras on target." };
        case SPELL_ATTR4_TRIGGER_ACTIVATE: return { "SPELL_ATTR4_TRIGGER_ACTIVATE", "SPELL_ATTR4_TRIGGER_ACTIVATE", "9 initially disabled / trigger activate from event (Execute, Riposte, Deep Freeze end other)" };
        case SPELL_ATTR4_SPELL_VS_EXTEND_COST: return { "SPELL_ATTR4_SPELL_VS_EXTEND_COST", "SPELL_ATTR4_SPELL_VS_EXTEND_COST", "10 Rogue Shiv have this flag" };
        case SPELL_ATTR4_UNK11: return { "SPELL_ATTR4_UNK11", "SPELL_ATTR4_UNK11", "11" };
        case SPELL_ATTR4_UNK12: return { "SPELL_ATTR4_UNK12", "SPELL_ATTR4_UNK12", "12" };
        case SPELL_ATTR4_COMBAT_LOG_NO_CASTER: return { "SPELL_ATTR4_COMBAT_LOG_NO_CASTER", "SPELL_ATTR4_COMBAT_LOG_NO_CASTER", "13 No caster object is sent to client combat log" };
        case SPELL_ATTR4_DAMAGE_DOESNT_BREAK_AURAS: return { "SPELL_ATTR4_DAMAGE_DOESNT_BREAK_AURAS", "SPELL_ATTR4_DAMAGE_DOESNT_BREAK_AURAS", "14 doesn't break auras by damage from these spells" };
        case SPELL_ATTR4_HIDDEN_IN_SPELLBOOK: return { "SPELL_ATTR4_HIDDEN_IN_SPELLBOOK", "SPELL_ATTR4_HIDDEN_IN_SPELLBOOK", "15" };
        case SPELL_ATTR4_NOT_USABLE_IN_ARENA_OR_RATED_BG: return { "SPELL_ATTR4_NOT_USABLE_IN_ARENA_OR_RATED_BG", "SPELL_ATTR4_NOT_USABLE_IN_ARENA_OR_RATED_BG", "16 Cannot be used in both Arenas or Rated Battlegrounds" };
        case SPELL_ATTR4_USABLE_IN_ARENA: return { "SPELL_ATTR4_USABLE_IN_ARENA", "SPELL_ATTR4_USABLE_IN_ARENA", "17" };
        case SPELL_ATTR4_AREA_TARGET_CHAIN: return { "SPELL_ATTR4_AREA_TARGET_CHAIN", "SPELL_ATTR4_AREA_TARGET_CHAIN", "18 (NYI)hits area targets one after another instead of all at once" };
        case SPELL_ATTR4_UNK19: return { "SPELL_ATTR4_UNK19", "SPELL_ATTR4_UNK19", "19 proc dalayed, after damage or don't proc on absorb?" };
        case SPELL_ATTR4_NOT_CHECK_SELFCAST_POWER: return { "SPELL_ATTR4_NOT_CHECK_SELFCAST_POWER", "SPELL_ATTR4_NOT_CHECK_SELFCAST_POWER", "20 supersedes message \042More powerful spell applied\042 for self casts." };
        case SPELL_ATTR4_DONT_REMOVE_IN_ARENA: return { "SPELL_ATTR4_DONT_REMOVE_IN_ARENA", "SPELL_ATTR4_DONT_REMOVE_IN_ARENA", "21 Pally aura, dk presence, dudu form, warrior stance, shadowform, hunter track" };
        case SPELL_ATTR4_UNK22: return { "SPELL_ATTR4_UNK22", "SPELL_ATTR4_UNK22", "22 Seal of Command (42058, 57770) and Gymer's Smash 55426" };
        case SPELL_ATTR4_SUPPRESS_WEAPON_PROCS: return { "SPELL_ATTR4_SUPPRESS_WEAPON_PROCS", "SPELL_ATTR4_SUPPRESS_WEAPON_PROCS", "23 spells with this flag should not trigger item spells / enchants (mostly in conjunction with SPELL_ATTR0_STOP_ATTACK_TARGET)" };
        case SPELL_ATTR4_UNK24: return { "SPELL_ATTR4_UNK24", "SPELL_ATTR4_UNK24", "24 some shoot spell" };
        case SPELL_ATTR4_IS_PET_SCALING: return { "SPELL_ATTR4_IS_PET_SCALING", "SPELL_ATTR4_IS_PET_SCALING", "25 pet scaling auras" };
        case SPELL_ATTR4_CAST_ONLY_IN_OUTLAND: return { "SPELL_ATTR4_CAST_ONLY_IN_OUTLAND", "SPELL_ATTR4_CAST_ONLY_IN_OUTLAND", "26 Can only be used in Outland." };
        case SPELL_ATTR4_UNK27: return { "SPELL_ATTR4_UNK27", "SPELL_ATTR4_UNK27", "27" };
        case SPELL_ATTR4_UNK28: return { "SPELL_ATTR4_UNK28", "SPELL_ATTR4_UNK28", "28 Aimed Shot" };
        case SPELL_ATTR4_UNK29: return { "SPELL_ATTR4_UNK29", "SPELL_ATTR4_UNK29", "29" };
        case SPELL_ATTR4_UNK30: return { "SPELL_ATTR4_UNK30", "SPELL_ATTR4_UNK30", "30" };
        case SPELL_ATTR4_UNK31: return { "SPELL_ATTR4_UNK31", "SPELL_ATTR4_UNK31", "31 Polymorph (chicken) 228 and Sonic Boom (38052, 38488)" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr4>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr4 EnumUtils<SpellAttr4>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR4_IGNORE_RESISTANCES;
        case 1: return SPELL_ATTR4_PROC_ONLY_ON_CASTER;
        case 2: return SPELL_ATTR4_AURA_EXPIRES_OFFLINE;
        case 3: return SPELL_ATTR4_UNK3;
        case 4: return SPELL_ATTR4_UNK4;
        case 5: return SPELL_ATTR4_UNK5;
        case 6: return SPELL_ATTR4_NOT_STEALABLE;
        case 7: return SPELL_ATTR4_CAN_CAST_WHILE_CASTING;
        case 8: return SPELL_ATTR4_FIXED_DAMAGE;
        case 9: return SPELL_ATTR4_TRIGGER_ACTIVATE;
        case 10: return SPELL_ATTR4_SPELL_VS_EXTEND_COST;
        case 11: return SPELL_ATTR4_UNK11;
        case 12: return SPELL_ATTR4_UNK12;
        case 13: return SPELL_ATTR4_COMBAT_LOG_NO_CASTER;
        case 14: return SPELL_ATTR4_DAMAGE_DOESNT_BREAK_AURAS;
        case 15: return SPELL_ATTR4_HIDDEN_IN_SPELLBOOK;
        case 16: return SPELL_ATTR4_NOT_USABLE_IN_ARENA_OR_RATED_BG;
        case 17: return SPELL_ATTR4_USABLE_IN_ARENA;
        case 18: return SPELL_ATTR4_AREA_TARGET_CHAIN;
        case 19: return SPELL_ATTR4_UNK19;
        case 20: return SPELL_ATTR4_NOT_CHECK_SELFCAST_POWER;
        case 21: return SPELL_ATTR4_DONT_REMOVE_IN_ARENA;
        case 22: return SPELL_ATTR4_UNK22;
        case 23: return SPELL_ATTR4_SUPPRESS_WEAPON_PROCS;
        case 24: return SPELL_ATTR4_UNK24;
        case 25: return SPELL_ATTR4_IS_PET_SCALING;
        case 26: return SPELL_ATTR4_CAST_ONLY_IN_OUTLAND;
        case 27: return SPELL_ATTR4_UNK27;
        case 28: return SPELL_ATTR4_UNK28;
        case 29: return SPELL_ATTR4_UNK29;
        case 30: return SPELL_ATTR4_UNK30;
        case 31: return SPELL_ATTR4_UNK31;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr5' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr5>::ToString(SpellAttr5 value)
{
    switch (value)
    {
        case SPELL_ATTR5_CAN_CHANNEL_WHEN_MOVING: return { "SPELL_ATTR5_CAN_CHANNEL_WHEN_MOVING", "SPELL_ATTR5_CAN_CHANNEL_WHEN_MOVING", "0 available casting channel spell when moving" };
        case SPELL_ATTR5_NO_REAGENT_WHILE_PREP: return { "SPELL_ATTR5_NO_REAGENT_WHILE_PREP", "SPELL_ATTR5_NO_REAGENT_WHILE_PREP", "1 not need reagents if UNIT_FLAG_PREPARATION" };
        case SPELL_ATTR5_REMOVE_ENTERING_ARENA: return { "SPELL_ATTR5_REMOVE_ENTERING_ARENA", "SPELL_ATTR5_REMOVE_ENTERING_ARENA", "2 remove this aura on arena enter" };
        case SPELL_ATTR5_USABLE_WHILE_STUNNED: return { "SPELL_ATTR5_USABLE_WHILE_STUNNED", "SPELL_ATTR5_USABLE_WHILE_STUNNED", "3 usable while stunned" };
        case SPELL_ATTR5_UNK4: return { "SPELL_ATTR5_UNK4", "SPELL_ATTR5_UNK4", "4" };
        case SPELL_ATTR5_SINGLE_TARGET_SPELL: return { "SPELL_ATTR5_SINGLE_TARGET_SPELL", "SPELL_ATTR5_SINGLE_TARGET_SPELL", "5 Only one target can be apply at a time" };
        case SPELL_ATTR5_UNK6: return { "SPELL_ATTR5_UNK6", "SPELL_ATTR5_UNK6", "6" };
        case SPELL_ATTR5_UNK7: return { "SPELL_ATTR5_UNK7", "SPELL_ATTR5_UNK7", "7" };
        case SPELL_ATTR5_CANT_TARGET_PLAYER_CONTROLLED: return { "SPELL_ATTR5_CANT_TARGET_PLAYER_CONTROLLED", "SPELL_ATTR5_CANT_TARGET_PLAYER_CONTROLLED", "8 cannot target player controlled units but can target players" };
        case SPELL_ATTR5_START_PERIODIC_AT_APPLY: return { "SPELL_ATTR5_START_PERIODIC_AT_APPLY", "SPELL_ATTR5_START_PERIODIC_AT_APPLY", "9 begin periodic tick at aura apply" };
        case SPELL_ATTR5_HIDE_DURATION: return { "SPELL_ATTR5_HIDE_DURATION", "SPELL_ATTR5_HIDE_DURATION", "10 do not send duration to client" };
        case SPELL_ATTR5_ALLOW_TARGET_OF_TARGET_AS_TARGET: return { "SPELL_ATTR5_ALLOW_TARGET_OF_TARGET_AS_TARGET", "SPELL_ATTR5_ALLOW_TARGET_OF_TARGET_AS_TARGET", "11 (NYI) uses target's target as target if original target not valid (intervene for example)" };
        case SPELL_ATTR5_UNK12: return { "SPELL_ATTR5_UNK12", "SPELL_ATTR5_UNK12", "12 Cleave related?" };
        case SPELL_ATTR5_HASTE_AFFECT_DURATION: return { "SPELL_ATTR5_HASTE_AFFECT_DURATION", "SPELL_ATTR5_HASTE_AFFECT_DURATION", "13 haste effects decrease duration of this" };
        case SPELL_ATTR5_NOT_USABLE_WHILE_CHARMED: return { "SPELL_ATTR5_NOT_USABLE_WHILE_CHARMED", "SPELL_ATTR5_NOT_USABLE_WHILE_CHARMED", "14 Charmed units cannot cast this spell" };
        case SPELL_ATTR5_UNK15: return { "SPELL_ATTR5_UNK15", "SPELL_ATTR5_UNK15", "15 Inflits on multiple targets?" };
        case SPELL_ATTR5_UNK16: return { "SPELL_ATTR5_UNK16", "SPELL_ATTR5_UNK16", "16" };
        case SPELL_ATTR5_USABLE_WHILE_FEARED: return { "SPELL_ATTR5_USABLE_WHILE_FEARED", "SPELL_ATTR5_USABLE_WHILE_FEARED", "17 usable while feared" };
        case SPELL_ATTR5_USABLE_WHILE_CONFUSED: return { "SPELL_ATTR5_USABLE_WHILE_CONFUSED", "SPELL_ATTR5_USABLE_WHILE_CONFUSED", "18 usable while confused" };
        case SPELL_ATTR5_DONT_TURN_DURING_CAST: return { "SPELL_ATTR5_DONT_TURN_DURING_CAST", "SPELL_ATTR5_DONT_TURN_DURING_CAST", "19 Blocks caster's turning when casting (client does not automatically turn caster's model to face UNIT_FIELD_TARGET)" };
        case SPELL_ATTR5_UNK20: return { "SPELL_ATTR5_UNK20", "SPELL_ATTR5_UNK20", "20" };
        case SPELL_ATTR5_UNK21: return { "SPELL_ATTR5_UNK21", "SPELL_ATTR5_UNK21", "21" };
        case SPELL_ATTR5_UNK22: return { "SPELL_ATTR5_UNK22", "SPELL_ATTR5_UNK22", "22" };
        case SPELL_ATTR5_UNK23: return { "SPELL_ATTR5_UNK23", "SPELL_ATTR5_UNK23", "23" };
        case SPELL_ATTR5_UNK24: return { "SPELL_ATTR5_UNK24", "SPELL_ATTR5_UNK24", "24" };
        case SPELL_ATTR5_UNK25: return { "SPELL_ATTR5_UNK25", "SPELL_ATTR5_UNK25", "25" };
        case SPELL_ATTR5_ALWAYS_AOE_LINE_OF_SIGHT: return { "SPELL_ATTR5_ALWAYS_AOE_LINE_OF_SIGHT", "SPELL_ATTR5_ALWAYS_AOE_LINE_OF_SIGHT", "26 aoe related - Boulder, Cannon, Corpse Explosion, Fire Nova, Flames, Frost Bomb, Living Bomb, Seed of Corruption, Starfall, Thunder Clap, Volley" };
        case SPELL_ATTR5_DONT_SHOW_AURA_IF_SELF_CAST: return { "SPELL_ATTR5_DONT_SHOW_AURA_IF_SELF_CAST", "SPELL_ATTR5_DONT_SHOW_AURA_IF_SELF_CAST", "27 Auras with this attribute are not visible on units that are the caster" };
        case SPELL_ATTR5_DONT_SHOW_AURA_IF_NOT_SELF_CAST: return { "SPELL_ATTR5_DONT_SHOW_AURA_IF_NOT_SELF_CAST", "SPELL_ATTR5_DONT_SHOW_AURA_IF_NOT_SELF_CAST", "28 Auras with this attribute are not visible on units that are not the caster" };
        case SPELL_ATTR5_UNK29: return { "SPELL_ATTR5_UNK29", "SPELL_ATTR5_UNK29", "29" };
        case SPELL_ATTR5_UNK30: return { "SPELL_ATTR5_UNK30", "SPELL_ATTR5_UNK30", "30" };
        case SPELL_ATTR5_UNK31: return { "SPELL_ATTR5_UNK31", "SPELL_ATTR5_UNK31", "31 Forces all nearby enemies to focus attacks caster" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr5>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr5 EnumUtils<SpellAttr5>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR5_CAN_CHANNEL_WHEN_MOVING;
        case 1: return SPELL_ATTR5_NO_REAGENT_WHILE_PREP;
        case 2: return SPELL_ATTR5_REMOVE_ENTERING_ARENA;
        case 3: return SPELL_ATTR5_USABLE_WHILE_STUNNED;
        case 4: return SPELL_ATTR5_UNK4;
        case 5: return SPELL_ATTR5_SINGLE_TARGET_SPELL;
        case 6: return SPELL_ATTR5_UNK6;
        case 7: return SPELL_ATTR5_UNK7;
        case 8: return SPELL_ATTR5_CANT_TARGET_PLAYER_CONTROLLED;
        case 9: return SPELL_ATTR5_START_PERIODIC_AT_APPLY;
        case 10: return SPELL_ATTR5_HIDE_DURATION;
        case 11: return SPELL_ATTR5_ALLOW_TARGET_OF_TARGET_AS_TARGET;
        case 12: return SPELL_ATTR5_UNK12;
        case 13: return SPELL_ATTR5_HASTE_AFFECT_DURATION;
        case 14: return SPELL_ATTR5_NOT_USABLE_WHILE_CHARMED;
        case 15: return SPELL_ATTR5_UNK15;
        case 16: return SPELL_ATTR5_UNK16;
        case 17: return SPELL_ATTR5_USABLE_WHILE_FEARED;
        case 18: return SPELL_ATTR5_USABLE_WHILE_CONFUSED;
        case 19: return SPELL_ATTR5_DONT_TURN_DURING_CAST;
        case 20: return SPELL_ATTR5_UNK20;
        case 21: return SPELL_ATTR5_UNK21;
        case 22: return SPELL_ATTR5_UNK22;
        case 23: return SPELL_ATTR5_UNK23;
        case 24: return SPELL_ATTR5_UNK24;
        case 25: return SPELL_ATTR5_UNK25;
        case 26: return SPELL_ATTR5_ALWAYS_AOE_LINE_OF_SIGHT;
        case 27: return SPELL_ATTR5_DONT_SHOW_AURA_IF_SELF_CAST;
        case 28: return SPELL_ATTR5_DONT_SHOW_AURA_IF_NOT_SELF_CAST;
        case 29: return SPELL_ATTR5_UNK29;
        case 30: return SPELL_ATTR5_UNK30;
        case 31: return SPELL_ATTR5_UNK31;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr6' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr6>::ToString(SpellAttr6 value)
{
    switch (value)
    {
        case SPELL_ATTR6_DONT_DISPLAY_COOLDOWN: return { "SPELL_ATTR6_DONT_DISPLAY_COOLDOWN", "SPELL_ATTR6_DONT_DISPLAY_COOLDOWN", "0 client doesn't display cooldown in tooltip for these spells" };
        case SPELL_ATTR6_ONLY_IN_ARENA: return { "SPELL_ATTR6_ONLY_IN_ARENA", "SPELL_ATTR6_ONLY_IN_ARENA", "1 only usable in arena" };
        case SPELL_ATTR6_IGNORE_CASTER_AURAS: return { "SPELL_ATTR6_IGNORE_CASTER_AURAS", "SPELL_ATTR6_IGNORE_CASTER_AURAS", "2" };
        case SPELL_ATTR6_ASSIST_IGNORE_IMMUNE_FLAG: return { "SPELL_ATTR6_ASSIST_IGNORE_IMMUNE_FLAG", "SPELL_ATTR6_ASSIST_IGNORE_IMMUNE_FLAG", "3 skips checking UNIT_FLAG_IMMUNE_TO_PC and UNIT_FLAG_IMMUNE_TO_NPC flags on assist" };
        case SPELL_ATTR6_UNK4: return { "SPELL_ATTR6_UNK4", "SPELL_ATTR6_UNK4", "4" };
        case SPELL_ATTR6_DO_NOT_CONSUME_RESOURCES: return { "SPELL_ATTR6_DO_NOT_CONSUME_RESOURCES", "SPELL_ATTR6_DO_NOT_CONSUME_RESOURCES", "5 dont consume proc charges" };
        case SPELL_ATTR6_USE_SPELL_CAST_EVENT: return { "SPELL_ATTR6_USE_SPELL_CAST_EVENT", "SPELL_ATTR6_USE_SPELL_CAST_EVENT", "6 Auras with this attribute trigger SPELL_CAST combat log event instead of SPELL_AURA_START (clientside attribute)" };
        case SPELL_ATTR6_UNK7: return { "SPELL_ATTR6_UNK7", "SPELL_ATTR6_UNK7", "7" };
        case SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED: return { "SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED", "SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED", "8" };
        case SPELL_ATTR6_UNK9: return { "SPELL_ATTR6_UNK9", "SPELL_ATTR6_UNK9", "9" };
        case SPELL_ATTR6_CAN_TARGET_POSSESSED_FRIENDS: return { "SPELL_ATTR6_CAN_TARGET_POSSESSED_FRIENDS", "SPELL_ATTR6_CAN_TARGET_POSSESSED_FRIENDS", "10 NYI!" };
        case SPELL_ATTR6_NOT_IN_RAID_INSTANCE: return { "SPELL_ATTR6_NOT_IN_RAID_INSTANCE", "SPELL_ATTR6_NOT_IN_RAID_INSTANCE", "11 not usable in raid instance" };
        case SPELL_ATTR6_CASTABLE_WHILE_ON_VEHICLE: return { "SPELL_ATTR6_CASTABLE_WHILE_ON_VEHICLE", "SPELL_ATTR6_CASTABLE_WHILE_ON_VEHICLE", "12 castable while caster is on vehicle" };
        case SPELL_ATTR6_CAN_TARGET_INVISIBLE: return { "SPELL_ATTR6_CAN_TARGET_INVISIBLE", "SPELL_ATTR6_CAN_TARGET_INVISIBLE", "13 ignore visibility requirement for spell target (phases, invisibility, etc.)" };
        case SPELL_ATTR6_UNK14: return { "SPELL_ATTR6_UNK14", "SPELL_ATTR6_UNK14", "14" };
        case SPELL_ATTR6_UNK15: return { "SPELL_ATTR6_UNK15", "SPELL_ATTR6_UNK15", "15 only 54368, 67892" };
        case SPELL_ATTR6_UNK16: return { "SPELL_ATTR6_UNK16", "SPELL_ATTR6_UNK16", "16" };
        case SPELL_ATTR6_UNK17: return { "SPELL_ATTR6_UNK17", "SPELL_ATTR6_UNK17", "17 Mount spell" };
        case SPELL_ATTR6_CAST_BY_CHARMER: return { "SPELL_ATTR6_CAST_BY_CHARMER", "SPELL_ATTR6_CAST_BY_CHARMER", "18 client won't allow to cast these spells when unit is not possessed && charmer of caster will be original caster" };
        case SPELL_ATTR6_UNK19: return { "SPELL_ATTR6_UNK19", "SPELL_ATTR6_UNK19", "19 only 47488, 50782" };
        case SPELL_ATTR6_ONLY_VISIBLE_TO_CASTER: return { "SPELL_ATTR6_ONLY_VISIBLE_TO_CASTER", "SPELL_ATTR6_ONLY_VISIBLE_TO_CASTER", "20 Auras with this attribute are only visible to their caster (or pet's owner)" };
        case SPELL_ATTR6_CLIENT_UI_TARGET_EFFECTS: return { "SPELL_ATTR6_CLIENT_UI_TARGET_EFFECTS", "SPELL_ATTR6_CLIENT_UI_TARGET_EFFECTS", "21 it's only client-side attribute" };
        case SPELL_ATTR6_UNK22: return { "SPELL_ATTR6_UNK22", "SPELL_ATTR6_UNK22", "22 only 72054" };
        case SPELL_ATTR6_UNK23: return { "SPELL_ATTR6_UNK23", "SPELL_ATTR6_UNK23", "23" };
        case SPELL_ATTR6_CAN_TARGET_UNTARGETABLE: return { "SPELL_ATTR6_CAN_TARGET_UNTARGETABLE", "SPELL_ATTR6_CAN_TARGET_UNTARGETABLE", "24" };
        case SPELL_ATTR6_NOT_RESET_SWING_IF_INSTANT: return { "SPELL_ATTR6_NOT_RESET_SWING_IF_INSTANT", "SPELL_ATTR6_NOT_RESET_SWING_IF_INSTANT", "25 Exorcism, Flash of Light" };
        case SPELL_ATTR6_UNK26: return { "SPELL_ATTR6_UNK26", "SPELL_ATTR6_UNK26", "26 related to player castable positive buff" };
        case SPELL_ATTR6_IGNORE_HEALING_MODIFIERS: return { "SPELL_ATTR6_IGNORE_HEALING_MODIFIERS", "SPELL_ATTR6_IGNORE_HEALING_MODIFIERS", "27 some custom rules - complicated" };
        case SPELL_ATTR6_UNK28: return { "SPELL_ATTR6_UNK28", "SPELL_ATTR6_UNK28", "28 Death Grip" };
        case SPELL_ATTR6_IGNORE_CASTER_DAMAGE_MODIFIERS: return { "SPELL_ATTR6_IGNORE_CASTER_DAMAGE_MODIFIERS", "SPELL_ATTR6_IGNORE_CASTER_DAMAGE_MODIFIERS", "29 ignores done percent damage mods? some custom rules - complicated" };
        case SPELL_ATTR6_UNK30: return { "SPELL_ATTR6_UNK30", "SPELL_ATTR6_UNK30", "30" };
        case SPELL_ATTR6_IGNORE_CATEGORY_COOLDOWN_MODS: return { "SPELL_ATTR6_IGNORE_CATEGORY_COOLDOWN_MODS", "SPELL_ATTR6_IGNORE_CATEGORY_COOLDOWN_MODS", "31 Spells with this attribute skip applying modifiers to category cooldowns" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr6>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr6 EnumUtils<SpellAttr6>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR6_DONT_DISPLAY_COOLDOWN;
        case 1: return SPELL_ATTR6_ONLY_IN_ARENA;
        case 2: return SPELL_ATTR6_IGNORE_CASTER_AURAS;
        case 3: return SPELL_ATTR6_ASSIST_IGNORE_IMMUNE_FLAG;
        case 4: return SPELL_ATTR6_UNK4;
        case 5: return SPELL_ATTR6_DO_NOT_CONSUME_RESOURCES;
        case 6: return SPELL_ATTR6_USE_SPELL_CAST_EVENT;
        case 7: return SPELL_ATTR6_UNK7;
        case 8: return SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED;
        case 9: return SPELL_ATTR6_UNK9;
        case 10: return SPELL_ATTR6_CAN_TARGET_POSSESSED_FRIENDS;
        case 11: return SPELL_ATTR6_NOT_IN_RAID_INSTANCE;
        case 12: return SPELL_ATTR6_CASTABLE_WHILE_ON_VEHICLE;
        case 13: return SPELL_ATTR6_CAN_TARGET_INVISIBLE;
        case 14: return SPELL_ATTR6_UNK14;
        case 15: return SPELL_ATTR6_UNK15;
        case 16: return SPELL_ATTR6_UNK16;
        case 17: return SPELL_ATTR6_UNK17;
        case 18: return SPELL_ATTR6_CAST_BY_CHARMER;
        case 19: return SPELL_ATTR6_UNK19;
        case 20: return SPELL_ATTR6_ONLY_VISIBLE_TO_CASTER;
        case 21: return SPELL_ATTR6_CLIENT_UI_TARGET_EFFECTS;
        case 22: return SPELL_ATTR6_UNK22;
        case 23: return SPELL_ATTR6_UNK23;
        case 24: return SPELL_ATTR6_CAN_TARGET_UNTARGETABLE;
        case 25: return SPELL_ATTR6_NOT_RESET_SWING_IF_INSTANT;
        case 26: return SPELL_ATTR6_UNK26;
        case 27: return SPELL_ATTR6_IGNORE_HEALING_MODIFIERS;
        case 28: return SPELL_ATTR6_UNK28;
        case 29: return SPELL_ATTR6_IGNORE_CASTER_DAMAGE_MODIFIERS;
        case 30: return SPELL_ATTR6_UNK30;
        case 31: return SPELL_ATTR6_IGNORE_CATEGORY_COOLDOWN_MODS;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr7' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr7>::ToString(SpellAttr7 value)
{
    switch (value)
    {
        case SPELL_ATTR7_UNK0: return { "SPELL_ATTR7_UNK0", "SPELL_ATTR7_UNK0", "0 Shaman's new spells (Call of the ...), Feign Death." };
        case SPELL_ATTR7_IGNORE_DURATION_MODS: return { "SPELL_ATTR7_IGNORE_DURATION_MODS", "SPELL_ATTR7_IGNORE_DURATION_MODS", "1 Duration is not affected by duration modifiers" };
        case SPELL_ATTR7_REACTIVATE_AT_RESURRECT: return { "SPELL_ATTR7_REACTIVATE_AT_RESURRECT", "SPELL_ATTR7_REACTIVATE_AT_RESURRECT", "2 Paladin's auras and 65607 only." };
        case SPELL_ATTR7_IS_CHEAT_SPELL: return { "SPELL_ATTR7_IS_CHEAT_SPELL", "SPELL_ATTR7_IS_CHEAT_SPELL", "3 Cannot cast if caster doesn't have UnitFlag2 & UNIT_FLAG2_ALLOW_CHEAT_SPELLS" };
        case SPELL_ATTR7_UNK4: return { "SPELL_ATTR7_UNK4", "SPELL_ATTR7_UNK4", "4 Only 47883 (Soulstone Resurrection) and test spell." };
        case SPELL_ATTR7_SUMMON_TOTEM: return { "SPELL_ATTR7_SUMMON_TOTEM", "SPELL_ATTR7_SUMMON_TOTEM", "5 Only Shaman totems." };
        case SPELL_ATTR7_NO_PUSHBACK_ON_DAMAGE: return { "SPELL_ATTR7_NO_PUSHBACK_ON_DAMAGE", "SPELL_ATTR7_NO_PUSHBACK_ON_DAMAGE", "6 Does not cause spell pushback on damage" };
        case SPELL_ATTR7_UNK7: return { "SPELL_ATTR7_UNK7", "SPELL_ATTR7_UNK7", "7 66218 (Launch) spell." };
        case SPELL_ATTR7_HORDE_ONLY: return { "SPELL_ATTR7_HORDE_ONLY", "SPELL_ATTR7_HORDE_ONLY", "8 Teleports, mounts and other spells." };
        case SPELL_ATTR7_ALLIANCE_ONLY: return { "SPELL_ATTR7_ALLIANCE_ONLY", "SPELL_ATTR7_ALLIANCE_ONLY", "9 Teleports, mounts and other spells." };
        case SPELL_ATTR7_DISPEL_CHARGES: return { "SPELL_ATTR7_DISPEL_CHARGES", "SPELL_ATTR7_DISPEL_CHARGES", "10 Dispel and Spellsteal individual charges instead of whole aura." };
        case SPELL_ATTR7_INTERRUPT_ONLY_NONPLAYER: return { "SPELL_ATTR7_INTERRUPT_ONLY_NONPLAYER", "SPELL_ATTR7_INTERRUPT_ONLY_NONPLAYER", "11 Only non-player casts interrupt, though Feral Charge - Bear has it." };
        case SPELL_ATTR7_SILENCE_ONLY_NONPLAYER: return { "SPELL_ATTR7_SILENCE_ONLY_NONPLAYER", "SPELL_ATTR7_SILENCE_ONLY_NONPLAYER", "12 Not set in 3.2.2a." };
        case SPELL_ATTR7_CAN_ALWAYS_BE_INTERRUPTED: return { "SPELL_ATTR7_CAN_ALWAYS_BE_INTERRUPTED", "SPELL_ATTR7_CAN_ALWAYS_BE_INTERRUPTED", "13 Can always be interrupted, even if caster is immune" };
        case SPELL_ATTR7_UNK14: return { "SPELL_ATTR7_UNK14", "SPELL_ATTR7_UNK14", "14 Only 52150 (Raise Dead - Pet) spell." };
        case SPELL_ATTR7_UNK15: return { "SPELL_ATTR7_UNK15", "SPELL_ATTR7_UNK15", "15 Exorcism. Usable on players? 100% crit chance on undead and demons?" };
        case SPELL_ATTR7_HIDDEN_IN_SPELLBOOK_WHEN_LEARNED: return { "SPELL_ATTR7_HIDDEN_IN_SPELLBOOK_WHEN_LEARNED", "SPELL_ATTR7_HIDDEN_IN_SPELLBOOK_WHEN_LEARNED", "16 After learning these spells become hidden in spellbook (but are visible when not learned for low level characters)" };
        case SPELL_ATTR7_UNK17: return { "SPELL_ATTR7_UNK17", "SPELL_ATTR7_UNK17", "17 Only 27965 (Suicide) spell." };
        case SPELL_ATTR7_HAS_CHARGE_EFFECT: return { "SPELL_ATTR7_HAS_CHARGE_EFFECT", "SPELL_ATTR7_HAS_CHARGE_EFFECT", "18 Only spells that have Charge among effects." };
        case SPELL_ATTR7_ZONE_TELEPORT: return { "SPELL_ATTR7_ZONE_TELEPORT", "SPELL_ATTR7_ZONE_TELEPORT", "19 Teleports to specific zones." };
        case SPELL_ATTR7_UNK20: return { "SPELL_ATTR7_UNK20", "SPELL_ATTR7_UNK20", "20 Blink, Divine Shield, Ice Block" };
        case SPELL_ATTR7_UNK21: return { "SPELL_ATTR7_UNK21", "SPELL_ATTR7_UNK21", "21 Not set" };
        case SPELL_ATTR7_UNK22: return { "SPELL_ATTR7_UNK22", "SPELL_ATTR7_UNK22", "22" };
        case SPELL_ATTR7_UNK23: return { "SPELL_ATTR7_UNK23", "SPELL_ATTR7_UNK23", "23 Motivate, Mutilate, Shattering Throw" };
        case SPELL_ATTR7_UNK24: return { "SPELL_ATTR7_UNK24", "SPELL_ATTR7_UNK24", "24 Motivate, Mutilate, Perform Speech, Shattering Throw" };
        case SPELL_ATTR7_UNK25: return { "SPELL_ATTR7_UNK25", "SPELL_ATTR7_UNK25", "25" };
        case SPELL_ATTR7_UNK26: return { "SPELL_ATTR7_UNK26", "SPELL_ATTR7_UNK26", "26" };
        case SPELL_ATTR7_UNK27: return { "SPELL_ATTR7_UNK27", "SPELL_ATTR7_UNK27", "27 Not set" };
        case SPELL_ATTR7_CONSOLIDATED_RAID_BUFF: return { "SPELL_ATTR7_CONSOLIDATED_RAID_BUFF", "SPELL_ATTR7_CONSOLIDATED_RAID_BUFF", "28 May be collapsed in raid buff frame (clientside attribute)" };
        case SPELL_ATTR7_UNK29: return { "SPELL_ATTR7_UNK29", "SPELL_ATTR7_UNK29", "29 only 69028, 71237" };
        case SPELL_ATTR7_UNK30: return { "SPELL_ATTR7_UNK30", "SPELL_ATTR7_UNK30", "30 Burning Determination, Divine Sacrifice, Earth Shield, Prayer of Mending" };
        case SPELL_ATTR7_CLIENT_INDICATOR: return { "SPELL_ATTR7_CLIENT_INDICATOR", "SPELL_ATTR7_CLIENT_INDICATOR", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr7>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr7 EnumUtils<SpellAttr7>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR7_UNK0;
        case 1: return SPELL_ATTR7_IGNORE_DURATION_MODS;
        case 2: return SPELL_ATTR7_REACTIVATE_AT_RESURRECT;
        case 3: return SPELL_ATTR7_IS_CHEAT_SPELL;
        case 4: return SPELL_ATTR7_UNK4;
        case 5: return SPELL_ATTR7_SUMMON_TOTEM;
        case 6: return SPELL_ATTR7_NO_PUSHBACK_ON_DAMAGE;
        case 7: return SPELL_ATTR7_UNK7;
        case 8: return SPELL_ATTR7_HORDE_ONLY;
        case 9: return SPELL_ATTR7_ALLIANCE_ONLY;
        case 10: return SPELL_ATTR7_DISPEL_CHARGES;
        case 11: return SPELL_ATTR7_INTERRUPT_ONLY_NONPLAYER;
        case 12: return SPELL_ATTR7_SILENCE_ONLY_NONPLAYER;
        case 13: return SPELL_ATTR7_CAN_ALWAYS_BE_INTERRUPTED;
        case 14: return SPELL_ATTR7_UNK14;
        case 15: return SPELL_ATTR7_UNK15;
        case 16: return SPELL_ATTR7_HIDDEN_IN_SPELLBOOK_WHEN_LEARNED;
        case 17: return SPELL_ATTR7_UNK17;
        case 18: return SPELL_ATTR7_HAS_CHARGE_EFFECT;
        case 19: return SPELL_ATTR7_ZONE_TELEPORT;
        case 20: return SPELL_ATTR7_UNK20;
        case 21: return SPELL_ATTR7_UNK21;
        case 22: return SPELL_ATTR7_UNK22;
        case 23: return SPELL_ATTR7_UNK23;
        case 24: return SPELL_ATTR7_UNK24;
        case 25: return SPELL_ATTR7_UNK25;
        case 26: return SPELL_ATTR7_UNK26;
        case 27: return SPELL_ATTR7_UNK27;
        case 28: return SPELL_ATTR7_CONSOLIDATED_RAID_BUFF;
        case 29: return SPELL_ATTR7_UNK29;
        case 30: return SPELL_ATTR7_UNK30;
        case 31: return SPELL_ATTR7_CLIENT_INDICATOR;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr8' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr8>::ToString(SpellAttr8 value)
{
    switch (value)
    {
        case SPELL_ATTR8_CANT_MISS: return { "SPELL_ATTR8_CANT_MISS", "SPELL_ATTR8_CANT_MISS", "0" };
        case SPELL_ATTR8_UNK1: return { "SPELL_ATTR8_UNK1", "SPELL_ATTR8_UNK1", "1" };
        case SPELL_ATTR8_UNK2: return { "SPELL_ATTR8_UNK2", "SPELL_ATTR8_UNK2", "2" };
        case SPELL_ATTR8_UNK3: return { "SPELL_ATTR8_UNK3", "SPELL_ATTR8_UNK3", "3" };
        case SPELL_ATTR8_UNK4: return { "SPELL_ATTR8_UNK4", "SPELL_ATTR8_UNK4", "4" };
        case SPELL_ATTR8_UNK5: return { "SPELL_ATTR8_UNK5", "SPELL_ATTR8_UNK5", "5" };
        case SPELL_ATTR8_UNK6: return { "SPELL_ATTR8_UNK6", "SPELL_ATTR8_UNK6", "6" };
        case SPELL_ATTR8_UNK7: return { "SPELL_ATTR8_UNK7", "SPELL_ATTR8_UNK7", "7" };
        case SPELL_ATTR8_AFFECT_PARTY_AND_RAID: return { "SPELL_ATTR8_AFFECT_PARTY_AND_RAID", "SPELL_ATTR8_AFFECT_PARTY_AND_RAID", "8 Nearly all spells have \042all party and raid\042 in description" };
        case SPELL_ATTR8_DONT_RESET_PERIODIC_TIMER: return { "SPELL_ATTR8_DONT_RESET_PERIODIC_TIMER", "SPELL_ATTR8_DONT_RESET_PERIODIC_TIMER", "9 Periodic auras with this flag keep old periodic timer when refreshing at close to one tick remaining (kind of anti DoT clipping)" };
        case SPELL_ATTR8_NAME_CHANGED_DURING_TRANSFORM: return { "SPELL_ATTR8_NAME_CHANGED_DURING_TRANSFORM", "SPELL_ATTR8_NAME_CHANGED_DURING_TRANSFORM", "10 according to wowhead comments, name changes, title remains" };
        case SPELL_ATTR8_UNK11: return { "SPELL_ATTR8_UNK11", "SPELL_ATTR8_UNK11", "11" };
        case SPELL_ATTR8_AURA_SEND_AMOUNT: return { "SPELL_ATTR8_AURA_SEND_AMOUNT", "SPELL_ATTR8_AURA_SEND_AMOUNT", "12 Aura must have flag AFLAG_ANY_EFFECT_AMOUNT_SENT to send amount" };
        case SPELL_ATTR8_UNK13: return { "SPELL_ATTR8_UNK13", "SPELL_ATTR8_UNK13", "13" };
        case SPELL_ATTR8_UNK14: return { "SPELL_ATTR8_UNK14", "SPELL_ATTR8_UNK14", "14" };
        case SPELL_ATTR8_WATER_MOUNT: return { "SPELL_ATTR8_WATER_MOUNT", "SPELL_ATTR8_WATER_MOUNT", "15 only one River Boat used in Thousand Needles" };
        case SPELL_ATTR8_UNK16: return { "SPELL_ATTR8_UNK16", "SPELL_ATTR8_UNK16", "16" };
        case SPELL_ATTR8_UNK17: return { "SPELL_ATTR8_UNK17", "SPELL_ATTR8_UNK17", "17" };
        case SPELL_ATTR8_REMEMBER_SPELLS: return { "SPELL_ATTR8_REMEMBER_SPELLS", "SPELL_ATTR8_REMEMBER_SPELLS", "18 at some point in time, these auras remember spells and allow to cast them later" };
        case SPELL_ATTR8_USE_COMBO_POINTS_ON_ANY_TARGET: return { "SPELL_ATTR8_USE_COMBO_POINTS_ON_ANY_TARGET", "SPELL_ATTR8_USE_COMBO_POINTS_ON_ANY_TARGET", "19 allows to consume combo points from dead targets" };
        case SPELL_ATTR8_ARMOR_SPECIALIZATION: return { "SPELL_ATTR8_ARMOR_SPECIALIZATION", "SPELL_ATTR8_ARMOR_SPECIALIZATION", "20" };
        case SPELL_ATTR8_UNK21: return { "SPELL_ATTR8_UNK21", "SPELL_ATTR8_UNK21", "21" };
        case SPELL_ATTR8_UNK22: return { "SPELL_ATTR8_UNK22", "SPELL_ATTR8_UNK22", "22" };
        case SPELL_ATTR8_BATTLE_RESURRECTION: return { "SPELL_ATTR8_BATTLE_RESURRECTION", "SPELL_ATTR8_BATTLE_RESURRECTION", "23 Used to limit the Amount of Resurrections in Boss Encounters" };
        case SPELL_ATTR8_HEALING_SPELL: return { "SPELL_ATTR8_HEALING_SPELL", "SPELL_ATTR8_HEALING_SPELL", "24" };
        case SPELL_ATTR8_UNK25: return { "SPELL_ATTR8_UNK25", "SPELL_ATTR8_UNK25", "25" };
        case SPELL_ATTR8_RAID_MARKER: return { "SPELL_ATTR8_RAID_MARKER", "SPELL_ATTR8_RAID_MARKER", "26 probably spell no need learn to cast" };
        case SPELL_ATTR8_UNK27: return { "SPELL_ATTR8_UNK27", "SPELL_ATTR8_UNK27", "27" };
        case SPELL_ATTR8_NOT_IN_BG_OR_ARENA: return { "SPELL_ATTR8_NOT_IN_BG_OR_ARENA", "SPELL_ATTR8_NOT_IN_BG_OR_ARENA", "28 not allow to cast or deactivate currently active effect, not sure about Fast Track" };
        case SPELL_ATTR8_MASTERY_SPECIALIZATION: return { "SPELL_ATTR8_MASTERY_SPECIALIZATION", "SPELL_ATTR8_MASTERY_SPECIALIZATION", "29" };
        case SPELL_ATTR8_UNK30: return { "SPELL_ATTR8_UNK30", "SPELL_ATTR8_UNK30", "30" };
        case SPELL_ATTR8_ATTACK_IGNORE_IMMUNE_TO_PC_FLAG: return { "SPELL_ATTR8_ATTACK_IGNORE_IMMUNE_TO_PC_FLAG", "SPELL_ATTR8_ATTACK_IGNORE_IMMUNE_TO_PC_FLAG", "31 Do not check UNIT_FLAG_IMMUNE_TO_PC in IsValidAttackTarget" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr8>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr8 EnumUtils<SpellAttr8>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR8_CANT_MISS;
        case 1: return SPELL_ATTR8_UNK1;
        case 2: return SPELL_ATTR8_UNK2;
        case 3: return SPELL_ATTR8_UNK3;
        case 4: return SPELL_ATTR8_UNK4;
        case 5: return SPELL_ATTR8_UNK5;
        case 6: return SPELL_ATTR8_UNK6;
        case 7: return SPELL_ATTR8_UNK7;
        case 8: return SPELL_ATTR8_AFFECT_PARTY_AND_RAID;
        case 9: return SPELL_ATTR8_DONT_RESET_PERIODIC_TIMER;
        case 10: return SPELL_ATTR8_NAME_CHANGED_DURING_TRANSFORM;
        case 11: return SPELL_ATTR8_UNK11;
        case 12: return SPELL_ATTR8_AURA_SEND_AMOUNT;
        case 13: return SPELL_ATTR8_UNK13;
        case 14: return SPELL_ATTR8_UNK14;
        case 15: return SPELL_ATTR8_WATER_MOUNT;
        case 16: return SPELL_ATTR8_UNK16;
        case 17: return SPELL_ATTR8_UNK17;
        case 18: return SPELL_ATTR8_REMEMBER_SPELLS;
        case 19: return SPELL_ATTR8_USE_COMBO_POINTS_ON_ANY_TARGET;
        case 20: return SPELL_ATTR8_ARMOR_SPECIALIZATION;
        case 21: return SPELL_ATTR8_UNK21;
        case 22: return SPELL_ATTR8_UNK22;
        case 23: return SPELL_ATTR8_BATTLE_RESURRECTION;
        case 24: return SPELL_ATTR8_HEALING_SPELL;
        case 25: return SPELL_ATTR8_UNK25;
        case 26: return SPELL_ATTR8_RAID_MARKER;
        case 27: return SPELL_ATTR8_UNK27;
        case 28: return SPELL_ATTR8_NOT_IN_BG_OR_ARENA;
        case 29: return SPELL_ATTR8_MASTERY_SPECIALIZATION;
        case 30: return SPELL_ATTR8_UNK30;
        case 31: return SPELL_ATTR8_ATTACK_IGNORE_IMMUNE_TO_PC_FLAG;
        default: throw std::out_of_range("index");
    }
}

/******************************************************************\
|* data for enum 'SpellAttr9' in 'SharedDefines.h' auto-generated *|
\******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr9>::ToString(SpellAttr9 value)
{
    switch (value)
    {
        case SPELL_ATTR9_UNK0: return { "SPELL_ATTR9_UNK0", "SPELL_ATTR9_UNK0", "0" };
        case SPELL_ATTR9_UNK1: return { "SPELL_ATTR9_UNK1", "SPELL_ATTR9_UNK1", "1" };
        case SPELL_ATTR9_RESTRICTED_FLIGHT_AREA: return { "SPELL_ATTR9_RESTRICTED_FLIGHT_AREA", "SPELL_ATTR9_RESTRICTED_FLIGHT_AREA", "2 Dalaran and Wintergrasp flight area auras have it" };
        case SPELL_ATTR9_UNK3: return { "SPELL_ATTR9_UNK3", "SPELL_ATTR9_UNK3", "3" };
        case SPELL_ATTR9_SPECIAL_DELAY_CALCULATION: return { "SPELL_ATTR9_SPECIAL_DELAY_CALCULATION", "SPELL_ATTR9_SPECIAL_DELAY_CALCULATION", "4" };
        case SPELL_ATTR9_SUMMON_PLAYER_TOTEM: return { "SPELL_ATTR9_SUMMON_PLAYER_TOTEM", "SPELL_ATTR9_SUMMON_PLAYER_TOTEM", "5" };
        case SPELL_ATTR9_UNK6: return { "SPELL_ATTR9_UNK6", "SPELL_ATTR9_UNK6", "6" };
        case SPELL_ATTR9_UNK7: return { "SPELL_ATTR9_UNK7", "SPELL_ATTR9_UNK7", "7" };
        case SPELL_ATTR9_AIMED_SHOT: return { "SPELL_ATTR9_AIMED_SHOT", "SPELL_ATTR9_AIMED_SHOT", "8" };
        case SPELL_ATTR9_NOT_USABLE_IN_ARENA: return { "SPELL_ATTR9_NOT_USABLE_IN_ARENA", "SPELL_ATTR9_NOT_USABLE_IN_ARENA", "9 Cannot be used in arenas" };
        case SPELL_ATTR9_UNK10: return { "SPELL_ATTR9_UNK10", "SPELL_ATTR9_UNK10", "10" };
        case SPELL_ATTR9_UNK11: return { "SPELL_ATTR9_UNK11", "SPELL_ATTR9_UNK11", "11" };
        case SPELL_ATTR9_UNK12: return { "SPELL_ATTR9_UNK12", "SPELL_ATTR9_UNK12", "12" };
        case SPELL_ATTR9_SLAM: return { "SPELL_ATTR9_SLAM", "SPELL_ATTR9_SLAM", "13" };
        case SPELL_ATTR9_USABLE_IN_RATED_BATTLEGROUNDS: return { "SPELL_ATTR9_USABLE_IN_RATED_BATTLEGROUNDS", "SPELL_ATTR9_USABLE_IN_RATED_BATTLEGROUNDS", "14 Can be used in Rated Battlegrounds" };
        case SPELL_ATTR9_UNK15: return { "SPELL_ATTR9_UNK15", "SPELL_ATTR9_UNK15", "15" };
        case SPELL_ATTR9_UNK16: return { "SPELL_ATTR9_UNK16", "SPELL_ATTR9_UNK16", "16" };
        case SPELL_ATTR9_UNK17: return { "SPELL_ATTR9_UNK17", "SPELL_ATTR9_UNK17", "17" };
        case SPELL_ATTR9_UNK18: return { "SPELL_ATTR9_UNK18", "SPELL_ATTR9_UNK18", "18" };
        case SPELL_ATTR9_UNK19: return { "SPELL_ATTR9_UNK19", "SPELL_ATTR9_UNK19", "19" };
        case SPELL_ATTR9_UNK20: return { "SPELL_ATTR9_UNK20", "SPELL_ATTR9_UNK20", "20" };
        case SPELL_ATTR9_UNK21: return { "SPELL_ATTR9_UNK21", "SPELL_ATTR9_UNK21", "21" };
        case SPELL_ATTR9_UNK22: return { "SPELL_ATTR9_UNK22", "SPELL_ATTR9_UNK22", "22" };
        case SPELL_ATTR9_UNK23: return { "SPELL_ATTR9_UNK23", "SPELL_ATTR9_UNK23", "23" };
        case SPELL_ATTR9_UNK24: return { "SPELL_ATTR9_UNK24", "SPELL_ATTR9_UNK24", "24" };
        case SPELL_ATTR9_UNK25: return { "SPELL_ATTR9_UNK25", "SPELL_ATTR9_UNK25", "25" };
        case SPELL_ATTR9_UNK26: return { "SPELL_ATTR9_UNK26", "SPELL_ATTR9_UNK26", "26" };
        case SPELL_ATTR9_UNK27: return { "SPELL_ATTR9_UNK27", "SPELL_ATTR9_UNK27", "27" };
        case SPELL_ATTR9_UNK28: return { "SPELL_ATTR9_UNK28", "SPELL_ATTR9_UNK28", "28" };
        case SPELL_ATTR9_UNK29: return { "SPELL_ATTR9_UNK29", "SPELL_ATTR9_UNK29", "29" };
        case SPELL_ATTR9_UNK30: return { "SPELL_ATTR9_UNK30", "SPELL_ATTR9_UNK30", "30" };
        case SPELL_ATTR9_UNK31: return { "SPELL_ATTR9_UNK31", "SPELL_ATTR9_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr9>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr9 EnumUtils<SpellAttr9>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR9_UNK0;
        case 1: return SPELL_ATTR9_UNK1;
        case 2: return SPELL_ATTR9_RESTRICTED_FLIGHT_AREA;
        case 3: return SPELL_ATTR9_UNK3;
        case 4: return SPELL_ATTR9_SPECIAL_DELAY_CALCULATION;
        case 5: return SPELL_ATTR9_SUMMON_PLAYER_TOTEM;
        case 6: return SPELL_ATTR9_UNK6;
        case 7: return SPELL_ATTR9_UNK7;
        case 8: return SPELL_ATTR9_AIMED_SHOT;
        case 9: return SPELL_ATTR9_NOT_USABLE_IN_ARENA;
        case 10: return SPELL_ATTR9_UNK10;
        case 11: return SPELL_ATTR9_UNK11;
        case 12: return SPELL_ATTR9_UNK12;
        case 13: return SPELL_ATTR9_SLAM;
        case 14: return SPELL_ATTR9_USABLE_IN_RATED_BATTLEGROUNDS;
        case 15: return SPELL_ATTR9_UNK15;
        case 16: return SPELL_ATTR9_UNK16;
        case 17: return SPELL_ATTR9_UNK17;
        case 18: return SPELL_ATTR9_UNK18;
        case 19: return SPELL_ATTR9_UNK19;
        case 20: return SPELL_ATTR9_UNK20;
        case 21: return SPELL_ATTR9_UNK21;
        case 22: return SPELL_ATTR9_UNK22;
        case 23: return SPELL_ATTR9_UNK23;
        case 24: return SPELL_ATTR9_UNK24;
        case 25: return SPELL_ATTR9_UNK25;
        case 26: return SPELL_ATTR9_UNK26;
        case 27: return SPELL_ATTR9_UNK27;
        case 28: return SPELL_ATTR9_UNK28;
        case 29: return SPELL_ATTR9_UNK29;
        case 30: return SPELL_ATTR9_UNK30;
        case 31: return SPELL_ATTR9_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*******************************************************************\
|* data for enum 'SpellAttr10' in 'SharedDefines.h' auto-generated *|
\*******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr10>::ToString(SpellAttr10 value)
{
    switch (value)
    {
        case SPELL_ATTR10_UNK0: return { "SPELL_ATTR10_UNK0", "SPELL_ATTR10_UNK0", "0" };
        case SPELL_ATTR10_UNK1: return { "SPELL_ATTR10_UNK1", "SPELL_ATTR10_UNK1", "1" };
        case SPELL_ATTR10_UNK2: return { "SPELL_ATTR10_UNK2", "SPELL_ATTR10_UNK2", "2" };
        case SPELL_ATTR10_UNK3: return { "SPELL_ATTR10_UNK3", "SPELL_ATTR10_UNK3", "3" };
        case SPELL_ATTR10_WATER_SPOUT: return { "SPELL_ATTR10_WATER_SPOUT", "SPELL_ATTR10_WATER_SPOUT", "4" };
        case SPELL_ATTR10_UNK5: return { "SPELL_ATTR10_UNK5", "SPELL_ATTR10_UNK5", "5" };
        case SPELL_ATTR10_UNK6: return { "SPELL_ATTR10_UNK6", "SPELL_ATTR10_UNK6", "6" };
        case SPELL_ATTR10_TELEPORT_PLAYER: return { "SPELL_ATTR10_TELEPORT_PLAYER", "SPELL_ATTR10_TELEPORT_PLAYER", "7 4 Teleport Player spells" };
        case SPELL_ATTR10_UNK8: return { "SPELL_ATTR10_UNK8", "SPELL_ATTR10_UNK8", "8" };
        case SPELL_ATTR10_UNK9: return { "SPELL_ATTR10_UNK9", "SPELL_ATTR10_UNK9", "9" };
        case SPELL_ATTR10_UNK10: return { "SPELL_ATTR10_UNK10", "SPELL_ATTR10_UNK10", "10" };
        case SPELL_ATTR10_HERB_GATHERING_MINING: return { "SPELL_ATTR10_HERB_GATHERING_MINING", "SPELL_ATTR10_HERB_GATHERING_MINING", "11 Only Herb Gathering and Mining" };
        case SPELL_ATTR10_USE_SPELL_BASE_LEVEL_FOR_SCALING: return { "SPELL_ATTR10_USE_SPELL_BASE_LEVEL_FOR_SCALING", "SPELL_ATTR10_USE_SPELL_BASE_LEVEL_FOR_SCALING", "12" };
        case SPELL_ATTR10_RESET_COOLDOWN_ON_ENCOUNTER_END: return { "SPELL_ATTR10_RESET_COOLDOWN_ON_ENCOUNTER_END", "SPELL_ATTR10_RESET_COOLDOWN_ON_ENCOUNTER_END", "13" };
        case SPELL_ATTR10_ROLLING_PERIODIC: return { "SPELL_ATTR10_ROLLING_PERIODIC", "SPELL_ATTR10_ROLLING_PERIODIC", "14 Add remaining periodic damage to new aura when refreshed" };
        case SPELL_ATTR10_UNK15: return { "SPELL_ATTR10_UNK15", "SPELL_ATTR10_UNK15", "15" };
        case SPELL_ATTR10_UNK16: return { "SPELL_ATTR10_UNK16", "SPELL_ATTR10_UNK16", "16" };
        case SPELL_ATTR10_CAN_DODGE_PARRY_WHILE_CASTING: return { "SPELL_ATTR10_CAN_DODGE_PARRY_WHILE_CASTING", "SPELL_ATTR10_CAN_DODGE_PARRY_WHILE_CASTING", "17" };
        case SPELL_ATTR10_UNK18: return { "SPELL_ATTR10_UNK18", "SPELL_ATTR10_UNK18", "18" };
        case SPELL_ATTR10_UNK19: return { "SPELL_ATTR10_UNK19", "SPELL_ATTR10_UNK19", "19" };
        case SPELL_ATTR10_UNK20: return { "SPELL_ATTR10_UNK20", "SPELL_ATTR10_UNK20", "20" };
        case SPELL_ATTR10_UNK21: return { "SPELL_ATTR10_UNK21", "SPELL_ATTR10_UNK21", "21" };
        case SPELL_ATTR10_UNK22: return { "SPELL_ATTR10_UNK22", "SPELL_ATTR10_UNK22", "22" };
        case SPELL_ATTR10_UNK23: return { "SPELL_ATTR10_UNK23", "SPELL_ATTR10_UNK23", "23" };
        case SPELL_ATTR10_UNK24: return { "SPELL_ATTR10_UNK24", "SPELL_ATTR10_UNK24", "24" };
        case SPELL_ATTR10_UNK25: return { "SPELL_ATTR10_UNK25", "SPELL_ATTR10_UNK25", "25" };
        case SPELL_ATTR10_UNK26: return { "SPELL_ATTR10_UNK26", "SPELL_ATTR10_UNK26", "26" };
        case SPELL_ATTR10_UNK27: return { "SPELL_ATTR10_UNK27", "SPELL_ATTR10_UNK27", "27" };
        case SPELL_ATTR10_UNK28: return { "SPELL_ATTR10_UNK28", "SPELL_ATTR10_UNK28", "28" };
        case SPELL_ATTR10_MOUNT_IS_NOT_ACCOUNT_WIDE: return { "SPELL_ATTR10_MOUNT_IS_NOT_ACCOUNT_WIDE", "SPELL_ATTR10_MOUNT_IS_NOT_ACCOUNT_WIDE", "29 This mount is stored per-character" };
        case SPELL_ATTR10_UNK30: return { "SPELL_ATTR10_UNK30", "SPELL_ATTR10_UNK30", "30" };
        case SPELL_ATTR10_UNK31: return { "SPELL_ATTR10_UNK31", "SPELL_ATTR10_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr10>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr10 EnumUtils<SpellAttr10>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR10_UNK0;
        case 1: return SPELL_ATTR10_UNK1;
        case 2: return SPELL_ATTR10_UNK2;
        case 3: return SPELL_ATTR10_UNK3;
        case 4: return SPELL_ATTR10_WATER_SPOUT;
        case 5: return SPELL_ATTR10_UNK5;
        case 6: return SPELL_ATTR10_UNK6;
        case 7: return SPELL_ATTR10_TELEPORT_PLAYER;
        case 8: return SPELL_ATTR10_UNK8;
        case 9: return SPELL_ATTR10_UNK9;
        case 10: return SPELL_ATTR10_UNK10;
        case 11: return SPELL_ATTR10_HERB_GATHERING_MINING;
        case 12: return SPELL_ATTR10_USE_SPELL_BASE_LEVEL_FOR_SCALING;
        case 13: return SPELL_ATTR10_RESET_COOLDOWN_ON_ENCOUNTER_END;
        case 14: return SPELL_ATTR10_ROLLING_PERIODIC;
        case 15: return SPELL_ATTR10_UNK15;
        case 16: return SPELL_ATTR10_UNK16;
        case 17: return SPELL_ATTR10_CAN_DODGE_PARRY_WHILE_CASTING;
        case 18: return SPELL_ATTR10_UNK18;
        case 19: return SPELL_ATTR10_UNK19;
        case 20: return SPELL_ATTR10_UNK20;
        case 21: return SPELL_ATTR10_UNK21;
        case 22: return SPELL_ATTR10_UNK22;
        case 23: return SPELL_ATTR10_UNK23;
        case 24: return SPELL_ATTR10_UNK24;
        case 25: return SPELL_ATTR10_UNK25;
        case 26: return SPELL_ATTR10_UNK26;
        case 27: return SPELL_ATTR10_UNK27;
        case 28: return SPELL_ATTR10_UNK28;
        case 29: return SPELL_ATTR10_MOUNT_IS_NOT_ACCOUNT_WIDE;
        case 30: return SPELL_ATTR10_UNK30;
        case 31: return SPELL_ATTR10_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*******************************************************************\
|* data for enum 'SpellAttr11' in 'SharedDefines.h' auto-generated *|
\*******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr11>::ToString(SpellAttr11 value)
{
    switch (value)
    {
        case SPELL_ATTR11_UNK0: return { "SPELL_ATTR11_UNK0", "SPELL_ATTR11_UNK0", "0" };
        case SPELL_ATTR11_UNK1: return { "SPELL_ATTR11_UNK1", "SPELL_ATTR11_UNK1", "1" };
        case SPELL_ATTR11_SCALES_WITH_ITEM_LEVEL: return { "SPELL_ATTR11_SCALES_WITH_ITEM_LEVEL", "SPELL_ATTR11_SCALES_WITH_ITEM_LEVEL", "2" };
        case SPELL_ATTR11_UNK3: return { "SPELL_ATTR11_UNK3", "SPELL_ATTR11_UNK3", "3" };
        case SPELL_ATTR11_UNK4: return { "SPELL_ATTR11_UNK4", "SPELL_ATTR11_UNK4", "4" };
        case SPELL_ATTR11_ABSORB_ENVIRONMENTAL_DAMAGE: return { "SPELL_ATTR11_ABSORB_ENVIRONMENTAL_DAMAGE", "SPELL_ATTR11_ABSORB_ENVIRONMENTAL_DAMAGE", "5" };
        case SPELL_ATTR11_UNK6: return { "SPELL_ATTR11_UNK6", "SPELL_ATTR11_UNK6", "6" };
        case SPELL_ATTR11_RANK_IGNORES_CASTER_LEVEL: return { "SPELL_ATTR11_RANK_IGNORES_CASTER_LEVEL", "SPELL_ATTR11_RANK_IGNORES_CASTER_LEVEL", "7 Spell_C_GetSpellRank returns SpellLevels->MaxLevel * 5 instead of std::min(SpellLevels->MaxLevel, caster->Level) * 5" };
        case SPELL_ATTR11_UNK8: return { "SPELL_ATTR11_UNK8", "SPELL_ATTR11_UNK8", "8" };
        case SPELL_ATTR11_UNK9: return { "SPELL_ATTR11_UNK9", "SPELL_ATTR11_UNK9", "9" };
        case SPELL_ATTR11_UNK10: return { "SPELL_ATTR11_UNK10", "SPELL_ATTR11_UNK10", "10" };
        case SPELL_ATTR11_NOT_USABLE_IN_INSTANCES: return { "SPELL_ATTR11_NOT_USABLE_IN_INSTANCES", "SPELL_ATTR11_NOT_USABLE_IN_INSTANCES", "11" };
        case SPELL_ATTR11_UNK12: return { "SPELL_ATTR11_UNK12", "SPELL_ATTR11_UNK12", "12" };
        case SPELL_ATTR11_UNK13: return { "SPELL_ATTR11_UNK13", "SPELL_ATTR11_UNK13", "13" };
        case SPELL_ATTR11_UNK14: return { "SPELL_ATTR11_UNK14", "SPELL_ATTR11_UNK14", "14" };
        case SPELL_ATTR11_UNK15: return { "SPELL_ATTR11_UNK15", "SPELL_ATTR11_UNK15", "15" };
        case SPELL_ATTR11_NOT_USABLE_IN_CHALLENGE_MODE: return { "SPELL_ATTR11_NOT_USABLE_IN_CHALLENGE_MODE", "SPELL_ATTR11_NOT_USABLE_IN_CHALLENGE_MODE", "16" };
        case SPELL_ATTR11_UNK17: return { "SPELL_ATTR11_UNK17", "SPELL_ATTR11_UNK17", "17" };
        case SPELL_ATTR11_UNK18: return { "SPELL_ATTR11_UNK18", "SPELL_ATTR11_UNK18", "18" };
        case SPELL_ATTR11_UNK19: return { "SPELL_ATTR11_UNK19", "SPELL_ATTR11_UNK19", "19" };
        case SPELL_ATTR11_UNK20: return { "SPELL_ATTR11_UNK20", "SPELL_ATTR11_UNK20", "20" };
        case SPELL_ATTR11_UNK21: return { "SPELL_ATTR11_UNK21", "SPELL_ATTR11_UNK21", "21" };
        case SPELL_ATTR11_UNK22: return { "SPELL_ATTR11_UNK22", "SPELL_ATTR11_UNK22", "22" };
        case SPELL_ATTR11_UNK23: return { "SPELL_ATTR11_UNK23", "SPELL_ATTR11_UNK23", "23" };
        case SPELL_ATTR11_UNK24: return { "SPELL_ATTR11_UNK24", "SPELL_ATTR11_UNK24", "24" };
        case SPELL_ATTR11_UNK25: return { "SPELL_ATTR11_UNK25", "SPELL_ATTR11_UNK25", "25" };
        case SPELL_ATTR11_UNK26: return { "SPELL_ATTR11_UNK26", "SPELL_ATTR11_UNK26", "26" };
        case SPELL_ATTR11_UNK27: return { "SPELL_ATTR11_UNK27", "SPELL_ATTR11_UNK27", "27" };
        case SPELL_ATTR11_UNK28: return { "SPELL_ATTR11_UNK28", "SPELL_ATTR11_UNK28", "28" };
        case SPELL_ATTR11_UNK29: return { "SPELL_ATTR11_UNK29", "SPELL_ATTR11_UNK29", "29" };
        case SPELL_ATTR11_UNK30: return { "SPELL_ATTR11_UNK30", "SPELL_ATTR11_UNK30", "30" };
        case SPELL_ATTR11_UNK31: return { "SPELL_ATTR11_UNK31", "SPELL_ATTR11_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr11>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr11 EnumUtils<SpellAttr11>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR11_UNK0;
        case 1: return SPELL_ATTR11_UNK1;
        case 2: return SPELL_ATTR11_SCALES_WITH_ITEM_LEVEL;
        case 3: return SPELL_ATTR11_UNK3;
        case 4: return SPELL_ATTR11_UNK4;
        case 5: return SPELL_ATTR11_ABSORB_ENVIRONMENTAL_DAMAGE;
        case 6: return SPELL_ATTR11_UNK6;
        case 7: return SPELL_ATTR11_RANK_IGNORES_CASTER_LEVEL;
        case 8: return SPELL_ATTR11_UNK8;
        case 9: return SPELL_ATTR11_UNK9;
        case 10: return SPELL_ATTR11_UNK10;
        case 11: return SPELL_ATTR11_NOT_USABLE_IN_INSTANCES;
        case 12: return SPELL_ATTR11_UNK12;
        case 13: return SPELL_ATTR11_UNK13;
        case 14: return SPELL_ATTR11_UNK14;
        case 15: return SPELL_ATTR11_UNK15;
        case 16: return SPELL_ATTR11_NOT_USABLE_IN_CHALLENGE_MODE;
        case 17: return SPELL_ATTR11_UNK17;
        case 18: return SPELL_ATTR11_UNK18;
        case 19: return SPELL_ATTR11_UNK19;
        case 20: return SPELL_ATTR11_UNK20;
        case 21: return SPELL_ATTR11_UNK21;
        case 22: return SPELL_ATTR11_UNK22;
        case 23: return SPELL_ATTR11_UNK23;
        case 24: return SPELL_ATTR11_UNK24;
        case 25: return SPELL_ATTR11_UNK25;
        case 26: return SPELL_ATTR11_UNK26;
        case 27: return SPELL_ATTR11_UNK27;
        case 28: return SPELL_ATTR11_UNK28;
        case 29: return SPELL_ATTR11_UNK29;
        case 30: return SPELL_ATTR11_UNK30;
        case 31: return SPELL_ATTR11_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*******************************************************************\
|* data for enum 'SpellAttr12' in 'SharedDefines.h' auto-generated *|
\*******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr12>::ToString(SpellAttr12 value)
{
    switch (value)
    {
        case SPELL_ATTR12_UNK0: return { "SPELL_ATTR12_UNK0", "SPELL_ATTR12_UNK0", "0" };
        case SPELL_ATTR12_UNK1: return { "SPELL_ATTR12_UNK1", "SPELL_ATTR12_UNK1", "1" };
        case SPELL_ATTR12_UNK2: return { "SPELL_ATTR12_UNK2", "SPELL_ATTR12_UNK2", "2" };
        case SPELL_ATTR12_UNK3: return { "SPELL_ATTR12_UNK3", "SPELL_ATTR12_UNK3", "3" };
        case SPELL_ATTR12_UNK4: return { "SPELL_ATTR12_UNK4", "SPELL_ATTR12_UNK4", "4" };
        case SPELL_ATTR12_UNK5: return { "SPELL_ATTR12_UNK5", "SPELL_ATTR12_UNK5", "5" };
        case SPELL_ATTR12_UNK6: return { "SPELL_ATTR12_UNK6", "SPELL_ATTR12_UNK6", "6" };
        case SPELL_ATTR12_UNK7: return { "SPELL_ATTR12_UNK7", "SPELL_ATTR12_UNK7", "7" };
        case SPELL_ATTR12_UNK8: return { "SPELL_ATTR12_UNK8", "SPELL_ATTR12_UNK8", "8" };
        case SPELL_ATTR12_IGNORE_CASTING_DISABLED: return { "SPELL_ATTR12_IGNORE_CASTING_DISABLED", "SPELL_ATTR12_IGNORE_CASTING_DISABLED", "9 Ignores aura 263 SPELL_AURA_DISABLE_CASTING_EXCEPT_ABILITIES" };
        case SPELL_ATTR12_UNK10: return { "SPELL_ATTR12_UNK10", "SPELL_ATTR12_UNK10", "10" };
        case SPELL_ATTR12_UNK11: return { "SPELL_ATTR12_UNK11", "SPELL_ATTR12_UNK11", "11" };
        case SPELL_ATTR12_UNK12: return { "SPELL_ATTR12_UNK12", "SPELL_ATTR12_UNK12", "12" };
        case SPELL_ATTR12_UNK13: return { "SPELL_ATTR12_UNK13", "SPELL_ATTR12_UNK13", "13" };
        case SPELL_ATTR12_UNK14: return { "SPELL_ATTR12_UNK14", "SPELL_ATTR12_UNK14", "14" };
        case SPELL_ATTR12_UNK15: return { "SPELL_ATTR12_UNK15", "SPELL_ATTR12_UNK15", "15" };
        case SPELL_ATTR12_UNK16: return { "SPELL_ATTR12_UNK16", "SPELL_ATTR12_UNK16", "16" };
        case SPELL_ATTR12_UNK17: return { "SPELL_ATTR12_UNK17", "SPELL_ATTR12_UNK17", "17" };
        case SPELL_ATTR12_UNK18: return { "SPELL_ATTR12_UNK18", "SPELL_ATTR12_UNK18", "18" };
        case SPELL_ATTR12_UNK19: return { "SPELL_ATTR12_UNK19", "SPELL_ATTR12_UNK19", "19" };
        case SPELL_ATTR12_UNK20: return { "SPELL_ATTR12_UNK20", "SPELL_ATTR12_UNK20", "20" };
        case SPELL_ATTR12_UNK21: return { "SPELL_ATTR12_UNK21", "SPELL_ATTR12_UNK21", "21" };
        case SPELL_ATTR12_UNK22: return { "SPELL_ATTR12_UNK22", "SPELL_ATTR12_UNK22", "22" };
        case SPELL_ATTR12_START_COOLDOWN_ON_CAST_START: return { "SPELL_ATTR12_START_COOLDOWN_ON_CAST_START", "SPELL_ATTR12_START_COOLDOWN_ON_CAST_START", "23" };
        case SPELL_ATTR12_IS_GARRISON_BUFF: return { "SPELL_ATTR12_IS_GARRISON_BUFF", "SPELL_ATTR12_IS_GARRISON_BUFF", "24" };
        case SPELL_ATTR12_UNK25: return { "SPELL_ATTR12_UNK25", "SPELL_ATTR12_UNK25", "25" };
        case SPELL_ATTR12_UNK26: return { "SPELL_ATTR12_UNK26", "SPELL_ATTR12_UNK26", "26" };
        case SPELL_ATTR12_IS_READINESS_SPELL: return { "SPELL_ATTR12_IS_READINESS_SPELL", "SPELL_ATTR12_IS_READINESS_SPELL", "27" };
        case SPELL_ATTR12_UNK28: return { "SPELL_ATTR12_UNK28", "SPELL_ATTR12_UNK28", "28" };
        case SPELL_ATTR12_UNK29: return { "SPELL_ATTR12_UNK29", "SPELL_ATTR12_UNK29", "29" };
        case SPELL_ATTR12_UNK30: return { "SPELL_ATTR12_UNK30", "SPELL_ATTR12_UNK30", "30" };
        case SPELL_ATTR12_UNK31: return { "SPELL_ATTR12_UNK31", "SPELL_ATTR12_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr12>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr12 EnumUtils<SpellAttr12>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR12_UNK0;
        case 1: return SPELL_ATTR12_UNK1;
        case 2: return SPELL_ATTR12_UNK2;
        case 3: return SPELL_ATTR12_UNK3;
        case 4: return SPELL_ATTR12_UNK4;
        case 5: return SPELL_ATTR12_UNK5;
        case 6: return SPELL_ATTR12_UNK6;
        case 7: return SPELL_ATTR12_UNK7;
        case 8: return SPELL_ATTR12_UNK8;
        case 9: return SPELL_ATTR12_IGNORE_CASTING_DISABLED;
        case 10: return SPELL_ATTR12_UNK10;
        case 11: return SPELL_ATTR12_UNK11;
        case 12: return SPELL_ATTR12_UNK12;
        case 13: return SPELL_ATTR12_UNK13;
        case 14: return SPELL_ATTR12_UNK14;
        case 15: return SPELL_ATTR12_UNK15;
        case 16: return SPELL_ATTR12_UNK16;
        case 17: return SPELL_ATTR12_UNK17;
        case 18: return SPELL_ATTR12_UNK18;
        case 19: return SPELL_ATTR12_UNK19;
        case 20: return SPELL_ATTR12_UNK20;
        case 21: return SPELL_ATTR12_UNK21;
        case 22: return SPELL_ATTR12_UNK22;
        case 23: return SPELL_ATTR12_START_COOLDOWN_ON_CAST_START;
        case 24: return SPELL_ATTR12_IS_GARRISON_BUFF;
        case 25: return SPELL_ATTR12_UNK25;
        case 26: return SPELL_ATTR12_UNK26;
        case 27: return SPELL_ATTR12_IS_READINESS_SPELL;
        case 28: return SPELL_ATTR12_UNK28;
        case 29: return SPELL_ATTR12_UNK29;
        case 30: return SPELL_ATTR12_UNK30;
        case 31: return SPELL_ATTR12_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*******************************************************************\
|* data for enum 'SpellAttr13' in 'SharedDefines.h' auto-generated *|
\*******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr13>::ToString(SpellAttr13 value)
{
    switch (value)
    {
        case SPELL_ATTR13_UNK0: return { "SPELL_ATTR13_UNK0", "SPELL_ATTR13_UNK0", "0" };
        case SPELL_ATTR13_UNK1: return { "SPELL_ATTR13_UNK1", "SPELL_ATTR13_UNK1", "1" };
        case SPELL_ATTR13_PASSIVE_IS_UPGRADE: return { "SPELL_ATTR13_PASSIVE_IS_UPGRADE", "SPELL_ATTR13_PASSIVE_IS_UPGRADE", "2 Displays \042Upgrade\042 in spell tooltip instead of \042Passive\042" };
        case SPELL_ATTR13_UNK3: return { "SPELL_ATTR13_UNK3", "SPELL_ATTR13_UNK3", "3" };
        case SPELL_ATTR13_UNK4: return { "SPELL_ATTR13_UNK4", "SPELL_ATTR13_UNK4", "4" };
        case SPELL_ATTR13_UNK5: return { "SPELL_ATTR13_UNK5", "SPELL_ATTR13_UNK5", "5" };
        case SPELL_ATTR13_UNK6: return { "SPELL_ATTR13_UNK6", "SPELL_ATTR13_UNK6", "6" };
        case SPELL_ATTR13_UNK7: return { "SPELL_ATTR13_UNK7", "SPELL_ATTR13_UNK7", "7" };
        case SPELL_ATTR13_UNK8: return { "SPELL_ATTR13_UNK8", "SPELL_ATTR13_UNK8", "8" };
        case SPELL_ATTR13_UNK9: return { "SPELL_ATTR13_UNK9", "SPELL_ATTR13_UNK9", "9" };
        case SPELL_ATTR13_UNK10: return { "SPELL_ATTR13_UNK10", "SPELL_ATTR13_UNK10", "10" };
        case SPELL_ATTR13_UNK11: return { "SPELL_ATTR13_UNK11", "SPELL_ATTR13_UNK11", "11" };
        case SPELL_ATTR13_UNK12: return { "SPELL_ATTR13_UNK12", "SPELL_ATTR13_UNK12", "12" };
        case SPELL_ATTR13_UNK13: return { "SPELL_ATTR13_UNK13", "SPELL_ATTR13_UNK13", "13" };
        case SPELL_ATTR13_UNK14: return { "SPELL_ATTR13_UNK14", "SPELL_ATTR13_UNK14", "14" };
        case SPELL_ATTR13_UNK15: return { "SPELL_ATTR13_UNK15", "SPELL_ATTR13_UNK15", "15" };
        case SPELL_ATTR13_UNK16: return { "SPELL_ATTR13_UNK16", "SPELL_ATTR13_UNK16", "16" };
        case SPELL_ATTR13_UNK17: return { "SPELL_ATTR13_UNK17", "SPELL_ATTR13_UNK17", "17" };
        case SPELL_ATTR13_ACTIVATES_REQUIRED_SHAPESHIFT: return { "SPELL_ATTR13_ACTIVATES_REQUIRED_SHAPESHIFT", "SPELL_ATTR13_ACTIVATES_REQUIRED_SHAPESHIFT", "18" };
        case SPELL_ATTR13_UNK19: return { "SPELL_ATTR13_UNK19", "SPELL_ATTR13_UNK19", "19" };
        case SPELL_ATTR13_UNK20: return { "SPELL_ATTR13_UNK20", "SPELL_ATTR13_UNK20", "20" };
        case SPELL_ATTR13_UNK21: return { "SPELL_ATTR13_UNK21", "SPELL_ATTR13_UNK21", "21" };
        case SPELL_ATTR13_UNK22: return { "SPELL_ATTR13_UNK22", "SPELL_ATTR13_UNK22", "22" };
        case SPELL_ATTR13_UNK23: return { "SPELL_ATTR13_UNK23", "SPELL_ATTR13_UNK23", "23" };
        case SPELL_ATTR13_UNK24: return { "SPELL_ATTR13_UNK24", "SPELL_ATTR13_UNK24", "24" };
        case SPELL_ATTR13_UNK25: return { "SPELL_ATTR13_UNK25", "SPELL_ATTR13_UNK25", "25" };
        case SPELL_ATTR13_UNK26: return { "SPELL_ATTR13_UNK26", "SPELL_ATTR13_UNK26", "26" };
        case SPELL_ATTR13_UNK27: return { "SPELL_ATTR13_UNK27", "SPELL_ATTR13_UNK27", "27" };
        case SPELL_ATTR13_UNK28: return { "SPELL_ATTR13_UNK28", "SPELL_ATTR13_UNK28", "28" };
        case SPELL_ATTR13_UNK29: return { "SPELL_ATTR13_UNK29", "SPELL_ATTR13_UNK29", "29" };
        case SPELL_ATTR13_UNK30: return { "SPELL_ATTR13_UNK30", "SPELL_ATTR13_UNK30", "30" };
        case SPELL_ATTR13_UNK31: return { "SPELL_ATTR13_UNK31", "SPELL_ATTR13_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr13>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr13 EnumUtils<SpellAttr13>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR13_UNK0;
        case 1: return SPELL_ATTR13_UNK1;
        case 2: return SPELL_ATTR13_PASSIVE_IS_UPGRADE;
        case 3: return SPELL_ATTR13_UNK3;
        case 4: return SPELL_ATTR13_UNK4;
        case 5: return SPELL_ATTR13_UNK5;
        case 6: return SPELL_ATTR13_UNK6;
        case 7: return SPELL_ATTR13_UNK7;
        case 8: return SPELL_ATTR13_UNK8;
        case 9: return SPELL_ATTR13_UNK9;
        case 10: return SPELL_ATTR13_UNK10;
        case 11: return SPELL_ATTR13_UNK11;
        case 12: return SPELL_ATTR13_UNK12;
        case 13: return SPELL_ATTR13_UNK13;
        case 14: return SPELL_ATTR13_UNK14;
        case 15: return SPELL_ATTR13_UNK15;
        case 16: return SPELL_ATTR13_UNK16;
        case 17: return SPELL_ATTR13_UNK17;
        case 18: return SPELL_ATTR13_ACTIVATES_REQUIRED_SHAPESHIFT;
        case 19: return SPELL_ATTR13_UNK19;
        case 20: return SPELL_ATTR13_UNK20;
        case 21: return SPELL_ATTR13_UNK21;
        case 22: return SPELL_ATTR13_UNK22;
        case 23: return SPELL_ATTR13_UNK23;
        case 24: return SPELL_ATTR13_UNK24;
        case 25: return SPELL_ATTR13_UNK25;
        case 26: return SPELL_ATTR13_UNK26;
        case 27: return SPELL_ATTR13_UNK27;
        case 28: return SPELL_ATTR13_UNK28;
        case 29: return SPELL_ATTR13_UNK29;
        case 30: return SPELL_ATTR13_UNK30;
        case 31: return SPELL_ATTR13_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*******************************************************************\
|* data for enum 'SpellAttr14' in 'SharedDefines.h' auto-generated *|
\*******************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellAttr14>::ToString(SpellAttr14 value)
{
    switch (value)
    {
        case SPELL_ATTR14_UNK0: return { "SPELL_ATTR14_UNK0", "SPELL_ATTR14_UNK0", "0" };
        case SPELL_ATTR14_REAGENT_COST_CONSUMES_CHARGES: return { "SPELL_ATTR14_REAGENT_COST_CONSUMES_CHARGES", "SPELL_ATTR14_REAGENT_COST_CONSUMES_CHARGES", "1 Consumes item charges for reagent costs instead of whole items" };
        case SPELL_ATTR14_UNK2: return { "SPELL_ATTR14_UNK2", "SPELL_ATTR14_UNK2", "2" };
        case SPELL_ATTR14_HIDE_PASSIVE_FROM_TOOLTIP: return { "SPELL_ATTR14_HIDE_PASSIVE_FROM_TOOLTIP", "SPELL_ATTR14_HIDE_PASSIVE_FROM_TOOLTIP", "3 Don't show \042Passive\042 or \042Upgrade\042 in tooltip" };
        case SPELL_ATTR14_UNK4: return { "SPELL_ATTR14_UNK4", "SPELL_ATTR14_UNK4", "4" };
        case SPELL_ATTR14_UNK5: return { "SPELL_ATTR14_UNK5", "SPELL_ATTR14_UNK5", "5" };
        case SPELL_ATTR14_UNK6: return { "SPELL_ATTR14_UNK6", "SPELL_ATTR14_UNK6", "6" };
        case SPELL_ATTR14_UNK7: return { "SPELL_ATTR14_UNK7", "SPELL_ATTR14_UNK7", "7" };
        case SPELL_ATTR14_UNK8: return { "SPELL_ATTR14_UNK8", "SPELL_ATTR14_UNK8", "8" };
        case SPELL_ATTR14_UNK9: return { "SPELL_ATTR14_UNK9", "SPELL_ATTR14_UNK9", "9" };
        case SPELL_ATTR14_UNK10: return { "SPELL_ATTR14_UNK10", "SPELL_ATTR14_UNK10", "10" };
        case SPELL_ATTR14_UNK11: return { "SPELL_ATTR14_UNK11", "SPELL_ATTR14_UNK11", "11" };
        case SPELL_ATTR14_UNK12: return { "SPELL_ATTR14_UNK12", "SPELL_ATTR14_UNK12", "12" };
        case SPELL_ATTR14_UNK13: return { "SPELL_ATTR14_UNK13", "SPELL_ATTR14_UNK13", "13" };
        case SPELL_ATTR14_UNK14: return { "SPELL_ATTR14_UNK14", "SPELL_ATTR14_UNK14", "14" };
        case SPELL_ATTR14_UNK15: return { "SPELL_ATTR14_UNK15", "SPELL_ATTR14_UNK15", "15" };
        case SPELL_ATTR14_UNK16: return { "SPELL_ATTR14_UNK16", "SPELL_ATTR14_UNK16", "16" };
        case SPELL_ATTR14_UNK17: return { "SPELL_ATTR14_UNK17", "SPELL_ATTR14_UNK17", "17" };
        case SPELL_ATTR14_UNK18: return { "SPELL_ATTR14_UNK18", "SPELL_ATTR14_UNK18", "18" };
        case SPELL_ATTR14_UNK19: return { "SPELL_ATTR14_UNK19", "SPELL_ATTR14_UNK19", "19" };
        case SPELL_ATTR14_UNK20: return { "SPELL_ATTR14_UNK20", "SPELL_ATTR14_UNK20", "20" };
        case SPELL_ATTR14_UNK21: return { "SPELL_ATTR14_UNK21", "SPELL_ATTR14_UNK21", "21" };
        case SPELL_ATTR14_UNK22: return { "SPELL_ATTR14_UNK22", "SPELL_ATTR14_UNK22", "22" };
        case SPELL_ATTR14_UNK23: return { "SPELL_ATTR14_UNK23", "SPELL_ATTR14_UNK23", "23" };
        case SPELL_ATTR14_UNK24: return { "SPELL_ATTR14_UNK24", "SPELL_ATTR14_UNK24", "24" };
        case SPELL_ATTR14_UNK25: return { "SPELL_ATTR14_UNK25", "SPELL_ATTR14_UNK25", "25" };
        case SPELL_ATTR14_UNK26: return { "SPELL_ATTR14_UNK26", "SPELL_ATTR14_UNK26", "26" };
        case SPELL_ATTR14_UNK27: return { "SPELL_ATTR14_UNK27", "SPELL_ATTR14_UNK27", "27" };
        case SPELL_ATTR14_UNK28: return { "SPELL_ATTR14_UNK28", "SPELL_ATTR14_UNK28", "28" };
        case SPELL_ATTR14_UNK29: return { "SPELL_ATTR14_UNK29", "SPELL_ATTR14_UNK29", "29" };
        case SPELL_ATTR14_UNK30: return { "SPELL_ATTR14_UNK30", "SPELL_ATTR14_UNK30", "30" };
        case SPELL_ATTR14_UNK31: return { "SPELL_ATTR14_UNK31", "SPELL_ATTR14_UNK31", "31" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellAttr14>::Count() { return 32; }

template <>
TC_API_EXPORT SpellAttr14 EnumUtils<SpellAttr14>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_ATTR14_UNK0;
        case 1: return SPELL_ATTR14_REAGENT_COST_CONSUMES_CHARGES;
        case 2: return SPELL_ATTR14_UNK2;
        case 3: return SPELL_ATTR14_HIDE_PASSIVE_FROM_TOOLTIP;
        case 4: return SPELL_ATTR14_UNK4;
        case 5: return SPELL_ATTR14_UNK5;
        case 6: return SPELL_ATTR14_UNK6;
        case 7: return SPELL_ATTR14_UNK7;
        case 8: return SPELL_ATTR14_UNK8;
        case 9: return SPELL_ATTR14_UNK9;
        case 10: return SPELL_ATTR14_UNK10;
        case 11: return SPELL_ATTR14_UNK11;
        case 12: return SPELL_ATTR14_UNK12;
        case 13: return SPELL_ATTR14_UNK13;
        case 14: return SPELL_ATTR14_UNK14;
        case 15: return SPELL_ATTR14_UNK15;
        case 16: return SPELL_ATTR14_UNK16;
        case 17: return SPELL_ATTR14_UNK17;
        case 18: return SPELL_ATTR14_UNK18;
        case 19: return SPELL_ATTR14_UNK19;
        case 20: return SPELL_ATTR14_UNK20;
        case 21: return SPELL_ATTR14_UNK21;
        case 22: return SPELL_ATTR14_UNK22;
        case 23: return SPELL_ATTR14_UNK23;
        case 24: return SPELL_ATTR14_UNK24;
        case 25: return SPELL_ATTR14_UNK25;
        case 26: return SPELL_ATTR14_UNK26;
        case 27: return SPELL_ATTR14_UNK27;
        case 28: return SPELL_ATTR14_UNK28;
        case 29: return SPELL_ATTR14_UNK29;
        case 30: return SPELL_ATTR14_UNK30;
        case 31: return SPELL_ATTR14_UNK31;
        default: throw std::out_of_range("index");
    }
}

/*****************************************************************\
|* data for enum 'Mechanics' in 'SharedDefines.h' auto-generated *|
\*****************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<Mechanics>::ToString(Mechanics value)
{
    switch (value)
    {
        case MECHANIC_NONE: return { "MECHANIC_NONE", "MECHANIC_NONE", "" };
        case MECHANIC_CHARM: return { "MECHANIC_CHARM", "MECHANIC_CHARM", "" };
        case MECHANIC_DISORIENTED: return { "MECHANIC_DISORIENTED", "MECHANIC_DISORIENTED", "" };
        case MECHANIC_DISARM: return { "MECHANIC_DISARM", "MECHANIC_DISARM", "" };
        case MECHANIC_DISTRACT: return { "MECHANIC_DISTRACT", "MECHANIC_DISTRACT", "" };
        case MECHANIC_FEAR: return { "MECHANIC_FEAR", "MECHANIC_FEAR", "" };
        case MECHANIC_GRIP: return { "MECHANIC_GRIP", "MECHANIC_GRIP", "" };
        case MECHANIC_ROOT: return { "MECHANIC_ROOT", "MECHANIC_ROOT", "" };
        case MECHANIC_SLOW_ATTACK: return { "MECHANIC_SLOW_ATTACK", "MECHANIC_SLOW_ATTACK", "" };
        case MECHANIC_SILENCE: return { "MECHANIC_SILENCE", "MECHANIC_SILENCE", "" };
        case MECHANIC_SLEEP: return { "MECHANIC_SLEEP", "MECHANIC_SLEEP", "" };
        case MECHANIC_SNARE: return { "MECHANIC_SNARE", "MECHANIC_SNARE", "" };
        case MECHANIC_STUN: return { "MECHANIC_STUN", "MECHANIC_STUN", "" };
        case MECHANIC_FREEZE: return { "MECHANIC_FREEZE", "MECHANIC_FREEZE", "" };
        case MECHANIC_KNOCKOUT: return { "MECHANIC_KNOCKOUT", "MECHANIC_KNOCKOUT", "" };
        case MECHANIC_BLEED: return { "MECHANIC_BLEED", "MECHANIC_BLEED", "" };
        case MECHANIC_BANDAGE: return { "MECHANIC_BANDAGE", "MECHANIC_BANDAGE", "" };
        case MECHANIC_POLYMORPH: return { "MECHANIC_POLYMORPH", "MECHANIC_POLYMORPH", "" };
        case MECHANIC_BANISH: return { "MECHANIC_BANISH", "MECHANIC_BANISH", "" };
        case MECHANIC_SHIELD: return { "MECHANIC_SHIELD", "MECHANIC_SHIELD", "" };
        case MECHANIC_SHACKLE: return { "MECHANIC_SHACKLE", "MECHANIC_SHACKLE", "" };
        case MECHANIC_MOUNT: return { "MECHANIC_MOUNT", "MECHANIC_MOUNT", "" };
        case MECHANIC_INFECTED: return { "MECHANIC_INFECTED", "MECHANIC_INFECTED", "" };
        case MECHANIC_TURN: return { "MECHANIC_TURN", "MECHANIC_TURN", "" };
        case MECHANIC_HORROR: return { "MECHANIC_HORROR", "MECHANIC_HORROR", "" };
        case MECHANIC_INVULNERABILITY: return { "MECHANIC_INVULNERABILITY", "MECHANIC_INVULNERABILITY", "" };
        case MECHANIC_INTERRUPT: return { "MECHANIC_INTERRUPT", "MECHANIC_INTERRUPT", "" };
        case MECHANIC_DAZE: return { "MECHANIC_DAZE", "MECHANIC_DAZE", "" };
        case MECHANIC_DISCOVERY: return { "MECHANIC_DISCOVERY", "MECHANIC_DISCOVERY", "" };
        case MECHANIC_IMMUNE_SHIELD: return { "MECHANIC_IMMUNE_SHIELD", "MECHANIC_IMMUNE_SHIELD", "Divine (Blessing) Shield/Protection and Ice Block" };
        case MECHANIC_SAPPED: return { "MECHANIC_SAPPED", "MECHANIC_SAPPED", "" };
        case MECHANIC_ENRAGED: return { "MECHANIC_ENRAGED", "MECHANIC_ENRAGED", "" };
        case MECHANIC_WOUNDED: return { "MECHANIC_WOUNDED", "MECHANIC_WOUNDED", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<Mechanics>::Count() { return 33; }

template <>
TC_API_EXPORT Mechanics EnumUtils<Mechanics>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return MECHANIC_NONE;
        case 1: return MECHANIC_CHARM;
        case 2: return MECHANIC_DISORIENTED;
        case 3: return MECHANIC_DISARM;
        case 4: return MECHANIC_DISTRACT;
        case 5: return MECHANIC_FEAR;
        case 6: return MECHANIC_GRIP;
        case 7: return MECHANIC_ROOT;
        case 8: return MECHANIC_SLOW_ATTACK;
        case 9: return MECHANIC_SILENCE;
        case 10: return MECHANIC_SLEEP;
        case 11: return MECHANIC_SNARE;
        case 12: return MECHANIC_STUN;
        case 13: return MECHANIC_FREEZE;
        case 14: return MECHANIC_KNOCKOUT;
        case 15: return MECHANIC_BLEED;
        case 16: return MECHANIC_BANDAGE;
        case 17: return MECHANIC_POLYMORPH;
        case 18: return MECHANIC_BANISH;
        case 19: return MECHANIC_SHIELD;
        case 20: return MECHANIC_SHACKLE;
        case 21: return MECHANIC_MOUNT;
        case 22: return MECHANIC_INFECTED;
        case 23: return MECHANIC_TURN;
        case 24: return MECHANIC_HORROR;
        case 25: return MECHANIC_INVULNERABILITY;
        case 26: return MECHANIC_INTERRUPT;
        case 27: return MECHANIC_DAZE;
        case 28: return MECHANIC_DISCOVERY;
        case 29: return MECHANIC_IMMUNE_SHIELD;
        case 30: return MECHANIC_SAPPED;
        case 31: return MECHANIC_ENRAGED;
        case 32: return MECHANIC_WOUNDED;
        default: throw std::out_of_range("index");
    }
}

/*********************************************************************\
|* data for enum 'SpellDmgClass' in 'SharedDefines.h' auto-generated *|
\*********************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellDmgClass>::ToString(SpellDmgClass value)
{
    switch (value)
    {
        case SPELL_DAMAGE_CLASS_NONE: return { "SPELL_DAMAGE_CLASS_NONE", "None", "" };
        case SPELL_DAMAGE_CLASS_MAGIC: return { "SPELL_DAMAGE_CLASS_MAGIC", "Magic", "" };
        case SPELL_DAMAGE_CLASS_MELEE: return { "SPELL_DAMAGE_CLASS_MELEE", "Melee", "" };
        case SPELL_DAMAGE_CLASS_RANGED: return { "SPELL_DAMAGE_CLASS_RANGED", "Ranged", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellDmgClass>::Count() { return 4; }

template <>
TC_API_EXPORT SpellDmgClass EnumUtils<SpellDmgClass>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_DAMAGE_CLASS_NONE;
        case 1: return SPELL_DAMAGE_CLASS_MAGIC;
        case 2: return SPELL_DAMAGE_CLASS_MELEE;
        case 3: return SPELL_DAMAGE_CLASS_RANGED;
        default: throw std::out_of_range("index");
    }
}

/***************************************************************************\
|* data for enum 'SpellPreventionType' in 'SharedDefines.h' auto-generated *|
\***************************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellPreventionType>::ToString(SpellPreventionType value)
{
    switch (value)
    {
        case SPELL_PREVENTION_TYPE_NONE: return { "SPELL_PREVENTION_TYPE_NONE", "None", "" };
        case SPELL_PREVENTION_TYPE_SILENCE: return { "SPELL_PREVENTION_TYPE_SILENCE", "Silence", "" };
        case SPELL_PREVENTION_TYPE_PACIFY: return { "SPELL_PREVENTION_TYPE_PACIFY", "Pacify", "" };
        case SPELL_PREVENTION_TYPE_NO_ACTIONS: return { "SPELL_PREVENTION_TYPE_NO_ACTIONS", "No actions", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellPreventionType>::Count() { return 4; }

template <>
TC_API_EXPORT SpellPreventionType EnumUtils<SpellPreventionType>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELL_PREVENTION_TYPE_NONE;
        case 1: return SPELL_PREVENTION_TYPE_SILENCE;
        case 2: return SPELL_PREVENTION_TYPE_PACIFY;
        case 3: return SPELL_PREVENTION_TYPE_NO_ACTIONS;
        default: throw std::out_of_range("index");
    }
}

/************************************************************************\
|* data for enum 'SpellFamilyNames' in 'SharedDefines.h' auto-generated *|
\************************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<SpellFamilyNames>::ToString(SpellFamilyNames value)
{
    switch (value)
    {
        case SPELLFAMILY_GENERIC: return { "SPELLFAMILY_GENERIC", "Generic", "" };
        case SPELLFAMILY_UNK1: return { "SPELLFAMILY_UNK1", "Unk1 (events, holidays, ...)", "" };
        case SPELLFAMILY_MAGE: return { "SPELLFAMILY_MAGE", "Mage", "" };
        case SPELLFAMILY_WARRIOR: return { "SPELLFAMILY_WARRIOR", "Warrior", "" };
        case SPELLFAMILY_WARLOCK: return { "SPELLFAMILY_WARLOCK", "Warlock", "" };
        case SPELLFAMILY_PRIEST: return { "SPELLFAMILY_PRIEST", "Priest", "" };
        case SPELLFAMILY_DRUID: return { "SPELLFAMILY_DRUID", "Druid", "" };
        case SPELLFAMILY_ROGUE: return { "SPELLFAMILY_ROGUE", "Rogue", "" };
        case SPELLFAMILY_HUNTER: return { "SPELLFAMILY_HUNTER", "Hunter", "" };
        case SPELLFAMILY_PALADIN: return { "SPELLFAMILY_PALADIN", "Paladin", "" };
        case SPELLFAMILY_SHAMAN: return { "SPELLFAMILY_SHAMAN", "Shaman", "" };
        case SPELLFAMILY_UNK2: return { "SPELLFAMILY_UNK2", "Unk2 (Silence resistance?)", "" };
        case SPELLFAMILY_POTION: return { "SPELLFAMILY_POTION", "Potion", "" };
        case SPELLFAMILY_DEATHKNIGHT: return { "SPELLFAMILY_DEATHKNIGHT", "Death Knight", "" };
        case SPELLFAMILY_PET: return { "SPELLFAMILY_PET", "Pet", "" };
        case SPELLFAMILY_TOTEMS: return { "SPELLFAMILY_TOTEMS", "SPELLFAMILY_TOTEMS", "" };
        case SPELLFAMILY_MONK: return { "SPELLFAMILY_MONK", "SPELLFAMILY_MONK", "" };
        case SPELLFAMILY_WARLOCK_PET: return { "SPELLFAMILY_WARLOCK_PET", "SPELLFAMILY_WARLOCK_PET", "" };
        case SPELLFAMILY_UNK66: return { "SPELLFAMILY_UNK66", "SPELLFAMILY_UNK66", "" };
        case SPELLFAMILY_UNK71: return { "SPELLFAMILY_UNK71", "SPELLFAMILY_UNK71", "" };
        case SPELLFAMILY_UNK78: return { "SPELLFAMILY_UNK78", "SPELLFAMILY_UNK78", "" };
        case SPELLFAMILY_UNK91: return { "SPELLFAMILY_UNK91", "SPELLFAMILY_UNK91", "" };
        case SPELLFAMILY_UNK100: return { "SPELLFAMILY_UNK100", "SPELLFAMILY_UNK100", "" };
        case SPELLFAMILY_DEMON_HUNTER: return { "SPELLFAMILY_DEMON_HUNTER", "SPELLFAMILY_DEMON_HUNTER", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<SpellFamilyNames>::Count() { return 24; }

template <>
TC_API_EXPORT SpellFamilyNames EnumUtils<SpellFamilyNames>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return SPELLFAMILY_GENERIC;
        case 1: return SPELLFAMILY_UNK1;
        case 2: return SPELLFAMILY_MAGE;
        case 3: return SPELLFAMILY_WARRIOR;
        case 4: return SPELLFAMILY_WARLOCK;
        case 5: return SPELLFAMILY_PRIEST;
        case 6: return SPELLFAMILY_DRUID;
        case 7: return SPELLFAMILY_ROGUE;
        case 8: return SPELLFAMILY_HUNTER;
        case 9: return SPELLFAMILY_PALADIN;
        case 10: return SPELLFAMILY_SHAMAN;
        case 11: return SPELLFAMILY_UNK2;
        case 12: return SPELLFAMILY_POTION;
        case 13: return SPELLFAMILY_DEATHKNIGHT;
        case 14: return SPELLFAMILY_PET;
        case 15: return SPELLFAMILY_TOTEMS;
        case 16: return SPELLFAMILY_MONK;
        case 17: return SPELLFAMILY_WARLOCK_PET;
        case 18: return SPELLFAMILY_UNK66;
        case 19: return SPELLFAMILY_UNK71;
        case 20: return SPELLFAMILY_UNK78;
        case 21: return SPELLFAMILY_UNK91;
        case 22: return SPELLFAMILY_UNK100;
        case 23: return SPELLFAMILY_DEMON_HUNTER;
        default: throw std::out_of_range("index");
    }
}
}
}
// Tile modifiers
MACRO_CONFIG_INT(ClAutomapperMenus, cl_automapper_menus, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Enable automapper in-game menus GUI (to switch between none/game tiles/automap modes)")
MACRO_CONFIG_INT(GfxGameTiles, gfx_game_tiles, 0, 0, 3, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show game tiles (2 = game tiles only, 3 = automapper)")
MACRO_CONFIG_INT(GfxKeepBackgroundAlways, gfx_keep_background_always, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Always keep the background, even when showing game tiles / automapping")
MACRO_CONFIG_INT(GfxAutomapDoodads, gfx_automap_doodads, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Automap doodads too")
MACRO_CONFIG_STR(GfxAutomapLayer, gfx_automap_layer, 255, "grass", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Layer to use for the automapper")

MACRO_CONFIG_INT(GfxClearColor, gfx_clear_color, 0, 0, 0xFFFFFF, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Color to use to clear the screen")

// Healthbar
MACRO_CONFIG_INT(GfxHealthBar, gfx_healthbar, 0, 0, 2, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Render healthbar (mode 1 or 2)")
MACRO_CONFIG_INT(GfxHealthBarDamagedOnly, gfx_healthbar_damaged_only, 1, 1, 0, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Render healthbar (mode 1 or 2)")
MACRO_CONFIG_INT(GfxArmorUnderHealth, gfx_armor_under_health, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Render the armor bar under the health")
MACRO_CONFIG_INT(GfxHealthBarNumbers, gfx_healthbar_numbers, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Render numbers next to the healthbar")

// HUD related features
MACRO_CONFIG_INT(ClGcolor, cl_gcolor, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Gamer colors - show health as tee colors")
MACRO_CONFIG_INT(ClGhud, cl_ghud, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Gamer HUD")
MACRO_CONFIG_INT(ClNoHud, cl_nohud, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Remove HUD")
MACRO_CONFIG_INT(ClNoAmmoWarning, cl_noammo_warning, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Prints a red and yellow warning when you use all your ammo")

MACRO_CONFIG_INT(ClShowAdmins, cl_show_admins, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Display admins in the scoreboard")

// Positions
// MACRO_CONFIG_STR(ClRedbaseMsg, cl_redbase_msg, 64, "I am at the RED BASE", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Message to send when being at the red base")
// MACRO_CONFIG_STR(ClBluebaseMsg, cl_bluebase_msg, 64, "I am at the BLUE BASE", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Message to send when being at the blue base")
// MACRO_CONFIG_STR(ClMiddleMsg, cl_middle_msg, 64, "I am at the MIDDLE", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Message to send when being at the middle")

// MACRO_CONFIG_INT(ClLocalPortLimit, cl_local_port_limit, 8320, 8304, 8400, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Maximum port the client is listening to when searching LAN servers")

// Race - old comment: this is useless now, should be removed
// MACRO_CONFIG_INT(ClRace, cl_race, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Enable race mode when a time broadcast is detected")
// MACRO_CONFIG_INT(ClRaceTextsize, cl_race_textsize, 100, 25, 400, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Race clock size")

// Sounds
MACRO_CONFIG_INT(ClGSound, cl_gsound, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Gamer sounds")
MACRO_CONFIG_INT(ClChatSound, cl_chat_sound, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Enable chat sounds")
MACRO_CONFIG_INT(ClSwapChatSounds, cl_swap_chat_sounds, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Swap chat normal/highlight sounds")
MACRO_CONFIG_INT(ClAnnouncers, cl_announcers, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Announcers")
MACRO_CONFIG_INT(ClAnnouncersShadows, cl_announcers_shadows, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Announcers outline shadows")
MACRO_CONFIG_INT(ClAnnouncersLegend, cl_announcers_legend, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Legend under the announcers")

// Chat
MACRO_CONFIG_INT(ClTextSize, cl_text_size, 100, 50, 200, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Chat size (%)")
MACRO_CONFIG_INT(ClTextColors, cl_text_colors, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Render text colors")
// MACRO_CONFIG_INT(ClArrows, cl_arrows, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Arrows")
// MACRO_CONFIG_INT(ClNoCustomForArrows, cl_no_custom_for_arrows, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Do not use custom team colors for arrows")

// Scoreboard
// MACRO_CONFIG_INT(ClShowSkins, cl_showskins, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show skin names on scoreboard")
// MACRO_CONFIG_INT(ClShowId, cl_showid, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show IDs on scoreboard")

// Client auto-reconizing
MACRO_CONFIG_INT(ClClientRecognition, cl_client_recognition, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Enable gamer client recognition")

// 	Spectating
MACRO_CONFIG_INT(GfxSpecZoom, gfx_spec_zoom, 100, 50, 500, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Spectator zoom")

// Stats
// MACRO_CONFIG_INT(ClRegisterStats, cl_register_stats, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Record statistics")
// MACRO_CONFIG_INT(ClRegisterStatsPure, cl_register_stats_pure, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Record statistics from pure games only")

// LAN test button
// MACRO_CONFIG_INT(ClShowLanTest, cl_show_lan_test, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show the LAN test button in the ingame menus")

// instashield
MACRO_CONFIG_INT(ClShieldDisplay, cl_shield_display, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Display shields instead of armor pickups in iCTF)")

// dbg
MACRO_CONFIG_INT(DbgNoTilemapSkip, dbg_no_tilemapskip, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "No tilemap skip")
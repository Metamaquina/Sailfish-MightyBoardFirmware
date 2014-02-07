



#ifdef MODEL_REPLICATOR
const static PROGMEM prog_uchar SPLASH1_MSG[] = "    Metamaquina     ";
#if !defined(HEATERS_ON_STEROIDS)
const static PROGMEM prog_uchar SPLASH2_MSG[] = "--------------------";
#else
const static PROGMEM prog_uchar SPLASH2_MSG[] = "-- Heater Special --";
#endif
#elif MODEL_REPLICATOR2
#ifdef SINGLE_EXTRUDER
const static PROGMEM prog_uchar SPLASH1_MSG[]  = "Sailfish Replicator2";
#else
const static PROGMEM prog_uchar SPLASH1_MSG[] = "  Sailfish Rep 2X   ";
#endif
const static PROGMEM prog_uchar SPLASH2_MSG[] = "--------------------";
#else
#warning "*** Compiling without MODEL_x defined ***"
const static PROGMEM prog_uchar SPLASH1_MSG[] = "      Sailfish      ";
const static PROGMEM prog_uchar SPLASH2_MSG[] = "      --------      ";
#endif
const static PROGMEM prog_uchar SPLASH3_MSG[] = "Thing 32084 r" SVN_VERSION_STR "  ";
const static PROGMEM prog_uchar SPLASH4_MSG[] = "Firmware Versao " VERSION_STR;

#ifdef STACK_PAINT
const static PROGMEM prog_uchar SPLASH_SRAM_MSG[] = "SRAM Livre ";
#endif

const static PROGMEM prog_uchar SPLASH1A_MSG[] = "    FALHA!          ";
const static PROGMEM prog_uchar SPLASH2A_MSG[] = "    SUCESSO!        ";
const static PROGMEM prog_uchar SPLASH3A_MSG[] = "   conexao OK       ";
const static PROGMEM prog_uchar SPLASH4A_MSG[] = "Heaters are not     ";

const static PROGMEM prog_uchar GO_MSG[] =         "Pre-aquecimento ";
const static PROGMEM prog_uchar STOP_MSG[] =       "Desliga Aquecim.";
const static PROGMEM prog_uchar PLATFORM_MSG[] =   "Plataforma";
const static PROGMEM prog_uchar TOOL_MSG[] =       "Extrusor";
const static PROGMEM prog_uchar NOZZLE_ERROR_MSG[] = "Toolhead Offset Sys " "must be set to NEW  " "to use this utility.";
const static PROGMEM prog_uchar START_TEST_MSG[]=  "Vou  imprimir  varias " "linhas para fazermos" "o  alinhamento  dos " "bicos.";
const static PROGMEM prog_uchar EXPLAIN1_MSG[] =   "Look for the best   " "matched line in each" "axis set.  Lines are" "numbered 1-13 and...";
const static PROGMEM prog_uchar EXPLAIN2_MSG[] =   "line one is extra   " "long. The Y axis set" "is left on the plate" "and X axis is right.";
const static PROGMEM prog_uchar END_MSG  [] =      "Great!  I've saved  " "these settings and  " "I'll use them to    " "make nice prints!   ";

const static PROGMEM prog_uchar SELECT_MSG[] =     "Select best lines.";
const static PROGMEM prog_uchar DONE_MSG[]   =     "Pronto";
const static PROGMEM prog_uchar NO_MSG[]   =       "NAO";
const static PROGMEM prog_uchar YES_MSG[]  =       "SIM";

const static PROGMEM prog_uchar XAXIS_MSG[] =      "X Axis Line";
const static PROGMEM prog_uchar YAXIS_MSG[] =      "Y Axis Line";

const static PROGMEM prog_uchar HEATER_ERROR_MSG[] = "Os extrusores nao   " "estao aquecendo.    " "Verifique a fiacao.";

const static PROGMEM prog_uchar STOP_EXIT_MSG[]    = "Comece a inserir ou " "remover filamento.  " "Pressione 'M'       " "para parar.";
const static PROGMEM prog_uchar TIMEOUT_MSG[]  	   = "Esgotaram-se os     " "5 minutos.          " "Pressione 'M'       " "para sair.";

const static PROGMEM prog_uchar LOAD_RIGHT_MSG[]    = "Direito: Inserir";
const static PROGMEM prog_uchar LOAD_LEFT_MSG[]     = "Esquerdo: Inserir";
const static PROGMEM prog_uchar LOAD_SINGLE_MSG[]   = "Inserir";
const static PROGMEM prog_uchar UNLOAD_SINGLE_MSG[] = "Remover";
const static PROGMEM prog_uchar UNLOAD_RIGHT_MSG[]  = "Direito: Remover";
const static PROGMEM prog_uchar UNLOAD_LEFT_MSG[]   = "Esquerdo: Remover";

const static PROGMEM prog_uchar JOG1_MSG[]  = "  Controle Manual   ";
const static PROGMEM prog_uchar JOG2X_MSG[] = "        X+          ";
const static PROGMEM prog_uchar JOG3X_MSG[] = "     (Voltar) Y->   ";
const static PROGMEM prog_uchar JOG4X_MSG[] = "        X-          ";
const static PROGMEM prog_uchar JOG3Y_MSG[] = " <-X (Voltar) Z->   ";
const static PROGMEM prog_uchar JOG3Z_MSG[] = " <-Y (Voltar)       ";


const static PROGMEM prog_uchar DISTANCESHORT_MSG[] = "CURTO";
const static PROGMEM prog_uchar DISTANCELONG_MSG[] =  "LONGO";

#define HEATING_MSG_DEF "Aquecendo:"
#define HEATING_MSG_LEN (sizeof(HEATING_MSG_DEF)-1)
const static PROGMEM prog_uchar HEATING_MSG[] =        HEATING_MSG_DEF;
// HEATING_SPACES_MSG is a full LCD screen wide (20 spaces)
const static PROGMEM prog_uchar HEATING_SPACES_MSG[] = HEATING_MSG_DEF "          ";

const static PROGMEM prog_uchar BUILD_PERCENT_MSG[] =    " --%";
const static PROGMEM prog_uchar EXTRUDER1_TEMP_MSG[] =   "Extr. Dir.: ---/---C";
const static PROGMEM prog_uchar EXTRUDER2_TEMP_MSG[] =   "Extr. Esq.: ---/---C";
const static PROGMEM prog_uchar PLATFORM_TEMP_MSG[]  =   "Plataforma: ---/---C";
const static PROGMEM prog_uchar EXTRUDER_TEMP_MSG[]  =   "Extrusor:   ---/---C";


const static PROGMEM prog_uchar EXTRUDER_SPACES_MSG[]  = "Extrusor           ";
const static PROGMEM prog_uchar RIGHT_SPACES_MSG[]     = "Extrusor Direito   ";
const static PROGMEM prog_uchar LEFT_SPACES_MSG[]      = "Extrusor Esquerdo  ";
const static PROGMEM prog_uchar PLATFORM_SPACES_MSG[]  = "Plataforma         ";
const static PROGMEM prog_uchar RESET1_MSG[]           = "Recarregar config.";
const static PROGMEM prog_uchar RESET2_MSG[]           = "padrao?";
const static PROGMEM prog_uchar CANCEL_MSG[] = "Cancelar impressao?";
const static PROGMEM prog_uchar CANCEL_FIL_MSG[] = "Cancelar?";

const static PROGMEM prog_uchar PAUSE_MSG[]      = "Pausar   "; // must be same length as the next msg
const static PROGMEM prog_uchar UNPAUSE_MSG[]    = "Continuar"; // must be same length as the prior msg
const static PROGMEM prog_uchar COLD_PAUSE_MSG[] = "Pausa Fria";

const static PROGMEM prog_uchar BUILDING_MSG[]    = "Ja estou imprimindo";
const static PROGMEM prog_uchar CARDCOMMS_MSG[]   = "Ha algum problema   " "com o cartao SD.    " "Tente usar outro.   ";
const static PROGMEM prog_uchar CARDOPENERR_MSG[] = "Erro ao tentar abrir";
const static PROGMEM prog_uchar CARDNOFILES_MSG[] = "O cartao esta vazio.";
const static PROGMEM prog_uchar NOCARD_MSG[]      = "Sem cartao inserido!";
const static PROGMEM prog_uchar CARDERROR_MSG[]   = "SD card read error";
const static PROGMEM prog_uchar CARDCRC_MSG[]     = "SD card read error. " "Too many CRC errors." "Bad card contacts or" "electrical noise.";
const static PROGMEM prog_uchar CARDFORMAT_MSG[]  = "Unable to read this " "SD card format.     " "Reformat as FAT-16. ";
const static PROGMEM prog_uchar CARDSIZE_MSG[]    = "Unable to read SD   " "card partitions over" "2GB in size.        " "Reformat as FAT-16.";
const static PROGMEM prog_uchar EXTRUDER_TIMEOUT_MSG[] = "I timed out while   attempting to heat  my extruder."; 
const static PROGMEM prog_uchar PLATFORM_TIMEOUT_MSG[] = "I timed out while   attempting to heat  my platform.";

const static PROGMEM prog_uchar BUILD_MSG[] =            "Imprimir do cartao";
const static PROGMEM prog_uchar PREHEAT_MSG[] =          "Pre-aquecimento";
const static PROGMEM prog_uchar UTILITIES_MSG[] =        "Utilitarios";
const static PROGMEM prog_uchar MONITOR_MSG[] =          "Monitoramento";
const static PROGMEM prog_uchar JOG_MSG[]   =            "Controle Manual";
const static PROGMEM prog_uchar CALIBRATION_MSG[] =      "Calibrar Eixos";
const static PROGMEM prog_uchar HOME_AXES_MSG[] =        "Homing dos eixos";
const static PROGMEM prog_uchar FILAMENT_OPTIONS_MSG[] = "Carga de Filamento";
const static PROGMEM prog_uchar VERSION_MSG[] = 	       "Info. de Versao";
const static PROGMEM prog_uchar DSTEPS_MSG[] =           "Desabilitar Motores";
const static PROGMEM prog_uchar ESTEPS_MSG[] =           "Habilitar Motores";
const static PROGMEM prog_uchar PLATE_LEVEL_MSG[] =      "Nivelar Plataforma";
const static PROGMEM prog_uchar LED_BLINK_MSG[] =        "Piscar LEDs";
const static PROGMEM prog_uchar LED_STOP_MSG[] =         "Parar de Piscar!";
const static PROGMEM prog_uchar PREHEAT_SET_MSG[] =      "Config. Pre-Aquecim";
const static PROGMEM prog_uchar SETTINGS_MSG[] =         "Config. Gerais";
const static PROGMEM prog_uchar RESET_MSG[] =            "Resetar Config.";
const static PROGMEM prog_uchar NOZZLES_MSG[] =          "Calibrar Bicos";
const static PROGMEM prog_uchar BOT_STATS_MSG[] =        "Estatisticas";
const static PROGMEM prog_uchar TOOL_COUNT_MSG[] =       "Extrusores";
const static PROGMEM prog_uchar SOUND_MSG[] =            "Som";
const static PROGMEM prog_uchar LED_MSG[] =              "Cor dos LEDs";
const static PROGMEM prog_uchar LED_HEAT_MSG[] =         "Heat LEDs";
const static PROGMEM prog_uchar EXIT_MSG[] =             "Sair do menu";
const static PROGMEM prog_uchar ACCELERATE_MSG[] = 	     "Acelerar";
const static PROGMEM prog_uchar HBP_MSG[]                 = "BaseAquec. instalada";
const static PROGMEM prog_uchar OVERRIDE_GCODE_TEMP_MSG[] = "Override GcTemp";
const static PROGMEM prog_uchar PAUSE_HEAT_MSG[]	        = "Pause with Heat";
const static PROGMEM prog_uchar EXTRUDER_HOLD_MSG[]       = "Extruder Hold";
const static PROGMEM prog_uchar TOOL_OFFSET_SYSTEM_MSG[]  = "Tool Offset Sys";
const static PROGMEM prog_uchar SD_USE_CRC_MSG[]          = "Checar leituras SD";
const static PROGMEM prog_uchar PSTOP_ENABLE_MSG[]        = "P-Stop control";
const static PROGMEM prog_uchar OLD_MSG[]                 = "OLD";
const static PROGMEM prog_uchar NEW_MSG[]                 = "NEW";
const static PROGMEM prog_uchar DISABLED_MSG[]            = "N/A";
#ifdef DITTO_PRINT
const static PROGMEM prog_uchar DITTO_PRINT_MSG[]         = "Ditto Printing";
#endif
const static PROGMEM prog_uchar PAUSEATZPOS_MSG[]	        = "Pausar em posicao Z";
const static PROGMEM prog_uchar CHANGE_SPEED_MSG[]        = "Mudar Velocidade";
const static PROGMEM prog_uchar CHANGE_TEMP_MSG[]         = "Mudar Temperatura";
const static PROGMEM prog_uchar FAN_ON_MSG[]              = "Ligar ventoinha    "; // Needs trailing space
const static PROGMEM prog_uchar FAN_OFF_MSG[]             = "Desligar ventoinha ";
const static PROGMEM prog_uchar RETURN_TO_MAIN_MSG[]      = "Menu Principal";
const static PROGMEM prog_uchar PRINT_ANOTHER_MSG[]       = "Imprima outra copia";
const static PROGMEM prog_uchar CANNOT_PRINT_ANOTHER_MSG[]= "Impossivel!";


const static PROGMEM prog_uchar RED_COLOR_MSG[]    = "VERMEL";
const static PROGMEM prog_uchar ORANGE_COLOR_MSG[] = "LARANJ";
const static PROGMEM prog_uchar PINK_COLOR_MSG[]   = "ROSA  ";
const static PROGMEM prog_uchar GREEN_COLOR_MSG[]  = "VERDE ";
const static PROGMEM prog_uchar BLUE_COLOR_MSG[]   = "AZUL  ";
const static PROGMEM prog_uchar PURPLE_COLOR_MSG[] = "ROXO  ";
const static PROGMEM prog_uchar WHITE_COLOR_MSG[]  = "BRANCO";
const static PROGMEM prog_uchar CUSTOM_COLOR_MSG[] = "CUSTOM";
const static PROGMEM prog_uchar OFF_COLOR_MSG[]    = "DESLIG";

const static PROGMEM prog_uchar ERROR_MSG[] =   "erro!";
const static PROGMEM prog_uchar NA_MSG[] =      "  NA    ";
const static PROGMEM prog_uchar WAITING_MSG[] = "aguarde "; //needs trailing space

const static PROGMEM prog_uchar EXTEMP_CHANGE_MSG[]               = "My temperature was  " "changed externally. " "Reselect filament   " "menu to try again.";
const static PROGMEM prog_uchar HEATER_INACTIVITY_MSG[]           = "Heaters shutdown due" "to inactivity";
const static PROGMEM prog_uchar HEATER_TOOL_MSG[]                 = "Extruder Failure!   ";
const static PROGMEM prog_uchar HEATER_TOOL0_MSG[]                = "Tool 0 Failure!     ";
const static PROGMEM prog_uchar HEATER_TOOL1_MSG[]                = "Tool 1 Failure!     ";
const static PROGMEM prog_uchar HEATER_PLATFORM_MSG[]             = "Platform Failure!   ";

const static PROGMEM prog_uchar HEATER_FAIL_SOFTWARE_CUTOFF_MSG[] = "Temp limit reached. " "Shutdown or restart.";
const static PROGMEM prog_uchar HEATER_FAIL_NOT_HEATING_MSG[]     = "Not heating properly" "Check wiring.";
const static PROGMEM prog_uchar HEATER_FAIL_DROPPING_TEMP_MSG[]   = "Temperature dropping" "Check wiring.";
const static PROGMEM prog_uchar HEATER_FAIL_NOT_PLUGGED_IN_MSG[]  = "Temperature reads   " "are failing.        " "Check wiring.";
const static PROGMEM prog_uchar HEATER_FAIL_READ_MSG[]            = "Temperature reads   " "out of range.       " "Check wiring.";

const static PROGMEM prog_uchar BUILD_TIME_MSG[]	= "Tempo Total:    h  m"; 
const static PROGMEM prog_uchar Z_POSITION_MSG[]	= "Coord. Z:"; 
const static PROGMEM prog_uchar FILAMENT_MSG[]	  = "Filamento:"; 
const static PROGMEM prog_uchar PROFILES_MSG[]	  = "Profiles"; 
const static PROGMEM prog_uchar HOME_OFFSETS_MSG[]= "Home Offsets"; 
const static PROGMEM prog_uchar MILLIMETERS_MSG[] = "mm";
const static PROGMEM prog_uchar METERS_MSG[]	  = "m";
const static PROGMEM prog_uchar LINE_NUMBER_MSG[] = "Linha:              ";
const static PROGMEM prog_uchar LEFT_EXIT_MSG []  = "Left Key to Go Back ";

const static PROGMEM prog_uchar BACK_TO_MONITOR_MSG[] ="Voltar p/Monitoram.";
const static PROGMEM prog_uchar STATS_MSG[]			= "Estatisticas";
const static PROGMEM prog_uchar CANCEL_BUILD_MSG[]    = "Cancelar impressao"; 
const static PROGMEM prog_uchar HEATERS_OFF_MSG[]    = "Heaters Off"; 

const static PROGMEM prog_uchar FILAMENT_ODOMETER_MSG[]    = "Odometro de Filam.";
const static PROGMEM prog_uchar FILAMENT_LIFETIME1_MSG[]   = "Life:"; 
const static PROGMEM prog_uchar FILAMENT_TRIP1_MSG[]       = "Trip:"; 
const static PROGMEM prog_uchar FILAMENT_LIFETIME2_MSG[]   = "Filamento:"; 
const static PROGMEM prog_uchar FILAMENT_TRIP2_MSG[]   	   = "Fil. Gasto:"; 
const static PROGMEM prog_uchar FILAMENT_RESET_TRIP_MSG[]  = "'centro' - Resetar"; 

const static PROGMEM prog_uchar PROFILE_RESTORE_MSG[]		= "Restore";
const static PROGMEM prog_uchar PROFILE_DISPLAY_CONFIG_MSG[]	= "Display Config";
const static PROGMEM prog_uchar PROFILE_CHANGE_NAME_MSG[]	= "Change Name";
const static PROGMEM prog_uchar PROFILE_SAVE_TO_PROFILE_MSG[]	= "Save To Profile";
const static PROGMEM prog_uchar PROFILE_PROFILE_NAME_MSG[]	= "Profile Name:";
const static PROGMEM prog_uchar UPDNLRM_MSG[]			= "Up/Dn/R/L/M to Set";
const static PROGMEM prog_uchar UPDNLM_MSG[]			= "Up/Dn/Left/M to Set";
const static PROGMEM prog_uchar XYZOFFSET_MSG[]                 = " Offset: ";  // needs extra space
const static PROGMEM prog_uchar PROFILE_RIGHT_MSG[]		= "Right Temp: ";
const static PROGMEM prog_uchar PROFILE_LEFT_MSG[]		= "Left Temp: ";
const static PROGMEM prog_uchar PROFILE_PLATFORM_MSG[]		= "Platform Temp:   ";
const static PROGMEM prog_uchar PAUSE_AT_ZPOS_MSG[]		= "Pausar na coord. Z:";

const static PROGMEM prog_uchar PRINTED_TOO_LONG_MSG[]		= "Line:    1000000000+";

const static PROGMEM prog_uchar PAUSE_ENTER_MSG[]		= "Pausando...   "; // Needs trailing spaces
const static PROGMEM prog_uchar CANCELLING_ENTER_MSG[]		= "Cancelando... "; // Needs trailing spaces
const static PROGMEM prog_uchar PAUSE_LEAVE_MSG[]		= "Continuando... "; // Needs trailing spaces
const static PROGMEM prog_uchar PAUSE_DRAINING_PIPELINE_MSG[]	= "Draining pipeline..."; // Needs trailing spaces
const static PROGMEM prog_uchar PAUSE_CLEARING_BUILD_MSG[]	= "Clearing build...   "; // Needs trailing spaces
const static PROGMEM prog_uchar PAUSE_RESUMING_POSITION_MSG[]	= "Resuming position..."; // Needs trailing spaces
const static PROGMEM prog_uchar TOTAL_TIME_MSG[]                = "Lifetime:      h 00m";
const static PROGMEM prog_uchar LAST_TIME_MSG[]                 = "Last Print:    h 00m";
const static PROGMEM prog_uchar BUILD_TIME2_MSG[]               =  "Print Time:   h 00m"; // This string is 19 chars WIDE!
#ifdef EEPROM_MENU_ENABLE
	const static PROGMEM prog_uchar EEPROM_MSG[]		= "Eeprom";
	const static PROGMEM prog_uchar EEPROM_DUMP_MSG[]	= "Eeprom -> SD";
	const static PROGMEM prog_uchar EEPROM_RESTORE_MSG[]	= "SD -> Eeprom";
	const static PROGMEM prog_uchar EEPROM_ERASE_MSG[]	= "Apagar Eeprom";
#endif

const static PROGMEM prog_uchar ERROR_STREAM_VERSION[] = "This is not the x3g version I work best with. "
	"For help see: makerbot.com/help   ";

#ifdef MODEL_REPLICATOR2
const static PROGMEM prog_uchar ERROR_BOT_TYPE[] =
    "I am a Replicator 2.This build is for   another bot. See:   makerbot.com/help";
#else
const static PROGMEM prog_uchar ERROR_BOT_TYPE[] =
    "I am a Replicator.  This build is for   another bot. See:   makerbot.com/help";
#endif



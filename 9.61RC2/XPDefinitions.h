/* XPDefinitions.h
 * This file is part of libxpudp
 *
 * Define all stuff from "Data Input & Output" in X-Plane
 * X-Plane Version: 9.61RC2
 *
 */

/*!
  @defgroup xp_defs Definitions for X-Plane types
  @brief Definitions for X-Plane types
  @{
 */

#ifndef	__9_61RC2_XP_DEFINITIONS_H
#define	__9_61RC2_XP_DEFINITIONS_H

#define XP_DEFINITIONS_VERSION	"9.61RC2"

/*!
 \brief List all X-Plane types known of the 9.61RC2 Version
 */
enum xp_types {
	XP_FRAMERATE			= 0,
	XP_TIMES			= 1,
	XP_SIM_STATS			= 2,
	
	XP_SPEEDS			= 3,
	XP_MACH_GLOAD			= 4,
	
	XP_ATMOSPHERE_WEATHER		= 5,
	XP_ATMOSPHERE_AIRCRAFT		= 6,
	XP_SYSTEM_PRESSURES		= 7,
	
	XP_JOYSTICK_1_AIL_ELV_RUD	= 8,
	XP_OTHER_FLIGHT_CONTROLS	= 9,
	XP_ARTSTAB_AIL_ELV_RUD		= 10,
	XP_FLIGHTCON_AIL_ELV_RUD	= 11,
	
	XP_WINGSWEEP_THRUST_VECT	= 12,
	XP_TRIM_FLAP_SLAT_SBRAKES	= 13,
	XP_GEAR_BRAKES			= 14,
	
	XP_ANGULAR_MOMENTS		= 15,
	XP_ANGULAR_ACCELERATIONS	= 16,
	XP_ANGULAR_VELOCITIES		= 17,
	XP_PITCH_ROLL_HEADINGS		= 18,
	XP_AOA_SIDESLIP_PATHS		= 19,
	
	XP_LAT_LON_ALTITUDE		= 20,
	XP_LOC_VEL_DIST_TRAVELLED	= 21,
	
	XP_ALL_PLANES_LAT		= 22,
	XP_ALL_PLANES_LON		= 23,
	XP_ALL_PLANES_ALT		= 24,
	
	XP_THROTTLE_COMMAND		= 25,
	XP_THROTTLE_ACTUAL		= 26,
	XP_FEATHER_NORM_BETA_REVERS	= 27,
	XP_PROP_SETTING			= 28,
	XP_MIXTURE_SETTING		= 29,
	XP_CARB_HEAT_SETTING		= 30,
	XP_COWL_FLAP_SETTING		= 31,
	XP_IGNITION_SETTING		= 32,
	
	XP_STARTER_TIMEOUT		= 33,
	XP_ENGINE_POWER			= 34,
	XP_ENGINE_THRUST		= 35,
	XP_ENGINE_TORQUE		= 36,
	XP_ENGINE_RPM			= 37,
	XP_PROP_RPM			= 38,
	XP_PROP_PITCH			= 39,
	XP_PROPWASH_JETWASH		= 40,
	XP_N1				= 41,
	XP_N2				= 42,
	XP_MP				= 43,
	XP_EPR				= 44,
	XP_FF				= 45,
	XP_ITT				= 46,
	XP_EGT				= 47,
	XP_CHT				= 48,
	XP_OIL_PRESSURE			= 49,
	XP_OIL_TEMP			= 50,
	XP_FUEL_PRESSURE		= 51,
	XP_GENERATOR_AMPERAGE		= 52,
	XP_BATTERY_AMPERAGE		= 53,
	XP_BATTERY_VOLTAGE		= 54,
	
	XP_FUEL_PUMP			= 55,
	XP_IDLE_SPEED			= 56,
	XP_BATTERY			= 57,
	XP_GENERATOR			= 58,
	XP_INVERTER			= 59,
	XP_FADEC			= 60,
	XP_IGNITER			= 61,
	
	XP_FUEL_WEIGHTS			= 62,
	XP_PAYLOAD_AND_CG		= 63,
	
	XP_AERO_FORCES			= 64,
	XP_ENGINE_FORCES		= 65,
	XP_LANDING_GEAR_VERT_FORCE	= 66,
	XP_LANDING_GEAR_DEPLOYMENT	= 67,
	
	XP_LIFT_OVER_DRAG_COEFFS	= 68,
	XP_PROP_EFFICIENCY		= 69,
	
	XP_DEFS_AILERONS_1		= 70,
	XP_DEFS_AILERONS_2		= 71,
	XP_DEFS_ROLL_SPOILERS_1		= 72,
	XP_DEFS_ROLL_SPOILERS_2		= 73,
	XP_DEFS_ELEVATORS		= 74,
	XP_DEFS_RUDDERS			= 75,
	XP_DEFS_YAW_BRAKES		= 76,
	XP_CONTROL_FORCES		= 77,
	
	XP_TOTAL_VERT_THRUST_VECTS	= 78,
	XP_TOTAL_LAT_THRUST_VECTS	= 79,
	XP_PITCH_CYCLIC_DISC_TILTS	= 80,
	XP_ROLL_CYCLIC_DISC_TITLS	= 81,
	XP_PITCH_CYCLIC_FLAPPING	= 82,
	XP_ROLL_CYCLIC_FLAPPING		= 83,
	
	XP_GRND_EFFECT_LIFT_WINGS	= 84,
	XP_GRND_EFFECT_DRAG_WINGS	= 85,
	XP_GRND_EFFECT_WASH_WINGS	= 86,
	XP_GRND_EFFECT_LIFT_STABS	= 87,
	XP_GRND_EFFECT_DRAG_STABS	= 88,
	XP_GRND_EFFECT_WASH_STABS	= 89,
	XP_GRND_EFFECT_LIFT_PROPS	= 90,
	XP_GRND_EFFECT_DRAG_PROPS	= 91,
	
	XP_WING_LIFT			= 92,
	XP_WING_DRAG			= 93,
	XP_STAB_LIFT			= 94,
	XP_STAB_DRAG			= 95,
	
	XP_COMM_1_2_FREQ		= 96,
	XP_NAV_1_2_FREQ			= 97,
	XP_NAV_1_2_OBS			= 98,
	XP_NAV_1_DEFLECTIONS		= 99,
	XP_NAV_2_DEFLECTIONS		= 100,
	XP_ADF_1_2_STATUS		= 101,
	XP_DME_STATUS			= 102,
	XP_GPS_STATUS			= 103,
	XP_XPNDR_STATUS			= 104,
	XP_MARKER_STATUS		= 105,
	
	XP_SWITCHES_1_ELECTRICAL	= 106,
	XP_SWITCHES_2_EFIS		= 107,
	XP_SWITCHES_3_AP_FDIR_HUD	= 108,
	XP_SWITCHES_4_ANTI_ICE		= 109,
	XP_SWITCHES_5_ANTI_ICE_FUEL	= 110,
	XP_SWITCHES_6_CLUTCH_ASTAB	= 110,
	XP_SWITCHES_7_MISC		= 112,
	
	XP_ANNUNCIATORS_GENERAL		= 113,
	XP_ANNUNCIATORS_GENERAL_2	= 114,
	XP_ANNUNCIATORS_ENGINE		= 115,
	
	XP_AUTOPILOT_ARMS		= 116,
	XP_AUTOPILOT_MODES		= 117,
	XP_AUTOPILOT_VALUES		= 118,
	
	XP_WEAPON_STATUS		= 119,
	XP_PRESSURIZATION_STATUS	= 120,
	XP_APU_GPU_STATUS		= 121,
	XP_RADAR_STATUS			= 122,
	XP_HYDRAULIC_STATUS		= 123,
	XP_ELECTRIC_SOLAR_STATUS	= 124,
	XP_ICING_STATUS_1		= 125,
	XP_ICING_STATUS_2		= 126,
	XP_WARNING_STATUS		= 127,
	XP_FLITE_PLAN_LEGS		= 128,
	
	XP_HARDWARE_OPTIONS		= 129,
	XP_CAMERA_LOCATION		= 130,
	XP_GROUND_LOCATION		= 131,
	
	E_XP_TYPES_MAX
};

/*!
 \brief Associate an XP_* with his X-Plane description
 */
const char *xp_type_desc[E_XP_TYPES_MAX] = {
	[XP_FRAMERATE]			= "frame rate",			// 0
	[XP_TIMES]			= "times",
	[XP_SIM_STATS]			= "sim stats",			// 2
	
	[XP_SPEEDS]			= "speeds",			// 3
	[XP_MACH_GLOAD]			= "Mach, VVI, G-load",		// 4
	
	[XP_ATMOSPHERE_WEATHER]		= "atmosphere: weather",	// 5
	[XP_ATMOSPHERE_AIRCRAFT]	= "atmosphere: aircraft",
	[XP_SYSTEM_PRESSURES]		= "system pressures",		// 7
	
	[XP_JOYSTICK_1_AIL_ELV_RUD]	= "joystick all/elv/rud",	// 8
	[XP_OTHER_FLIGHT_CONTROLS]	= "other flight controls",
	[XP_ARTSTAB_AIL_ELV_RUD]	= "art stab all/elv/rud",
	[XP_FLIGHTCON_AIL_ELV_RUD]	= "flight con all/elv/rud",	// 11
	
	[XP_WINGSWEEP_THRUST_VECT]	= "wing sweep/thrust vect",	// 12
	[XP_TRIM_FLAP_SLAT_SBRAKES]	= "trim/flap/slat/s-brakes",
	[XP_GEAR_BRAKES]		= "gear/brakes",		// 14
	
	[XP_ANGULAR_MOMENTS]		= "angular moments",		// 15
	[XP_ANGULAR_ACCELERATIONS]	= "angular accelerations",
	[XP_ANGULAR_VELOCITIES]		= "angular velocities",
	[XP_PITCH_ROLL_HEADINGS]	= "pitch, roll, headings",
	[XP_AOA_SIDESLIP_PATHS]		= "AoA, sid-slip, paths",	// 19
	
	[XP_LAT_LON_ALTITUDE]		= "lat, lon, altitude",		// 20
	[XP_LOC_VEL_DIST_TRAVELLED]	= "loc, vel, dist traveled",	// 21
	
	[XP_ALL_PLANES_LAT]		= "all planes: lat",		// 22
	[XP_ALL_PLANES_LON]		= "all planes: lon",
	[XP_ALL_PLANES_ALT]		= "all planes: alt",		// 24
	
	[XP_THROTTLE_COMMAND]		= "throttle command",		// 25
	[XP_THROTTLE_ACTUAL]		= "throttle actual",
	[XP_FEATHER_NORM_BETA_REVERS]	= "feather-norm-beta-revers",
	[XP_PROP_SETTING]		= "prop setting",
	[XP_MIXTURE_SETTING]		= "mixture setting",
	[XP_CARB_HEAT_SETTING]		= "carb heat setting",
	[XP_COWL_FLAP_SETTING]		= "cowl flap setting",
	[XP_IGNITION_SETTING]		= "ignition",			// 32
	
	[XP_STARTER_TIMEOUT]		= "starter timeout",		// 33
	[XP_ENGINE_POWER]		= "engine power",
	[XP_ENGINE_THRUST]		= "engine thrust",
	[XP_ENGINE_TORQUE]		= "engine torque",
	[XP_ENGINE_RPM]			= "engine RPM",
	[XP_PROP_RPM]			= "prop RPM",
	[XP_PROP_PITCH]			= "prop pitch",
	[XP_PROPWASH_JETWASH]		= "propwash/jetwash",
	[XP_N1]				= "N1",				// 41
	[XP_N2]				= "N2",
	[XP_MP]				= "MP",
	[XP_EPR]			= "EPR",
	[XP_FF]				= "FF",				// 45
	[XP_ITT]			= "ITT",
	[XP_EGT]			= "EGT",
	[XP_CHT]			= "CHT",
	[XP_OIL_PRESSURE]		= "oil pressure",		// 49
	[XP_OIL_TEMP]			= "oil temp",
	[XP_FUEL_PRESSURE]		= "fuel pressure",
	[XP_GENERATOR_AMPERAGE]		= "generator amperage",
	[XP_BATTERY_AMPERAGE]		= "battery amperage",
	[XP_BATTERY_VOLTAGE]		= "battery voltage",		// 54
	
	[XP_FUEL_PUMP]			= "fuel pomp on/off",		// 55
	[XP_IDLE_SPEED]			= "idle speed lo/hi",
	[XP_BATTERY]			= "battery on/off",
	[XP_GENERATOR]			= "generator on/off",
	[XP_INVERTER]			= "inverter on/off",
	[XP_FADEC]			= "FADEC on/off",
	[XP_IGNITER]			= "igniter on/off",		// 61
	
	[XP_FUEL_WEIGHTS]		= "fuel weights",		// 62
	[XP_PAYLOAD_AND_CG]		= "payload weights and CG",	// 63
	
	[XP_AERO_FORCES]		= "aero forces",		// 64
	[XP_ENGINE_FORCES]		= "engine forces",
	[XP_LANDING_GEAR_VERT_FORCE]	= "landing gear vert force",
	[XP_LANDING_GEAR_DEPLOYMENT]	= "landing gear deployment",	// 67
	
	[XP_LIFT_OVER_DRAG_COEFFS]	= "lift over drag & coeffs",	// 68
	[XP_PROP_EFFICIENCY]		= "prop efficiency",		// 69
	
	[XP_DEFS_AILERONS_1]		= "defs: ailerons 1",		// 70
	[XP_DEFS_AILERONS_2]		= "defs: ailerons 2",
	[XP_DEFS_ROLL_SPOILERS_1]	= "defs: roll spoilers 1",
	[XP_DEFS_ROLL_SPOILERS_2]	= "defs: roll spoilers 2",
	[XP_DEFS_ELEVATORS]		= "defs: elevators",
	[XP_DEFS_RUDDERS]		= "defs: rudders",
	[XP_DEFS_YAW_BRAKES]		= "defs: yaw-brakes",
	[XP_CONTROL_FORCES]		= "control forces",		// 77
	
	[XP_TOTAL_VERT_THRUST_VECTS]	= "TOTAL vert thrust vects",	// 78
	[XP_TOTAL_LAT_THRUST_VECTS]	= "TOTAL lat thrust vects",
	[XP_PITCH_CYCLIC_DISC_TILTS]	= "pitch cyclic disc tilts",
	[XP_ROLL_CYCLIC_DISC_TITLS]	= "roll cyclic disc tilts",
	[XP_PITCH_CYCLIC_FLAPPING]	= "pitch cyclic flapping",
	[XP_ROLL_CYCLIC_FLAPPING]	= "roll cyclic flapping",	// 83
	
	[XP_GRND_EFFECT_LIFT_WINGS]	= "grnd effect lift, wings",	// 84
	[XP_GRND_EFFECT_DRAG_WINGS]	= "grnd effect drag, wings",
	[XP_GRND_EFFECT_WASH_WINGS]	= "grnd effect wash, wings",
	[XP_GRND_EFFECT_LIFT_STABS]	= "grnd effect lift, stabs",
	[XP_GRND_EFFECT_DRAG_STABS]	= "grnd effect drag, stabs",
	[XP_GRND_EFFECT_WASH_STABS]	= "grnd effect wash, stabs",
	[XP_GRND_EFFECT_LIFT_PROPS]	= "grnd effect lift, props",
	[XP_GRND_EFFECT_DRAG_PROPS]	= "grnd effect drag, props",	// 91
	
	[XP_WING_LIFT]			= "wing lift",			// 92
	[XP_WING_DRAG]			= "wing drag",
	[XP_STAB_LIFT]			= "stab list",
	[XP_STAB_DRAG]			= "stab drag",			// 95
	
	[XP_COMM_1_2_FREQ]		= "COM 1/2 frequency",		// 96
	[XP_NAV_1_2_FREQ]		= "NAV 1/2 frequency",
	[XP_NAV_1_2_OBS]		= "NAV 1/2 OBS",
	[XP_NAV_1_DEFLECTIONS]		= "NAV 1 deflections",
	[XP_NAV_2_DEFLECTIONS]		= "NAV 2 deflections",
	[XP_ADF_1_2_STATUS]		= "ADF 1/2 status",		// 101
	[XP_DME_STATUS]			= "DME status",
	[XP_GPS_STATUS]			= "GPS status",
	[XP_XPNDR_STATUS]		= "XPNDR status",
	[XP_MARKER_STATUS]		= "MARKER status",		// 105
	
	[XP_SWITCHES_1_ELECTRICAL]	= "switches 1: electrical",	// 106
	[XP_SWITCHES_2_EFIS]		= "switches 2: EFIS",
	[XP_SWITCHES_3_AP_FDIR_HUD]	= "switches 3: AP/fdir/HUD",
	[XP_SWITCHES_4_ANTI_ICE]	= "switches 4: anti-ice",
	[XP_SWITCHES_5_ANTI_ICE_FUEL]	= "switches 5: anti-ice/fuel",
	[XP_SWITCHES_6_CLUTCH_ASTAB]	= "switches 6: clutch/astab",
	[XP_SWITCHES_7_MISC]		= "switches 7: misc",		// 112
	
	[XP_ANNUNCIATORS_GENERAL]	= "annunciators: general",	// 113
	[XP_ANNUNCIATORS_GENERAL_2]	= "annunciators: general",
	[XP_ANNUNCIATORS_ENGINE]	= "annunciators: engine",	// 115
	
	[XP_AUTOPILOT_ARMS]		= "autopilot arms",		// 116
	[XP_AUTOPILOT_MODES]		= "autopilot modes",
	[XP_AUTOPILOT_VALUES]		= "autopilot values",		// 118
	
	[XP_WEAPON_STATUS]		= "weapon status",		// 119
	[XP_PRESSURIZATION_STATUS]	= "pressurization status",
	[XP_APU_GPU_STATUS]		= "APU/GPU status",
	[XP_RADAR_STATUS]		= "radar status",
	[XP_HYDRAULIC_STATUS]		= "hydraulic status",
	[XP_ELECTRIC_SOLAR_STATUS]	= "elec & solar status",	// 124
	[XP_ICING_STATUS_1]		= "icing status 1",
	[XP_ICING_STATUS_2]		= "icing status 2",
	[XP_WARNING_STATUS]		= "warning status",
	[XP_FLITE_PLAN_LEGS]		= "flite-plan legs",		// 128
	
	[XP_HARDWARE_OPTIONS]		= "hardware options",		// 129
	[XP_CAMERA_LOCATION]		= "camera location",
	[XP_GROUND_LOCATION]		= "ground location"		// 131
};

#endif /* __9_61RC2_XP_DEFINITIONS_H */

/*! @} */

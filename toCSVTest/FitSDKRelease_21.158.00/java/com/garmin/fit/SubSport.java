/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.158.0Release
// Tag = production/release/21.158.0-0-gc9428aa
/////////////////////////////////////////////////////////////////////////////////////////////


package com.garmin.fit;


public enum SubSport  {
    GENERIC((short)0),
    TREADMILL((short)1),
    STREET((short)2),
    TRAIL((short)3),
    TRACK((short)4),
    SPIN((short)5),
    INDOOR_CYCLING((short)6),
    ROAD((short)7),
    MOUNTAIN((short)8),
    DOWNHILL((short)9),
    RECUMBENT((short)10),
    CYCLOCROSS((short)11),
    HAND_CYCLING((short)12),
    TRACK_CYCLING((short)13),
    INDOOR_ROWING((short)14),
    ELLIPTICAL((short)15),
    STAIR_CLIMBING((short)16),
    LAP_SWIMMING((short)17),
    OPEN_WATER((short)18),
    FLEXIBILITY_TRAINING((short)19),
    STRENGTH_TRAINING((short)20),
    WARM_UP((short)21),
    MATCH((short)22),
    EXERCISE((short)23),
    CHALLENGE((short)24),
    INDOOR_SKIING((short)25),
    CARDIO_TRAINING((short)26),
    INDOOR_WALKING((short)27),
    E_BIKE_FITNESS((short)28),
    BMX((short)29),
    CASUAL_WALKING((short)30),
    SPEED_WALKING((short)31),
    BIKE_TO_RUN_TRANSITION((short)32),
    RUN_TO_BIKE_TRANSITION((short)33),
    SWIM_TO_BIKE_TRANSITION((short)34),
    ATV((short)35),
    MOTOCROSS((short)36),
    BACKCOUNTRY((short)37),
    RESORT((short)38),
    RC_DRONE((short)39),
    WINGSUIT((short)40),
    WHITEWATER((short)41),
    SKATE_SKIING((short)42),
    YOGA((short)43),
    PILATES((short)44),
    INDOOR_RUNNING((short)45),
    GRAVEL_CYCLING((short)46),
    E_BIKE_MOUNTAIN((short)47),
    COMMUTING((short)48),
    MIXED_SURFACE((short)49),
    NAVIGATE((short)50),
    TRACK_ME((short)51),
    MAP((short)52),
    SINGLE_GAS_DIVING((short)53),
    MULTI_GAS_DIVING((short)54),
    GAUGE_DIVING((short)55),
    APNEA_DIVING((short)56),
    APNEA_HUNTING((short)57),
    VIRTUAL_ACTIVITY((short)58),
    OBSTACLE((short)59),
    BREATHING((short)62),
    SAIL_RACE((short)65),
    ULTRA((short)67),
    INDOOR_CLIMBING((short)68),
    BOULDERING((short)69),
    HIIT((short)70),
    AMRAP((short)73),
    EMOM((short)74),
    TABATA((short)75),
    PICKLEBALL((short)84),
    PADEL((short)85),
    INDOOR_WHEELCHAIR_WALK((short)86),
    INDOOR_WHEELCHAIR_RUN((short)87),
    INDOOR_HAND_CYCLING((short)88),
    SQUASH((short)94),
    BADMINTON((short)95),
    RACQUETBALL((short)96),
    TABLE_TENNIS((short)97),
    FLY_CANOPY((short)110),
    FLY_PARAGLIDE((short)111),
    FLY_PARAMOTOR((short)112),
    FLY_PRESSURIZED((short)113),
    FLY_NAVIGATE((short)114),
    FLY_TIMER((short)115),
    FLY_ALTIMETER((short)116),
    FLY_WX((short)117),
    FLY_VFR((short)118),
    FLY_IFR((short)119),
    ALL((short)254),
    INVALID((short)255);

    protected short value;

    private SubSport(short value) {
        this.value = value;
    }

    public static SubSport getByValue(final Short value) {
        for (final SubSport type : SubSport.values()) {
            if (value == type.value)
                return type;
        }

        return SubSport.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( SubSport value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}

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

import java.util.HashMap;
import java.util.Map;

public class ShrugExerciseName  {
    public static final int BARBELL_JUMP_SHRUG = 0;
    public static final int BARBELL_SHRUG = 1;
    public static final int BARBELL_UPRIGHT_ROW = 2;
    public static final int BEHIND_THE_BACK_SMITH_MACHINE_SHRUG = 3;
    public static final int DUMBBELL_JUMP_SHRUG = 4;
    public static final int DUMBBELL_SHRUG = 5;
    public static final int DUMBBELL_UPRIGHT_ROW = 6;
    public static final int INCLINE_DUMBBELL_SHRUG = 7;
    public static final int OVERHEAD_BARBELL_SHRUG = 8;
    public static final int OVERHEAD_DUMBBELL_SHRUG = 9;
    public static final int SCAPTION_AND_SHRUG = 10;
    public static final int SCAPULAR_RETRACTION = 11;
    public static final int SERRATUS_CHAIR_SHRUG = 12;
    public static final int WEIGHTED_SERRATUS_CHAIR_SHRUG = 13;
    public static final int SERRATUS_SHRUG = 14;
    public static final int WEIGHTED_SERRATUS_SHRUG = 15;
    public static final int WIDE_GRIP_JUMP_SHRUG = 16;
    public static final int INVALID = Fit.UINT16_INVALID;

    private static final Map<Integer, String> stringMap;

    static {
        stringMap = new HashMap<Integer, String>();
        stringMap.put(BARBELL_JUMP_SHRUG, "BARBELL_JUMP_SHRUG");
        stringMap.put(BARBELL_SHRUG, "BARBELL_SHRUG");
        stringMap.put(BARBELL_UPRIGHT_ROW, "BARBELL_UPRIGHT_ROW");
        stringMap.put(BEHIND_THE_BACK_SMITH_MACHINE_SHRUG, "BEHIND_THE_BACK_SMITH_MACHINE_SHRUG");
        stringMap.put(DUMBBELL_JUMP_SHRUG, "DUMBBELL_JUMP_SHRUG");
        stringMap.put(DUMBBELL_SHRUG, "DUMBBELL_SHRUG");
        stringMap.put(DUMBBELL_UPRIGHT_ROW, "DUMBBELL_UPRIGHT_ROW");
        stringMap.put(INCLINE_DUMBBELL_SHRUG, "INCLINE_DUMBBELL_SHRUG");
        stringMap.put(OVERHEAD_BARBELL_SHRUG, "OVERHEAD_BARBELL_SHRUG");
        stringMap.put(OVERHEAD_DUMBBELL_SHRUG, "OVERHEAD_DUMBBELL_SHRUG");
        stringMap.put(SCAPTION_AND_SHRUG, "SCAPTION_AND_SHRUG");
        stringMap.put(SCAPULAR_RETRACTION, "SCAPULAR_RETRACTION");
        stringMap.put(SERRATUS_CHAIR_SHRUG, "SERRATUS_CHAIR_SHRUG");
        stringMap.put(WEIGHTED_SERRATUS_CHAIR_SHRUG, "WEIGHTED_SERRATUS_CHAIR_SHRUG");
        stringMap.put(SERRATUS_SHRUG, "SERRATUS_SHRUG");
        stringMap.put(WEIGHTED_SERRATUS_SHRUG, "WEIGHTED_SERRATUS_SHRUG");
        stringMap.put(WIDE_GRIP_JUMP_SHRUG, "WIDE_GRIP_JUMP_SHRUG");
    }


    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum contsant
     */
    public static String getStringFromValue( Integer value ) {
        if( stringMap.containsKey( value ) ) {
            return stringMap.get( value );
        }

        return "";
    }

    /**
     * Returns the enum constant with the specified name.
     * @param value The enum string value
     * @return The enum constant or INVALID if unknown
     */
    public static Integer getValueFromString( String value ) {
        for( Map.Entry<Integer, String> entry : stringMap.entrySet() ) {
            if( entry.getValue().equals( value ) ) {
                return entry.getKey();
            }
        }

        return INVALID;
    }

}

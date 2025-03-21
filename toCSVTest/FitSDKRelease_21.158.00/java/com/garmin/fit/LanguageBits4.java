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

public class LanguageBits4  {
    public static final short BRAZILIAN_PORTUGUESE = 0x01;
    public static final short INDONESIAN = 0x02;
    public static final short MALAYSIAN = 0x04;
    public static final short VIETNAMESE = 0x08;
    public static final short BURMESE = 0x10;
    public static final short MONGOLIAN = 0x20;
    public static final short INVALID = Fit.UINT8Z_INVALID;

    private static final Map<Short, String> stringMap;

    static {
        stringMap = new HashMap<Short, String>();
        stringMap.put(BRAZILIAN_PORTUGUESE, "BRAZILIAN_PORTUGUESE");
        stringMap.put(INDONESIAN, "INDONESIAN");
        stringMap.put(MALAYSIAN, "MALAYSIAN");
        stringMap.put(VIETNAMESE, "VIETNAMESE");
        stringMap.put(BURMESE, "BURMESE");
        stringMap.put(MONGOLIAN, "MONGOLIAN");
    }


    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum contsant
     */
    public static String getStringFromValue( Short value ) {
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
    public static Short getValueFromString( String value ) {
        for( Map.Entry<Short, String> entry : stringMap.entrySet() ) {
            if( entry.getValue().equals( value ) ) {
                return entry.getKey();
            }
        }

        return INVALID;
    }

}

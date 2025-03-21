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


public enum TimeMode  {
    HOUR12((short)0),
    HOUR24((short)1),
    MILITARY((short)2),
    HOUR_12_WITH_SECONDS((short)3),
    HOUR_24_WITH_SECONDS((short)4),
    UTC((short)5),
    INVALID((short)255);

    protected short value;

    private TimeMode(short value) {
        this.value = value;
    }

    public static TimeMode getByValue(final Short value) {
        for (final TimeMode type : TimeMode.values()) {
            if (value == type.value)
                return type;
        }

        return TimeMode.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( TimeMode value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
